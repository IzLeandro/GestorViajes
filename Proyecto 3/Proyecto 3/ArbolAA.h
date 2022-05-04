#pragma once
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <fstream>
#include "ArbolRJ.h"
using namespace std;

class ArbolAA
{
public:
    pnodoAA raiz;

    inline int insertarNodo(int codigoPais, int ident, int codigoTipo, int placas, string modelos, int numeroAsientos, int annios, int precios, string estado);
    inline void Equilibrar1(pnodoAA);
    inline bool dividir(pnodoAA);
    inline void Equilibrar2(pnodoAA);
    inline pnodoAA insertarBinario(pnodoAA temp, pnodoAA aux);
    inline void imprimir(pnodoAA temp);
    inline string reservar(int codPais, int id, pnodoAA temp, string mensaje);
    inline string preguntarReservacion(int codPais, int idAgencia);

    inline string preguntar(int codPais, int id, int codTipo, int placas);
    inline string reservacion(int codPais, int id, int codTipo, int placas, pnodoAA temp, string mensaje);
    inline string CancelarRA(int codPais, int id, int codTipo, int placas, pnodoAA temp, string mensaje);
    ArbolAA() { raiz = NULL; }

};

inline int ArbolAA::insertarNodo(int codigoPais, int ident, int codigoTipo, int placas, string modelos, int numeroAsientos, int annios, int precios, string estado)
{
    pnodoAA temp = new nodoAA(codigoPais, ident, codigoTipo, placas, modelos, numeroAsientos, annios, precios, estado);
    temp->nivel = 1;
    temp->cont = 0;
    temp->Hizq = NULL;
    temp->Hder = NULL;
    temp->padre = NULL;
    temp = insertarBinario(raiz, temp);
    return temp->cont;
}


inline void ArbolAA::Equilibrar1(pnodoAA temp)
{
    pnodoAA ptr = temp->Hizq;
    if (temp->padre->Hizq == temp)
        temp->padre->Hizq = ptr;
    else
        temp->padre->Hder = ptr;
    ptr->padre = temp->padre;
    temp->padre = ptr;
    temp->Hizq = ptr->Hder;
    if (temp->Hizq != NULL)
        temp->Hizq->padre = temp;
    ptr->Hder = temp;
    temp->nivel = (temp->Hizq ? temp->Hizq->nivel + 1 : 1);
}

inline bool ArbolAA::dividir(pnodoAA temp)
{
    pnodoAA ptr = temp->Hder;
    if (ptr && ptr->Hder && (ptr->Hder->nivel == temp->nivel))
    {
        if (temp->padre->Hizq == temp)
            temp->padre->Hizq = ptr;
        else
            temp->padre->Hder = ptr;
        ptr->padre = temp->padre;
        temp->padre = ptr;
        temp->Hder = ptr->Hizq;
        if (temp->Hder != NULL)
            temp->Hder->padre = temp;
        ptr->Hizq = temp;
        ptr->nivel = temp->nivel + 1;
        return true;
    }
    return false;
}

inline void ArbolAA::Equilibrar2(pnodoAA temp)
{
    temp->Hizq = NULL;
    temp->Hder = NULL;
    temp->nivel = 1;
    for (temp = temp->padre; temp != raiz; temp = temp->padre)
    {
        if (temp->nivel != (temp->Hizq ? temp->Hizq->nivel + 1 : 1))
        {
            Equilibrar1(temp);
            if (temp->Hder == NULL)
                temp = temp->padre;
            else if (temp->nivel != temp->Hder->nivel)
                temp = temp->padre;
        }
        if (temp->padre != raiz)
        {
            if (dividir(temp->padre) == false)
                break;
        }
    }
}

