#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "nodosArboles.h"
using namespace std;

// Class to represent ROJO-NEGRO Tree
class ArbolRJ
{
public:
    pnodoRJ raiz;
    inline void RotacionIzquierda(pnodoRJ& raiz, pnodoRJ& temp);
    inline void RotacionDerecha(pnodoRJ& raiz, pnodoRJ& temp);
    inline void ArreglarArbol(pnodoRJ& raiz, pnodoRJ& temp);

    // Constructor

    inline void Insertar(int codigoPais, int codigoHotel, int numeroPiso, int codHabitacion, string tipo, int numeroCamas, int precio, string estadoHabitacion);
    inline void imprimirRJ(pnodoRJ r);
    inline pnodoRJ Insertar2(pnodoRJ raiz, pnodoRJ temp);
    inline string preguntarReservacion(int codPais, int codHotel);
    inline string preguntar(int codPais, int codHotel, int numPiso, int codHab);
    inline string reservarH(int codPais, int codHotel, pnodoRJ raiz, string mensaje);
    inline string reservarHoteles(int codPais, int codHotel, int numPiso, int codHab, pnodoRJ temp, string mensaje);
    inline string CancelarR(int codPais, int codHotel, int numPiso, int codHab, pnodoRJ temp ,string mensaje);
    inline string preguntarCancelacion(int codPais, int codHotel, int numPiso, int codHab);
    ArbolRJ() { raiz = NULL; }
};

// A recursive function to do inorder traversal


/* A utility function to Insertar
    a new nodo with given key
   in BST */
inline pnodoRJ ArbolRJ::Insertar2(pnodoRJ raiz, pnodoRJ temp)
{
    /* If the tree is empty, return a new nodo */
    if (raiz == NULL)
        return temp;

    /* Otherwise, recur down the tree */
    if (temp->codHab < raiz->codHab)
    {
        raiz->izq = Insertar2(raiz->izq, temp);
        raiz->izq->padre = raiz;
        return raiz;
    }
    else if (temp->codHab > raiz->codHab)
    {
        raiz->der = Insertar2(raiz->der, temp);
        raiz->der->padre = raiz;
        return raiz;
    }
    delete raiz;
    return temp;
}

// Utility function to do level order traversal  
inline void ArbolRJ::RotacionIzquierda(pnodoRJ& raiz, pnodoRJ& temp)
{
    pnodoRJ pt_der = temp->der;

    temp->der = pt_der->izq;

    if (temp->der != NULL)
        temp->der->padre = temp;

    pt_der->padre = temp->padre;

    if (temp->padre == NULL)
        raiz = pt_der;

    else if (temp == temp->padre->izq)
        temp->padre->izq = pt_der;

    else
        temp->padre->der = pt_der;

    pt_der->izq = temp;
    temp->padre = pt_der;
}

inline void ArbolRJ::RotacionDerecha(pnodoRJ& raiz, pnodoRJ& temp)
{
    pnodoRJ pt_izq = temp->izq;

    temp->izq = pt_izq->der;

    if (temp->izq != NULL)
        temp->izq->padre = temp;

    pt_izq->padre = temp->padre;

    if (temp->padre == NULL)
        raiz = pt_izq;

    else if (temp == temp->padre->izq)
        temp->padre->izq = pt_izq;

    else
        temp->padre->der = pt_izq;

    pt_izq->der = temp;
    temp->padre = pt_izq;
}

// This function fixes violations 
// caused by BST insertion
inline void ArbolRJ::ArreglarArbol(pnodoRJ& raiz, pnodoRJ& temp)
{
    pnodoRJ padre_temp = NULL;
    pnodoRJ temp_abuelo = NULL;

    while ((temp != raiz) && (temp->color != NEGRO) && (temp->padre->color == ROJO))
    {

        padre_temp = temp->padre;
        temp_abuelo = temp->padre->padre;

        /*  Case : A
            padre of temp is izq child
            of Grand-padre of temp */
        if (padre_temp == temp_abuelo->izq)
        {

            pnodoRJ temp_tio = temp_abuelo->der;

            /* Case : 1
               The uncle of temp is also ROJO
               Only Recoloring required */
            if (temp_tio != NULL && temp_tio->color ==
                ROJO)
            {
                temp_abuelo->color = ROJO;
                padre_temp->color = NEGRO;
                temp_tio->color = NEGRO;
                temp = temp_abuelo;
            }

            else
            {
                /* Case : 2
                   temp is der child of its padre
                   izq-rotation required */
                if (temp == padre_temp->der)
                {
                    RotacionIzquierda(raiz, padre_temp);
                    temp = padre_temp;
                    padre_temp = temp->padre;
                }
                RotacionDerecha(raiz, temp_abuelo);
                swap(padre_temp->color, temp_abuelo->color);
                temp = padre_temp;
            }
        }

        else
        {
            pnodoRJ temp_tio = temp_abuelo->izq;

            /*  Case : 1
                The uncle of temp is also ROJO
                Only Recoloring required */
            if ((temp_tio != NULL) && (temp_tio->color == ROJO))
            {
                temp_abuelo->color = ROJO;
                padre_temp->color = NEGRO;
                temp_tio->color = NEGRO;
                temp = temp_abuelo;
            }
            else
            {
                /* Case : 2
                   temp is izq child of its padre
                   der-rotation required */
                if (temp == padre_temp->izq)
                {
                    RotacionDerecha(raiz, padre_temp);
                    temp = padre_temp;
                    padre_temp = temp->padre;
                }
                RotacionIzquierda(raiz, temp_abuelo);
                swap(padre_temp->color, temp_abuelo->color);
                temp = padre_temp;
            }
        }
    }
    raiz->color = NEGRO;
}

inline void ArbolRJ::Insertar(int codigoPais, int codigoHotel, int numeroPiso, int codHabitacion, string tipo, int numeroCamas, int precio, string estadoHabitacion)
{
    pnodoRJ temp = new nodoRJ(codigoPais, codigoHotel, numeroPiso, codHabitacion, tipo, numeroCamas, precio, estadoHabitacion);

    // Do a normal BST Insertar
    raiz = Insertar2(raiz, temp);

    // fix ROJO NEGRO Tree violations
    ArreglarArbol(raiz, temp);
}

inline void ArbolRJ::imprimirRJ(pnodoRJ r) {
    if (r == NULL)
        return;
    else {
        imprimirRJ(r->izq);
        cout << r->codPais << ", " << r->codHotel << ", " << r->numPiso << ", " << r->codHab << ", " << r->tipoCuarto << ", " << r->numCamas << ", " << r->precioHab << ", " << r->estadoHab << endl;
        imprimirRJ(r->der);
    }
}

inline string ArbolRJ::preguntarReservacion(int codPais, int codHotel) {
    string mensaje;
    mensaje=reservarH(codPais, codHotel, raiz, "");
    return mensaje;
}

inline string ArbolRJ::reservarH(int codPais, int codHotel, pnodoRJ temp,string mensaje)
{

    if (temp==NULL)
        return mensaje;


    mensaje=reservarH(codPais, codHotel, temp->izq,mensaje);
    if (temp->codPais == codPais) {

        if (temp->codHotel == codHotel) {

            if (temp->estadoHab == "R") {
                mensaje= mensaje + to_string(temp->codPais)+", "+ to_string(temp->codHotel)+", "+ to_string(temp->numPiso)+ ", "+to_string(temp->codHab)+ ", " + temp->tipoCuarto+ ", "+ to_string(temp->numCamas) +", "+to_string(temp->precioHab) +", "+temp->estadoHab+ " -> ";
               
            }
        }
    }

    mensaje=reservarH(codPais, codHotel, temp->der,mensaje);

    return mensaje;

}


inline string ArbolRJ::preguntar(int codPais, int codHotel, int numPiso, int codHab) {

 
    string mensaje=reservarHoteles(codPais, codHotel, numPiso, codHab, raiz, "");
    return mensaje;
}


inline string ArbolRJ::reservarHoteles(int codPais, int codHotel, int numPiso, int codHab, pnodoRJ temp, string mensaje)
{
    if (temp == NULL)
        return mensaje;


    mensaje=reservarHoteles(codPais, codHotel, numPiso, codHab, temp->izq,mensaje);

    if (temp->codPais == codPais) {

        if (temp->codHotel == codHotel) {

            if (temp->numPiso == numPiso) {

                if (temp->codHab == codHab) {
                    if (temp->estadoHab == "L") {
                        temp->estadoHab = "R";
                        mensaje = "La habitacion fue Reservado con Exito";
                        return mensaje;
                    }
                }
            }
        }
    }
    mensaje=reservarHoteles(codPais, codHotel, numPiso, codHab, temp->der,mensaje);
    return mensaje;

}
inline string ArbolRJ::preguntarCancelacion(int codPais, int codHotel, int numPiso, int codHab) {
    string mensaje;
    mensaje = CancelarR( codPais,  codHotel,  numPiso,  codHab, raiz, "");
    return mensaje;

}

inline string ArbolRJ::CancelarR(int codPais, int codHotel, int numPiso, int codHab,pnodoRJ temp ,string mensaje)
{

    if (temp == NULL)
        return mensaje;


    mensaje = CancelarR(codPais, codHotel, numPiso, codHab, temp->izq, mensaje);

    if (temp->codPais == codPais) {

        if (temp->codHotel == codHotel) {

            if (temp->numPiso == numPiso) {

                if (temp->codHab == codHab) {
                    if (temp->estadoHab == "R") {
                        temp->estadoHab = "L";
                        mensaje = "La Reserva fue cancelada con Exito";
                        return mensaje;
                    }
                }
            }
        }
    }
    mensaje = CancelarR(codPais, codHotel, numPiso, codHab, temp->der, mensaje);
    return mensaje;

}