inline pnodoAA ArbolAA::insertarBinario(pnodoAA temp, pnodoAA aux)
{
    if (raiz == NULL)
    {
        aux->cont = 1;
        aux->padre = NULL;
        aux->Hizq = NULL;
        aux->Hder = NULL;
        raiz = aux;
        return raiz;
    }
    if (aux->placa < temp->placa)
    {
        if (temp->Hizq)
            return insertarBinario(temp->Hizq, aux);
        temp->Hizq = aux;
        aux->padre = temp;
        aux->cont = 1;
        Equilibrar2(aux);
        return aux;
    }
    if (aux->placa > temp->placa)
    {
        if (temp->Hder)
            return insertarBinario(temp->Hder, aux);
        temp->Hder = aux;
        aux->padre = temp;
        aux->cont = 1;
        Equilibrar2(aux);
        return aux;
    }
    temp->cont++;
    delete aux;
    return temp;
}

inline void ArbolAA::imprimir(pnodoAA temp)
{
    if (!temp)
        return;
    imprimir(temp->Hizq);
    cout << temp->codPais << ", " << temp->id << ", " << temp->codTipo << ", " << temp->placa << ", " << temp->modelo << ", " << temp->numAsientos << ", " << temp->annio << ", " << temp->precio << ", " << temp->estadoCarro << " -> ";
    imprimir(temp->Hder);
}

inline string ArbolAA::preguntarReservacion(int codPais,int idAgencia) {
    string mensaje;

    mensaje = reservar(codPais, idAgencia, raiz, "");
    return mensaje;
}

inline string ArbolAA::reservar(int codPais, int id, pnodoAA temp, string mensaje) {

    if (!temp)
        return mensaje;


    mensaje=reservar(codPais, id, temp->Hizq,mensaje);
    if (temp->codPais == codPais) {

        if (temp->id == id) {


            if (temp->estadoCarro == "R") {
                mensaje=mensaje+ to_string(temp->codPais)+", "+ to_string(temp->id)+ ", "+ to_string(temp->codTipo)+", "+ to_string(temp->placa)+", "+ temp->modelo+", "+ to_string(temp->numAsientos)+ ", " + to_string(temp->annio)+", "+ to_string(temp->precio)+ ", " + temp->estadoCarro + " -> ";
            }


        }
    }
    mensaje= reservar(codPais, id, temp->Hder, mensaje);

    return mensaje;

}


inline string ArbolAA::preguntar(int codPais, int id, int codTipo, int placas) {

    string mensaje;
   mensaje = reservacion(codPais, id, codTipo, placas, raiz,"");

   return mensaje;
}

inline string ArbolAA::reservacion(int codPais, int id, int codTipo, int placas, pnodoAA temp, string mensaje) {

    if (!temp)
        return mensaje;


    mensaje= reservacion(codPais, id, codTipo, placas, temp->Hizq,mensaje);
    if (temp->codPais == codPais) {

        if (temp->id == id) {
            if (temp->codTipo == codTipo) {
                if (temp->placa == placas) {
                    if (temp->estadoCarro == "L") {
                        temp->estadoCarro = "R";
                        mensaje="Carro ha sido Reservado con Exito" ;
                        return mensaje;
                    }

                }
            }
        }
    }
    mensaje= reservacion(codPais, id, codTipo, placas, temp->Hder,mensaje);
    return mensaje;

}
inline string ArbolAA::CancelarRA(int codPais, int id, int codTipo, int placas, pnodoAA temp, string mensaje) {

    if (!temp)
        return mensaje;


    mensaje = CancelarRA(codPais, id, codTipo, placas, temp->Hizq, mensaje);
    if (temp->codPais == codPais) {

        if (temp->id == id) {
            if (temp->codTipo == codTipo) {
                if (temp->placa == placas) {
                    if (temp->estadoCarro == "R") {
                        temp->estadoCarro = "L";
                        mensaje = " Reserva ha sido cancelada con Exito";
                        return mensaje;
                    }

                }
            }
        }
    }
    mensaje = CancelarRA(codPais, id, codTipo, placas, temp->Hder, mensaje);
    return mensaje;

}