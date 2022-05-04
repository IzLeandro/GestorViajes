#pragma once
#include "Controlador.h"
#include <msclr/marshal_cppstd.h>

namespace Proyecto3 {
    Controlador controlH;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Resumen de MyForm
    /// </summary>
    public ref class AdminHotel : public System::Windows::Forms::Form
    {
    public:
        AdminHotel(void){
            InitializeComponent();
        }

        AdminHotel(Controlador control) {
            InitializeComponent();
            controlH = control;
        }

    protected:
        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        ~AdminHotel(){
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TabControl^ tabControl1;
    protected:
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::TabControl^ tabControl2;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::TabPage^ tabPage5;
    private: System::Windows::Forms::TabPage^ tabPage6;
    private: System::Windows::Forms::TabControl^ tabControl3;
    private: System::Windows::Forms::TabPage^ tabPage7;
    private: System::Windows::Forms::TabPage^ tabPage8;
    private: System::Windows::Forms::TabPage^ tabPage9;
    private: System::Windows::Forms::TabPage^ tabPage10;
    private: System::Windows::Forms::TabControl^ tabControl4;
    private: System::Windows::Forms::TabPage^ tabPage11;
    private: System::Windows::Forms::TabPage^ tabPage12;
    private: System::Windows::Forms::TabPage^ tabPage13;
    private: System::Windows::Forms::TabPage^ tabPage14;
    private: System::Windows::Forms::TabPage^ tabPage15;
    private: System::Windows::Forms::TabPage^ tabPage16;
    private: System::Windows::Forms::TabPage^ tabPage17;
    private: System::Windows::Forms::TabPage^ tabPage18;
    private: System::Windows::Forms::TabPage^ tabPage19;
    private: System::Windows::Forms::TabControl^ tabControl5;
    private: System::Windows::Forms::TabPage^ tabPage20;
    private: System::Windows::Forms::TabPage^ tabPage21;
    private: System::Windows::Forms::TabPage^ tabPage22;
    private: System::Windows::Forms::TabPage^ tabPage23;
    private: System::Windows::Forms::TabPage^ tabPage24;
    private: System::Windows::Forms::TabPage^ tabPage25;
    private: System::Windows::Forms::TabPage^ tabPage26;
    private: System::Windows::Forms::TabPage^ tabPage27;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ txtCodHotelInsertarHotel;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ txtCodPaisInsertarHotel;


    private: System::Windows::Forms::Button^ btnInsertarHotel;
    private: System::Windows::Forms::Button^ btnInsertarPiso;
    private: System::Windows::Forms::TextBox^ txtCodPisoInsertarPiso;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ txtCantHabsInsertarPiso;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ txtNombrePisoInsertarPiso;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ txtHotelInsertarPiso;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ txtCodPaisInsertarPiso;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Button^ btnInsertarHabitacion;
    private: System::Windows::Forms::TextBox^ txtCodPisoInsertarHab;


    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TextBox^ txtNumCamasInsertarHab;

    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ txtTipoHabInsertarHab;

    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TextBox^ txtCodHotelInsertarHab;

    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TextBox^ txtCodPaisInsertarHab;

    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::TextBox^ txtEstadoHabInsertarHab;

    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TextBox^ txtPrecioHabInsertarHab;

    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Button^ btnEliminarHotel;
    private: System::Windows::Forms::TextBox^ txtCodHotelEliminarHotel;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::TextBox^ txtCodPaisEliminarHotel;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::TextBox^ txtCodPisoEliminarPiso;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Button^ btnEliminarPiso;
    private: System::Windows::Forms::TextBox^ txtCodHotelEliminarPiso;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TextBox^ txtCodPaisEliminarPiso;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::TextBox^ txtCodHabEliminarHab;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::TextBox^ txtCodPisoEliminarHab;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Button^ btnEliminarHab;
    private: System::Windows::Forms::TextBox^ txtCodHotelEliminarHab;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::TextBox^ txtCodPaisEliminarHab;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Button^ btnModEstrellas;
    private: System::Windows::Forms::TextBox^ txtEstrellasModEstrellas;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::TextBox^ txtCodHotelModEstrellas;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::TextBox^ txtCodPaisModEstrellas;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Button^ btnModNomHotel;
    private: System::Windows::Forms::TextBox^ txtNomHotelModNomHotel;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::TextBox^ txtCodHotelModNomHotel;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::TextBox^ txtCodPaisModNomHotel;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::TextBox^ txtCantHabsModCantHabs;

    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Button^ btnModCantHabs;

    private: System::Windows::Forms::TextBox^ txtCodPisoModCantHabs;

    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::TextBox^ txtCodHotelModCantHabs;

    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::TextBox^ txtCodPaisModCantHabs;

    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::TextBox^ txtNomPisoModNomPiso;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Button^ btnModNomPiso;
    private: System::Windows::Forms::TextBox^ txtCodPisoModNomPiso;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::TextBox^ txtCodHotelModNomPiso;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::TextBox^ txtCodPaisModNomPiso;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::TextBox^ txtCodHabModTC;

    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::TextBox^ txtTCModTC;

    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Button^ btnModTC;

    private: System::Windows::Forms::TextBox^ txtCodPisoModTC;

    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::TextBox^ txtCodHotelModTC;

    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::TextBox^ txtCodPaisModTC;

    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::TextBox^ txtCodHabModNumCamas;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::TextBox^ txtNumCamasModNumCamas;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Button^ btnModNumCamas;
    private: System::Windows::Forms::TextBox^ txtCodPisoModNumCamas;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::TextBox^ txtCodHotelModNumCamas;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::TextBox^ txtCodPaisModNumCamas;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::TextBox^ txtCodHabModPrecio;
    private: System::Windows::Forms::Label^ label51;
    private: System::Windows::Forms::TextBox^ txtPrecioModPrecio;
    private: System::Windows::Forms::Label^ label52;
    private: System::Windows::Forms::Button^ btnModPrecio;
    private: System::Windows::Forms::TextBox^ txtCodPisoModPrecio;
    private: System::Windows::Forms::Label^ label53;
    private: System::Windows::Forms::TextBox^ txtCodHotelModPrecio;
    private: System::Windows::Forms::Label^ label54;
    private: System::Windows::Forms::TextBox^ txtCodPaisModPrecio;
    private: System::Windows::Forms::Label^ label55;
    private: System::Windows::Forms::TextBox^ txtCodHabModEstadoHab;
    private: System::Windows::Forms::Label^ label56;
    private: System::Windows::Forms::TextBox^ txtEstHabModEstadoHab;
    private: System::Windows::Forms::Label^ label57;
    private: System::Windows::Forms::Button^ btnModEstadoHab;
    private: System::Windows::Forms::TextBox^ txtCodPisoModEstadoHab;
    private: System::Windows::Forms::Label^ label58;
    private: System::Windows::Forms::TextBox^ txtCodHotelModEstadoHab;
    private: System::Windows::Forms::Label^ label59;
    private: System::Windows::Forms::TextBox^ txtCodPaisModEstadoHab;
    private: System::Windows::Forms::Label^ label60;
    private: System::Windows::Forms::Button^ btnConsultarHoteles;
    private: System::Windows::Forms::RichTextBox^ txtHoteles;
    private: System::Windows::Forms::Button^ btnConsultarPisos;
    private: System::Windows::Forms::RichTextBox^ txtPisos;
    private: System::Windows::Forms::TextBox^ txtCodHotelConsultarPisos;
    private: System::Windows::Forms::Label^ label61;
    private: System::Windows::Forms::TextBox^ txtCodPaisConsultarPisos;
    private: System::Windows::Forms::Label^ label62;
    private: System::Windows::Forms::Button^ btnConsultarHab;
    private: System::Windows::Forms::RichTextBox^ txtHabitaciones;
    private: System::Windows::Forms::TextBox^ txtCodPisoConsultarHab;
    private: System::Windows::Forms::Label^ label63;
    private: System::Windows::Forms::TextBox^ txtCodHotelConsultarHab;
    private: System::Windows::Forms::Label^ label64;
    private: System::Windows::Forms::TextBox^ txtCodPaisConsultarHab;
    private: System::Windows::Forms::Label^ label65;
    private: System::Windows::Forms::Button^ btnConsultarEstrellas;
    private: System::Windows::Forms::RichTextBox^ txtEstrellas;
    private: System::Windows::Forms::TextBox^ txtCodHotelConsultarEstrellas;
    private: System::Windows::Forms::Label^ label66;
    private: System::Windows::Forms::TextBox^ txtCodPaisConsultarEstrellas;
    private: System::Windows::Forms::Label^ label67;
    private: System::Windows::Forms::Button^ btnConsultarCantHabs;
    private: System::Windows::Forms::RichTextBox^ txtConsultarCantHabs;
    private: System::Windows::Forms::TextBox^ txtCodPisoConsultarCantHabs;
    private: System::Windows::Forms::Label^ label68;
    private: System::Windows::Forms::TextBox^ txtCodHotelConsultarCantHabs;
    private: System::Windows::Forms::Label^ label69;
    private: System::Windows::Forms::TextBox^ txtCodPaisConsultarCantHabs;
    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::Button^ btnConsultarUltHotel;
    private: System::Windows::Forms::RichTextBox^ txtUltHotel;
    private: System::Windows::Forms::Button^ btnUltPiso;
    private: System::Windows::Forms::RichTextBox^ txtUltPiso;
    private: System::Windows::Forms::Button^ btnUltHab;
    private: System::Windows::Forms::RichTextBox^ txtUltHab;
    private: System::Windows::Forms::TabPage^ tabPage28;
    private: System::Windows::Forms::Button^ btnReservaciones;
    private: System::Windows::Forms::RichTextBox^ txtReservaciones;
    private: System::Windows::Forms::TabPage^ tabPage29;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label71;


private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::TextBox^ reserva2;

private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::TextBox^ reserva1;

private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Button^ FacturarH;
private: System::Windows::Forms::RichTextBox^ mostrarFacturacion;


    private:
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        void InitializeComponent(void)
        {
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->btnInsertarHotel = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelInsertarHotel = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisInsertarHotel = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->btnInsertarPiso = (gcnew System::Windows::Forms::Button());
            this->txtCodPisoInsertarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->txtCantHabsInsertarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->txtNombrePisoInsertarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->txtHotelInsertarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisInsertarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->txtEstadoHabInsertarHab = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->txtPrecioHabInsertarHab = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->btnInsertarHabitacion = (gcnew System::Windows::Forms::Button());
            this->txtCodPisoInsertarHab = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->txtNumCamasInsertarHab = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->txtTipoHabInsertarHab = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelInsertarHab = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisInsertarHab = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
            this->btnEliminarHotel = (gcnew System::Windows::Forms::Button());
            this->txtCodHotelEliminarHotel = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisEliminarHotel = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
            this->txtCodPisoEliminarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->btnEliminarPiso = (gcnew System::Windows::Forms::Button());
            this->txtCodHotelEliminarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisEliminarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
            this->txtCodHabEliminarHab = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->txtCodPisoEliminarHab = (gcnew System::Windows::Forms::TextBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->btnEliminarHab = (gcnew System::Windows::Forms::Button());
            this->txtCodHotelEliminarHab = (gcnew System::Windows::Forms::TextBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisEliminarHab = (gcnew System::Windows::Forms::TextBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
            this->btnModEstrellas = (gcnew System::Windows::Forms::Button());
            this->txtEstrellasModEstrellas = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelModEstrellas = (gcnew System::Windows::Forms::TextBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModEstrellas = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
            this->btnModNomHotel = (gcnew System::Windows::Forms::Button());
            this->txtNomHotelModNomHotel = (gcnew System::Windows::Forms::TextBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelModNomHotel = (gcnew System::Windows::Forms::TextBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModNomHotel = (gcnew System::Windows::Forms::TextBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
            this->txtCantHabsModCantHabs = (gcnew System::Windows::Forms::TextBox());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->btnModCantHabs = (gcnew System::Windows::Forms::Button());
            this->txtCodPisoModCantHabs = (gcnew System::Windows::Forms::TextBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelModCantHabs = (gcnew System::Windows::Forms::TextBox());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModCantHabs = (gcnew System::Windows::Forms::TextBox());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
            this->txtNomPisoModNomPiso = (gcnew System::Windows::Forms::TextBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->btnModNomPiso = (gcnew System::Windows::Forms::Button());
            this->txtCodPisoModNomPiso = (gcnew System::Windows::Forms::TextBox());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelModNomPiso = (gcnew System::Windows::Forms::TextBox());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModNomPiso = (gcnew System::Windows::Forms::TextBox());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
            this->txtCodHabModTC = (gcnew System::Windows::Forms::TextBox());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->txtTCModTC = (gcnew System::Windows::Forms::TextBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->btnModTC = (gcnew System::Windows::Forms::Button());
            this->txtCodPisoModTC = (gcnew System::Windows::Forms::TextBox());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelModTC = (gcnew System::Windows::Forms::TextBox());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModTC = (gcnew System::Windows::Forms::TextBox());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
            this->txtCodHabModNumCamas = (gcnew System::Windows::Forms::TextBox());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->txtNumCamasModNumCamas = (gcnew System::Windows::Forms::TextBox());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->btnModNumCamas = (gcnew System::Windows::Forms::Button());
            this->txtCodPisoModNumCamas = (gcnew System::Windows::Forms::TextBox());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelModNumCamas = (gcnew System::Windows::Forms::TextBox());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModNumCamas = (gcnew System::Windows::Forms::TextBox());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
            this->txtCodHabModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->txtPrecioModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->btnModPrecio = (gcnew System::Windows::Forms::Button());
            this->txtCodPisoModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
            this->txtCodHabModEstadoHab = (gcnew System::Windows::Forms::TextBox());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->txtEstHabModEstadoHab = (gcnew System::Windows::Forms::TextBox());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->btnModEstadoHab = (gcnew System::Windows::Forms::Button());
            this->txtCodPisoModEstadoHab = (gcnew System::Windows::Forms::TextBox());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelModEstadoHab = (gcnew System::Windows::Forms::TextBox());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModEstadoHab = (gcnew System::Windows::Forms::TextBox());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->btnConsultarHoteles = (gcnew System::Windows::Forms::Button());
            this->txtHoteles = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
            this->btnConsultarPisos = (gcnew System::Windows::Forms::Button());
            this->txtPisos = (gcnew System::Windows::Forms::RichTextBox());
            this->txtCodHotelConsultarPisos = (gcnew System::Windows::Forms::TextBox());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisConsultarPisos = (gcnew System::Windows::Forms::TextBox());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
            this->btnConsultarHab = (gcnew System::Windows::Forms::Button());
            this->txtHabitaciones = (gcnew System::Windows::Forms::RichTextBox());
            this->txtCodPisoConsultarHab = (gcnew System::Windows::Forms::TextBox());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelConsultarHab = (gcnew System::Windows::Forms::TextBox());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisConsultarHab = (gcnew System::Windows::Forms::TextBox());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
            this->btnConsultarEstrellas = (gcnew System::Windows::Forms::Button());
            this->txtEstrellas = (gcnew System::Windows::Forms::RichTextBox());
            this->txtCodHotelConsultarEstrellas = (gcnew System::Windows::Forms::TextBox());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisConsultarEstrellas = (gcnew System::Windows::Forms::TextBox());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->tabPage24 = (gcnew System::Windows::Forms::TabPage());
            this->btnConsultarCantHabs = (gcnew System::Windows::Forms::Button());
            this->txtConsultarCantHabs = (gcnew System::Windows::Forms::RichTextBox());
            this->txtCodPisoConsultarCantHabs = (gcnew System::Windows::Forms::TextBox());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->txtCodHotelConsultarCantHabs = (gcnew System::Windows::Forms::TextBox());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisConsultarCantHabs = (gcnew System::Windows::Forms::TextBox());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->tabPage25 = (gcnew System::Windows::Forms::TabPage());
            this->btnConsultarUltHotel = (gcnew System::Windows::Forms::Button());
            this->txtUltHotel = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage26 = (gcnew System::Windows::Forms::TabPage());
            this->btnUltPiso = (gcnew System::Windows::Forms::Button());
            this->txtUltPiso = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage27 = (gcnew System::Windows::Forms::TabPage());
            this->btnUltHab = (gcnew System::Windows::Forms::Button());
            this->txtUltHab = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage28 = (gcnew System::Windows::Forms::TabPage());
            this->reserva2 = (gcnew System::Windows::Forms::TextBox());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->reserva1 = (gcnew System::Windows::Forms::TextBox());
            this->label74 = (gcnew System::Windows::Forms::Label());
            this->btnReservaciones = (gcnew System::Windows::Forms::Button());
            this->txtReservaciones = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage29 = (gcnew System::Windows::Forms::TabPage());
            this->FacturarH = (gcnew System::Windows::Forms::Button());
            this->mostrarFacturacion = (gcnew System::Windows::Forms::RichTextBox());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tabControl2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->tabPage5->SuspendLayout();
            this->tabPage6->SuspendLayout();
            this->tabControl3->SuspendLayout();
            this->tabPage7->SuspendLayout();
            this->tabPage8->SuspendLayout();
            this->tabPage9->SuspendLayout();
            this->tabPage10->SuspendLayout();
            this->tabControl4->SuspendLayout();
            this->tabPage11->SuspendLayout();
            this->tabPage12->SuspendLayout();
            this->tabPage13->SuspendLayout();
            this->tabPage14->SuspendLayout();
            this->tabPage15->SuspendLayout();
            this->tabPage16->SuspendLayout();
            this->tabPage17->SuspendLayout();
            this->tabPage18->SuspendLayout();
            this->tabPage19->SuspendLayout();
            this->tabControl5->SuspendLayout();
            this->tabPage20->SuspendLayout();
            this->tabPage21->SuspendLayout();
            this->tabPage22->SuspendLayout();
            this->tabPage23->SuspendLayout();
            this->tabPage24->SuspendLayout();
            this->tabPage25->SuspendLayout();
            this->tabPage26->SuspendLayout();
            this->tabPage27->SuspendLayout();
            this->tabPage28->SuspendLayout();
            this->tabPage29->SuspendLayout();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage6);
            this->tabControl1->Controls->Add(this->tabPage10);
            this->tabControl1->Controls->Add(this->tabPage19);
            this->tabControl1->Location = System::Drawing::Point(3, 2);
            this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1192, 712);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Location = System::Drawing::Point(4, 32);
            this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage1->Size = System::Drawing::Size(1184, 676);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Menú Admin Hotel";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(297, 252);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(528, 52);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Menú Administrador Hotel";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->tabControl2);
            this->tabPage2->Location = System::Drawing::Point(4, 32);
            this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage2->Size = System::Drawing::Size(1184, 676);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Inserciones";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tabControl2
            // 
            this->tabControl2->Appearance = System::Windows::Forms::TabAppearance::Buttons;
            this->tabControl2->Controls->Add(this->tabPage3);
            this->tabControl2->Controls->Add(this->tabPage4);
            this->tabControl2->Controls->Add(this->tabPage5);
            this->tabControl2->Location = System::Drawing::Point(0, 5);
            this->tabControl2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl2->Name = L"tabControl2";
            this->tabControl2->SelectedIndex = 0;
            this->tabControl2->Size = System::Drawing::Size(1180, 675);
            this->tabControl2->TabIndex = 0;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->btnInsertarHotel);
            this->tabPage3->Controls->Add(this->textBox2);
            this->tabPage3->Controls->Add(this->label5);
            this->tabPage3->Controls->Add(this->textBox1);
            this->tabPage3->Controls->Add(this->label4);
            this->tabPage3->Controls->Add(this->txtCodHotelInsertarHotel);
            this->tabPage3->Controls->Add(this->label2);
            this->tabPage3->Controls->Add(this->txtCodPaisInsertarHotel);
            this->tabPage3->Controls->Add(this->label3);
            this->tabPage3->Location = System::Drawing::Point(4, 32);
            this->tabPage3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage3->Size = System::Drawing::Size(1172, 639);
            this->tabPage3->TabIndex = 0;
            this->tabPage3->Text = L"Insertar Hotel";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // btnInsertarHotel
            // 
            this->btnInsertarHotel->Location = System::Drawing::Point(462, 477);
            this->btnInsertarHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnInsertarHotel->Name = L"btnInsertarHotel";
            this->btnInsertarHotel->Size = System::Drawing::Size(160, 69);
            this->btnInsertarHotel->TabIndex = 9;
            this->btnInsertarHotel->Text = L"Insertar";
            this->btnInsertarHotel->UseVisualStyleBackColor = true;
            this->btnInsertarHotel->Click += gcnew System::EventHandler(this, &AdminHotel::btnInsertarHotel_Click);
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(567, 352);
            this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(202, 35);
            this->textBox2->TabIndex = 8;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(264, 362);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(251, 29);
            this->label5->TabIndex = 7;
            this->label5->Text = L"Estrellas Hotel Nuevo:";
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(567, 271);
            this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(202, 35);
            this->textBox1->TabIndex = 6;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(264, 280);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(246, 29);
            this->label4->TabIndex = 5;
            this->label4->Text = L"Nombre Hotel Nuevo:";
            // 
            // txtCodHotelInsertarHotel
            // 
            this->txtCodHotelInsertarHotel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelInsertarHotel->Location = System::Drawing::Point(567, 188);
            this->txtCodHotelInsertarHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelInsertarHotel->Name = L"txtCodHotelInsertarHotel";
            this->txtCodHotelInsertarHotel->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelInsertarHotel->TabIndex = 4;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(264, 197);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(237, 29);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Código Hotel Nuevo:";
            // 
            // txtCodPaisInsertarHotel
            // 
            this->txtCodPaisInsertarHotel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisInsertarHotel->Location = System::Drawing::Point(567, 100);
            this->txtCodPaisInsertarHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisInsertarHotel->Name = L"txtCodPaisInsertarHotel";
            this->txtCodPaisInsertarHotel->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisInsertarHotel->TabIndex = 2;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(264, 109);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(151, 29);
            this->label3->TabIndex = 1;
            this->label3->Text = L"Código País:";
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->btnInsertarPiso);
            this->tabPage4->Controls->Add(this->txtCodPisoInsertarPiso);
            this->tabPage4->Controls->Add(this->label10);
            this->tabPage4->Controls->Add(this->txtCantHabsInsertarPiso);
            this->tabPage4->Controls->Add(this->label6);
            this->tabPage4->Controls->Add(this->txtNombrePisoInsertarPiso);
            this->tabPage4->Controls->Add(this->label7);
            this->tabPage4->Controls->Add(this->txtHotelInsertarPiso);
            this->tabPage4->Controls->Add(this->label8);
            this->tabPage4->Controls->Add(this->txtCodPaisInsertarPiso);
            this->tabPage4->Controls->Add(this->label9);
            this->tabPage4->Location = System::Drawing::Point(4, 32);
            this->tabPage4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage4->Size = System::Drawing::Size(1172, 639);
            this->tabPage4->TabIndex = 1;
            this->tabPage4->Text = L"Insertar Piso";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // btnInsertarPiso
            // 
            this->btnInsertarPiso->Location = System::Drawing::Point(500, 492);
            this->btnInsertarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnInsertarPiso->Name = L"btnInsertarPiso";
            this->btnInsertarPiso->Size = System::Drawing::Size(160, 69);
            this->btnInsertarPiso->TabIndex = 19;
            this->btnInsertarPiso->Text = L"Insertar";
            this->btnInsertarPiso->UseVisualStyleBackColor = true;
            this->btnInsertarPiso->Click += gcnew System::EventHandler(this, &AdminHotel::btnInsertarPiso_Click);
            // 
            // txtCodPisoInsertarPiso
            // 
            this->txtCodPisoInsertarPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoInsertarPiso->Location = System::Drawing::Point(616, 222);
            this->txtCodPisoInsertarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoInsertarPiso->Name = L"txtCodPisoInsertarPiso";
            this->txtCodPisoInsertarPiso->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoInsertarPiso->TabIndex = 18;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(204, 231);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(228, 29);
            this->label10->TabIndex = 17;
            this->label10->Text = L"Código Piso Nuevo:";
            // 
            // txtCantHabsInsertarPiso
            // 
            this->txtCantHabsInsertarPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCantHabsInsertarPiso->Location = System::Drawing::Point(616, 395);
            this->txtCantHabsInsertarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCantHabsInsertarPiso->Name = L"txtCantHabsInsertarPiso";
            this->txtCantHabsInsertarPiso->Size = System::Drawing::Size(202, 35);
            this->txtCantHabsInsertarPiso->TabIndex = 16;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(204, 400);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(391, 29);
            this->label6->TabIndex = 15;
            this->label6->Text = L"Cantidad Habitaciones Piso Nuevo:";
            // 
            // txtNombrePisoInsertarPiso
            // 
            this->txtNombrePisoInsertarPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNombrePisoInsertarPiso->Location = System::Drawing::Point(616, 309);
            this->txtNombrePisoInsertarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNombrePisoInsertarPiso->Name = L"txtNombrePisoInsertarPiso";
            this->txtNombrePisoInsertarPiso->Size = System::Drawing::Size(202, 35);
            this->txtNombrePisoInsertarPiso->TabIndex = 14;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(204, 318);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(237, 29);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Nombre Piso Nuevo:";
            // 
            // txtHotelInsertarPiso
            // 
            this->txtHotelInsertarPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtHotelInsertarPiso->Location = System::Drawing::Point(616, 137);
            this->txtHotelInsertarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtHotelInsertarPiso->Name = L"txtHotelInsertarPiso";
            this->txtHotelInsertarPiso->Size = System::Drawing::Size(202, 35);
            this->txtHotelInsertarPiso->TabIndex = 12;
            this->txtHotelInsertarPiso->TextChanged += gcnew System::EventHandler(this, &AdminHotel::txtHotelInsertarPiso_TextChanged);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(204, 146);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(161, 29);
            this->label8->TabIndex = 11;
            this->label8->Text = L"Código Hotel:";
            // 
            // txtCodPaisInsertarPiso
            // 
            this->txtCodPaisInsertarPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisInsertarPiso->Location = System::Drawing::Point(616, 49);
            this->txtCodPaisInsertarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisInsertarPiso->Name = L"txtCodPaisInsertarPiso";
            this->txtCodPaisInsertarPiso->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisInsertarPiso->TabIndex = 10;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(204, 54);
            this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(151, 29);
            this->label9->TabIndex = 9;
            this->label9->Text = L"Código País:";
            // 
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->textBox3);
            this->tabPage5->Controls->Add(this->label71);
            this->tabPage5->Controls->Add(this->txtEstadoHabInsertarHab);
            this->tabPage5->Controls->Add(this->label17);
            this->tabPage5->Controls->Add(this->txtPrecioHabInsertarHab);
            this->tabPage5->Controls->Add(this->label16);
            this->tabPage5->Controls->Add(this->btnInsertarHabitacion);
            this->tabPage5->Controls->Add(this->txtCodPisoInsertarHab);
            this->tabPage5->Controls->Add(this->label11);
            this->tabPage5->Controls->Add(this->txtNumCamasInsertarHab);
            this->tabPage5->Controls->Add(this->label12);
            this->tabPage5->Controls->Add(this->txtTipoHabInsertarHab);
            this->tabPage5->Controls->Add(this->label13);
            this->tabPage5->Controls->Add(this->txtCodHotelInsertarHab);
            this->tabPage5->Controls->Add(this->label14);
            this->tabPage5->Controls->Add(this->txtCodPaisInsertarHab);
            this->tabPage5->Controls->Add(this->label15);
            this->tabPage5->Location = System::Drawing::Point(4, 32);
            this->tabPage5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Size = System::Drawing::Size(1172, 639);
            this->tabPage5->TabIndex = 2;
            this->tabPage5->Text = L"Insertar Habitación";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(688, 182);
            this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(202, 35);
            this->textBox3->TabIndex = 36;
            // 
            // label71
            // 
            this->label71->AutoSize = true;
            this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label71->Location = System::Drawing::Point(276, 185);
            this->label71->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(218, 29);
            this->label71->TabIndex = 35;
            this->label71->Text = L"Código Habitacion:";
            this->label71->Click += gcnew System::EventHandler(this, &AdminHotel::label71_Click);
            // 
            // txtEstadoHabInsertarHab
            // 
            this->txtEstadoHabInsertarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtEstadoHabInsertarHab->Location = System::Drawing::Point(688, 449);
            this->txtEstadoHabInsertarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtEstadoHabInsertarHab->Name = L"txtEstadoHabInsertarHab";
            this->txtEstadoHabInsertarHab->Size = System::Drawing::Size(202, 35);
            this->txtEstadoHabInsertarHab->TabIndex = 34;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(276, 455);
            this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(289, 29);
            this->label17->TabIndex = 33;
            this->label17->Text = L"Estado Habitación Nueva:";
            // 
            // txtPrecioHabInsertarHab
            // 
            this->txtPrecioHabInsertarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtPrecioHabInsertarHab->Location = System::Drawing::Point(688, 374);
            this->txtPrecioHabInsertarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPrecioHabInsertarHab->Name = L"txtPrecioHabInsertarHab";
            this->txtPrecioHabInsertarHab->Size = System::Drawing::Size(202, 35);
            this->txtPrecioHabInsertarHab->TabIndex = 32;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(276, 380);
            this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(284, 29);
            this->label16->TabIndex = 31;
            this->label16->Text = L"Precio Habitación Nueva:";
            // 
            // btnInsertarHabitacion
            // 
            this->btnInsertarHabitacion->Location = System::Drawing::Point(537, 517);
            this->btnInsertarHabitacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnInsertarHabitacion->Name = L"btnInsertarHabitacion";
            this->btnInsertarHabitacion->Size = System::Drawing::Size(160, 69);
            this->btnInsertarHabitacion->TabIndex = 30;
            this->btnInsertarHabitacion->Text = L"Insertar";
            this->btnInsertarHabitacion->UseVisualStyleBackColor = true;
            this->btnInsertarHabitacion->Click += gcnew System::EventHandler(this, &AdminHotel::btnInsertarHabitacion_Click);
            // 
            // txtCodPisoInsertarHab
            // 
            this->txtCodPisoInsertarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoInsertarHab->Location = System::Drawing::Point(688, 131);
            this->txtCodPisoInsertarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoInsertarHab->Name = L"txtCodPisoInsertarHab";
            this->txtCodPisoInsertarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoInsertarHab->TabIndex = 29;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(275, 134);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(152, 29);
            this->label11->TabIndex = 28;
            this->label11->Text = L"Código Piso:";
            // 
            // txtNumCamasInsertarHab
            // 
            this->txtNumCamasInsertarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNumCamasInsertarHab->Location = System::Drawing::Point(688, 301);
            this->txtNumCamasInsertarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNumCamasInsertarHab->Name = L"txtNumCamasInsertarHab";
            this->txtNumCamasInsertarHab->Size = System::Drawing::Size(202, 35);
            this->txtNumCamasInsertarHab->TabIndex = 27;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(275, 301);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(382, 29);
            this->label12->TabIndex = 26;
            this->label12->Text = L"Número Camas Habitación Nueva:";
            // 
            // txtTipoHabInsertarHab
            // 
            this->txtTipoHabInsertarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtTipoHabInsertarHab->Location = System::Drawing::Point(688, 236);
            this->txtTipoHabInsertarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtTipoHabInsertarHab->Name = L"txtTipoHabInsertarHab";
            this->txtTipoHabInsertarHab->Size = System::Drawing::Size(202, 35);
            this->txtTipoHabInsertarHab->TabIndex = 25;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(276, 242);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(264, 29);
            this->label13->TabIndex = 24;
            this->label13->Text = L"Tipo Habitación Nueva:";
            // 
            // txtCodHotelInsertarHab
            // 
            this->txtCodHotelInsertarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelInsertarHab->Location = System::Drawing::Point(688, 73);
            this->txtCodHotelInsertarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelInsertarHab->Name = L"txtCodHotelInsertarHab";
            this->txtCodHotelInsertarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelInsertarHab->TabIndex = 23;
            this->txtCodHotelInsertarHab->TextChanged += gcnew System::EventHandler(this, &AdminHotel::txtCodHotelInsertarHab_TextChanged);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(276, 73);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(161, 29);
            this->label14->TabIndex = 22;
            this->label14->Text = L"Código Hotel:";
            // 
            // txtCodPaisInsertarHab
            // 
            this->txtCodPaisInsertarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisInsertarHab->Location = System::Drawing::Point(688, 10);
            this->txtCodPaisInsertarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisInsertarHab->Name = L"txtCodPaisInsertarHab";
            this->txtCodPaisInsertarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisInsertarHab->TabIndex = 21;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(276, 13);
            this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(151, 29);
            this->label15->TabIndex = 20;
            this->label15->Text = L"Código País:";
            // 
            // tabPage6
            // 
            this->tabPage6->Controls->Add(this->tabControl3);
            this->tabPage6->Location = System::Drawing::Point(4, 32);
            this->tabPage6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Size = System::Drawing::Size(1184, 676);
            this->tabPage6->TabIndex = 2;
            this->tabPage6->Text = L"Eliminaciones";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // tabControl3
            // 
            this->tabControl3->Appearance = System::Windows::Forms::TabAppearance::Buttons;
            this->tabControl3->Controls->Add(this->tabPage7);
            this->tabControl3->Controls->Add(this->tabPage8);
            this->tabControl3->Controls->Add(this->tabPage9);
            this->tabControl3->Location = System::Drawing::Point(0, 5);
            this->tabControl3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl3->Name = L"tabControl3";
            this->tabControl3->SelectedIndex = 0;
            this->tabControl3->Size = System::Drawing::Size(1186, 668);
            this->tabControl3->TabIndex = 0;
            // 
            // tabPage7
            // 
            this->tabPage7->Controls->Add(this->btnEliminarHotel);
            this->tabPage7->Controls->Add(this->txtCodHotelEliminarHotel);
            this->tabPage7->Controls->Add(this->label18);
            this->tabPage7->Controls->Add(this->txtCodPaisEliminarHotel);
            this->tabPage7->Controls->Add(this->label19);
            this->tabPage7->Location = System::Drawing::Point(4, 32);
            this->tabPage7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage7->Name = L"tabPage7";
            this->tabPage7->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage7->Size = System::Drawing::Size(1178, 632);
            this->tabPage7->TabIndex = 0;
            this->tabPage7->Text = L"Eliminar Hotel";
            this->tabPage7->UseVisualStyleBackColor = true;
            // 
            // btnEliminarHotel
            // 
            this->btnEliminarHotel->Location = System::Drawing::Point(476, 377);
            this->btnEliminarHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnEliminarHotel->Name = L"btnEliminarHotel";
            this->btnEliminarHotel->Size = System::Drawing::Size(160, 69);
            this->btnEliminarHotel->TabIndex = 28;
            this->btnEliminarHotel->Text = L"Eliminar";
            this->btnEliminarHotel->UseVisualStyleBackColor = true;
            this->btnEliminarHotel->Click += gcnew System::EventHandler(this, &AdminHotel::btnEliminarHotel_Click);
            // 
            // txtCodHotelEliminarHotel
            // 
            this->txtCodHotelEliminarHotel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelEliminarHotel->Location = System::Drawing::Point(561, 251);
            this->txtCodHotelEliminarHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelEliminarHotel->Name = L"txtCodHotelEliminarHotel";
            this->txtCodHotelEliminarHotel->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelEliminarHotel->TabIndex = 27;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(344, 251);
            this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(161, 29);
            this->label18->TabIndex = 26;
            this->label18->Text = L"Código Hotel:";
            // 
            // txtCodPaisEliminarHotel
            // 
            this->txtCodPaisEliminarHotel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisEliminarHotel->Location = System::Drawing::Point(561, 135);
            this->txtCodPaisEliminarHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisEliminarHotel->Name = L"txtCodPaisEliminarHotel";
            this->txtCodPaisEliminarHotel->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisEliminarHotel->TabIndex = 25;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(344, 140);
            this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(151, 29);
            this->label19->TabIndex = 24;
            this->label19->Text = L"Código País:";
            // 
            // tabPage8
            // 
            this->tabPage8->Controls->Add(this->txtCodPisoEliminarPiso);
            this->tabPage8->Controls->Add(this->label22);
            this->tabPage8->Controls->Add(this->btnEliminarPiso);
            this->tabPage8->Controls->Add(this->txtCodHotelEliminarPiso);
            this->tabPage8->Controls->Add(this->label20);
            this->tabPage8->Controls->Add(this->txtCodPaisEliminarPiso);
            this->tabPage8->Controls->Add(this->label21);
            this->tabPage8->Location = System::Drawing::Point(4, 32);
            this->tabPage8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage8->Name = L"tabPage8";
            this->tabPage8->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage8->Size = System::Drawing::Size(1178, 632);
            this->tabPage8->TabIndex = 1;
            this->tabPage8->Text = L"Eliminar Piso";
            this->tabPage8->UseVisualStyleBackColor = true;
            // 
            // txtCodPisoEliminarPiso
            // 
            this->txtCodPisoEliminarPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoEliminarPiso->Location = System::Drawing::Point(594, 298);
            this->txtCodPisoEliminarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoEliminarPiso->Name = L"txtCodPisoEliminarPiso";
            this->txtCodPisoEliminarPiso->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoEliminarPiso->TabIndex = 35;
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(376, 303);
            this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(152, 29);
            this->label22->TabIndex = 34;
            this->label22->Text = L"Código Piso:";
            // 
            // btnEliminarPiso
            // 
            this->btnEliminarPiso->Location = System::Drawing::Point(508, 400);
            this->btnEliminarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnEliminarPiso->Name = L"btnEliminarPiso";
            this->btnEliminarPiso->Size = System::Drawing::Size(160, 69);
            this->btnEliminarPiso->TabIndex = 33;
            this->btnEliminarPiso->Text = L"Eliminar";
            this->btnEliminarPiso->UseVisualStyleBackColor = true;
            this->btnEliminarPiso->Click += gcnew System::EventHandler(this, &AdminHotel::btnEliminarPiso_Click);
            // 
            // txtCodHotelEliminarPiso
            // 
            this->txtCodHotelEliminarPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelEliminarPiso->Location = System::Drawing::Point(594, 203);
            this->txtCodHotelEliminarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelEliminarPiso->Name = L"txtCodHotelEliminarPiso";
            this->txtCodHotelEliminarPiso->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelEliminarPiso->TabIndex = 32;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(376, 203);
            this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(161, 29);
            this->label20->TabIndex = 31;
            this->label20->Text = L"Código Hotel:";
            // 
            // txtCodPaisEliminarPiso
            // 
            this->txtCodPaisEliminarPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisEliminarPiso->Location = System::Drawing::Point(594, 109);
            this->txtCodPaisEliminarPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisEliminarPiso->Name = L"txtCodPaisEliminarPiso";
            this->txtCodPaisEliminarPiso->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisEliminarPiso->TabIndex = 30;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(376, 114);
            this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(151, 29);
            this->label21->TabIndex = 29;
            this->label21->Text = L"Código País:";
            // 
            // tabPage9
            // 
            this->tabPage9->Controls->Add(this->txtCodHabEliminarHab);
            this->tabPage9->Controls->Add(this->label26);
            this->tabPage9->Controls->Add(this->txtCodPisoEliminarHab);
            this->tabPage9->Controls->Add(this->label23);
            this->tabPage9->Controls->Add(this->btnEliminarHab);
            this->tabPage9->Controls->Add(this->txtCodHotelEliminarHab);
            this->tabPage9->Controls->Add(this->label24);
            this->tabPage9->Controls->Add(this->txtCodPaisEliminarHab);
            this->tabPage9->Controls->Add(this->label25);
            this->tabPage9->Location = System::Drawing::Point(4, 32);
            this->tabPage9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage9->Name = L"tabPage9";
            this->tabPage9->Size = System::Drawing::Size(1178, 632);
            this->tabPage9->TabIndex = 2;
            this->tabPage9->Text = L"Eliminar Habitación";
            this->tabPage9->UseVisualStyleBackColor = true;
            // 
            // txtCodHabEliminarHab
            // 
            this->txtCodHabEliminarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHabEliminarHab->Location = System::Drawing::Point(586, 357);
            this->txtCodHabEliminarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHabEliminarHab->Name = L"txtCodHabEliminarHab";
            this->txtCodHabEliminarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodHabEliminarHab->TabIndex = 44;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(369, 362);
            this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(218, 29);
            this->label26->TabIndex = 43;
            this->label26->Text = L"Código Habitación:";
            // 
            // txtCodPisoEliminarHab
            // 
            this->txtCodPisoEliminarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoEliminarHab->Location = System::Drawing::Point(586, 252);
            this->txtCodPisoEliminarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoEliminarHab->Name = L"txtCodPisoEliminarHab";
            this->txtCodPisoEliminarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoEliminarHab->TabIndex = 42;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(369, 257);
            this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(152, 29);
            this->label23->TabIndex = 41;
            this->label23->Text = L"Código Piso:";
            // 
            // btnEliminarHab
            // 
            this->btnEliminarHab->Location = System::Drawing::Point(507, 458);
            this->btnEliminarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnEliminarHab->Name = L"btnEliminarHab";
            this->btnEliminarHab->Size = System::Drawing::Size(160, 69);
            this->btnEliminarHab->TabIndex = 40;
            this->btnEliminarHab->Text = L"Eliminar";
            this->btnEliminarHab->UseVisualStyleBackColor = true;
            this->btnEliminarHab->Click += gcnew System::EventHandler(this, &AdminHotel::btnEliminarHab_Click);
            // 
            // txtCodHotelEliminarHab
            // 
            this->txtCodHotelEliminarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelEliminarHab->Location = System::Drawing::Point(586, 157);
            this->txtCodHotelEliminarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelEliminarHab->Name = L"txtCodHotelEliminarHab";
            this->txtCodHotelEliminarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelEliminarHab->TabIndex = 39;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(369, 157);
            this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(161, 29);
            this->label24->TabIndex = 38;
            this->label24->Text = L"Código Hotel:";
            // 
            // txtCodPaisEliminarHab
            // 
            this->txtCodPaisEliminarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisEliminarHab->Location = System::Drawing::Point(586, 63);
            this->txtCodPaisEliminarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisEliminarHab->Name = L"txtCodPaisEliminarHab";
            this->txtCodPaisEliminarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisEliminarHab->TabIndex = 37;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(369, 68);
            this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(151, 29);
            this->label25->TabIndex = 36;
            this->label25->Text = L"Código País:";
            // 
            // tabPage10
            // 
            this->tabPage10->Controls->Add(this->tabControl4);
            this->tabPage10->Location = System::Drawing::Point(4, 32);
            this->tabPage10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage10->Name = L"tabPage10";
            this->tabPage10->Size = System::Drawing::Size(1184, 676);
            this->tabPage10->TabIndex = 3;
            this->tabPage10->Text = L"Modificaciones";
            this->tabPage10->UseVisualStyleBackColor = true;
            // 
            // tabControl4
            // 
            this->tabControl4->Appearance = System::Windows::Forms::TabAppearance::Buttons;
            this->tabControl4->Controls->Add(this->tabPage11);
            this->tabControl4->Controls->Add(this->tabPage12);
            this->tabControl4->Controls->Add(this->tabPage13);
            this->tabControl4->Controls->Add(this->tabPage14);
            this->tabControl4->Controls->Add(this->tabPage15);
            this->tabControl4->Controls->Add(this->tabPage16);
            this->tabControl4->Controls->Add(this->tabPage17);
            this->tabControl4->Controls->Add(this->tabPage18);
            this->tabControl4->Location = System::Drawing::Point(0, 5);
            this->tabControl4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl4->Name = L"tabControl4";
            this->tabControl4->SelectedIndex = 0;
            this->tabControl4->Size = System::Drawing::Size(1176, 668);
            this->tabControl4->TabIndex = 0;
            // 
            // tabPage11
            // 
            this->tabPage11->Controls->Add(this->btnModEstrellas);
            this->tabPage11->Controls->Add(this->txtEstrellasModEstrellas);
            this->tabPage11->Controls->Add(this->label29);
            this->tabPage11->Controls->Add(this->txtCodHotelModEstrellas);
            this->tabPage11->Controls->Add(this->label27);
            this->tabPage11->Controls->Add(this->txtCodPaisModEstrellas);
            this->tabPage11->Controls->Add(this->label28);
            this->tabPage11->Location = System::Drawing::Point(4, 32);
            this->tabPage11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage11->Name = L"tabPage11";
            this->tabPage11->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage11->Size = System::Drawing::Size(1168, 632);
            this->tabPage11->TabIndex = 0;
            this->tabPage11->Text = L"Estrellas Hotel";
            this->tabPage11->UseVisualStyleBackColor = true;
            // 
            // btnModEstrellas
            // 
            this->btnModEstrellas->Location = System::Drawing::Point(474, 432);
            this->btnModEstrellas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModEstrellas->Name = L"btnModEstrellas";
            this->btnModEstrellas->Size = System::Drawing::Size(160, 69);
            this->btnModEstrellas->TabIndex = 46;
            this->btnModEstrellas->Text = L"Modificar";
            this->btnModEstrellas->UseVisualStyleBackColor = true;
            this->btnModEstrellas->Click += gcnew System::EventHandler(this, &AdminHotel::btnModEstrellas_Click);
            // 
            // txtEstrellasModEstrellas
            // 
            this->txtEstrellasModEstrellas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtEstrellasModEstrellas->Location = System::Drawing::Point(549, 328);
            this->txtEstrellasModEstrellas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtEstrellasModEstrellas->Name = L"txtEstrellasModEstrellas";
            this->txtEstrellasModEstrellas->Size = System::Drawing::Size(202, 35);
            this->txtEstrellasModEstrellas->TabIndex = 45;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(332, 328);
            this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(175, 29);
            this->label29->TabIndex = 44;
            this->label29->Text = L"Estrellas Hotel:";
            // 
            // txtCodHotelModEstrellas
            // 
            this->txtCodHotelModEstrellas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelModEstrellas->Location = System::Drawing::Point(549, 226);
            this->txtCodHotelModEstrellas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelModEstrellas->Name = L"txtCodHotelModEstrellas";
            this->txtCodHotelModEstrellas->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelModEstrellas->TabIndex = 43;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(332, 226);
            this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(161, 29);
            this->label27->TabIndex = 42;
            this->label27->Text = L"Código Hotel:";
            // 
            // txtCodPaisModEstrellas
            // 
            this->txtCodPaisModEstrellas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModEstrellas->Location = System::Drawing::Point(549, 132);
            this->txtCodPaisModEstrellas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModEstrellas->Name = L"txtCodPaisModEstrellas";
            this->txtCodPaisModEstrellas->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModEstrellas->TabIndex = 41;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(332, 137);
            this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(151, 29);
            this->label28->TabIndex = 40;
            this->label28->Text = L"Código País:";
            // 
            // tabPage12
            // 
            this->tabPage12->Controls->Add(this->btnModNomHotel);
            this->tabPage12->Controls->Add(this->txtNomHotelModNomHotel);
            this->tabPage12->Controls->Add(this->label30);
            this->tabPage12->Controls->Add(this->txtCodHotelModNomHotel);
            this->tabPage12->Controls->Add(this->label31);
            this->tabPage12->Controls->Add(this->txtCodPaisModNomHotel);
            this->tabPage12->Controls->Add(this->label32);
            this->tabPage12->Location = System::Drawing::Point(4, 32);
            this->tabPage12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage12->Name = L"tabPage12";
            this->tabPage12->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage12->Size = System::Drawing::Size(1168, 632);
            this->tabPage12->TabIndex = 1;
            this->tabPage12->Text = L"Nombre Hotel";
            this->tabPage12->UseVisualStyleBackColor = true;
            // 
            // btnModNomHotel
            // 
            this->btnModNomHotel->Location = System::Drawing::Point(514, 429);
            this->btnModNomHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModNomHotel->Name = L"btnModNomHotel";
            this->btnModNomHotel->Size = System::Drawing::Size(160, 69);
            this->btnModNomHotel->TabIndex = 53;
            this->btnModNomHotel->Text = L"Modificar";
            this->btnModNomHotel->UseVisualStyleBackColor = true;
            this->btnModNomHotel->Click += gcnew System::EventHandler(this, &AdminHotel::btnModNomHotel_Click);
            // 
            // txtNomHotelModNomHotel
            // 
            this->txtNomHotelModNomHotel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNomHotelModNomHotel->Location = System::Drawing::Point(590, 325);
            this->txtNomHotelModNomHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNomHotelModNomHotel->Name = L"txtNomHotelModNomHotel";
            this->txtNomHotelModNomHotel->Size = System::Drawing::Size(202, 35);
            this->txtNomHotelModNomHotel->TabIndex = 52;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(372, 325);
            this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(170, 29);
            this->label30->TabIndex = 51;
            this->label30->Text = L"Nombre Hotel:";
            // 
            // txtCodHotelModNomHotel
            // 
            this->txtCodHotelModNomHotel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelModNomHotel->Location = System::Drawing::Point(590, 223);
            this->txtCodHotelModNomHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelModNomHotel->Name = L"txtCodHotelModNomHotel";
            this->txtCodHotelModNomHotel->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelModNomHotel->TabIndex = 50;
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(372, 223);
            this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(161, 29);
            this->label31->TabIndex = 49;
            this->label31->Text = L"Código Hotel:";
            // 
            // txtCodPaisModNomHotel
            // 
            this->txtCodPaisModNomHotel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModNomHotel->Location = System::Drawing::Point(590, 129);
            this->txtCodPaisModNomHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModNomHotel->Name = L"txtCodPaisModNomHotel";
            this->txtCodPaisModNomHotel->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModNomHotel->TabIndex = 48;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(372, 134);
            this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(151, 29);
            this->label32->TabIndex = 47;
            this->label32->Text = L"Código País:";
            // 
            // tabPage13
            // 
            this->tabPage13->Controls->Add(this->txtCantHabsModCantHabs);
            this->tabPage13->Controls->Add(this->label36);
            this->tabPage13->Controls->Add(this->btnModCantHabs);
            this->tabPage13->Controls->Add(this->txtCodPisoModCantHabs);
            this->tabPage13->Controls->Add(this->label33);
            this->tabPage13->Controls->Add(this->txtCodHotelModCantHabs);
            this->tabPage13->Controls->Add(this->label34);
            this->tabPage13->Controls->Add(this->txtCodPaisModCantHabs);
            this->tabPage13->Controls->Add(this->label35);
            this->tabPage13->Location = System::Drawing::Point(4, 32);
            this->tabPage13->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage13->Name = L"tabPage13";
            this->tabPage13->Size = System::Drawing::Size(1168, 632);
            this->tabPage13->TabIndex = 2;
            this->tabPage13->Text = L"Cantidad Habitaciones Piso";
            this->tabPage13->UseVisualStyleBackColor = true;
            // 
            // txtCantHabsModCantHabs
            // 
            this->txtCantHabsModCantHabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCantHabsModCantHabs->Location = System::Drawing::Point(564, 346);
            this->txtCantHabsModCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCantHabsModCantHabs->Name = L"txtCantHabsModCantHabs";
            this->txtCantHabsModCantHabs->Size = System::Drawing::Size(202, 35);
            this->txtCantHabsModCantHabs->TabIndex = 62;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(264, 351);
            this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(261, 29);
            this->label36->TabIndex = 61;
            this->label36->Text = L"Cantidad Habitaciones:";
            // 
            // btnModCantHabs
            // 
            this->btnModCantHabs->Location = System::Drawing::Point(484, 437);
            this->btnModCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModCantHabs->Name = L"btnModCantHabs";
            this->btnModCantHabs->Size = System::Drawing::Size(160, 69);
            this->btnModCantHabs->TabIndex = 60;
            this->btnModCantHabs->Text = L"Modificar";
            this->btnModCantHabs->UseVisualStyleBackColor = true;
            this->btnModCantHabs->Click += gcnew System::EventHandler(this, &AdminHotel::btnModCantHabs_Click);
            // 
            // txtCodPisoModCantHabs
            // 
            this->txtCodPisoModCantHabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoModCantHabs->Location = System::Drawing::Point(564, 242);
            this->txtCodPisoModCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoModCantHabs->Name = L"txtCodPisoModCantHabs";
            this->txtCodPisoModCantHabs->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoModCantHabs->TabIndex = 59;
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(264, 246);
            this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(152, 29);
            this->label33->TabIndex = 58;
            this->label33->Text = L"Código Piso:";
            // 
            // txtCodHotelModCantHabs
            // 
            this->txtCodHotelModCantHabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelModCantHabs->Location = System::Drawing::Point(564, 140);
            this->txtCodHotelModCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelModCantHabs->Name = L"txtCodHotelModCantHabs";
            this->txtCodHotelModCantHabs->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelModCantHabs->TabIndex = 57;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(264, 140);
            this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(161, 29);
            this->label34->TabIndex = 56;
            this->label34->Text = L"Código Hotel:";
            // 
            // txtCodPaisModCantHabs
            // 
            this->txtCodPaisModCantHabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModCantHabs->Location = System::Drawing::Point(564, 46);
            this->txtCodPaisModCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModCantHabs->Name = L"txtCodPaisModCantHabs";
            this->txtCodPaisModCantHabs->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModCantHabs->TabIndex = 55;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(264, 46);
            this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(151, 29);
            this->label35->TabIndex = 54;
            this->label35->Text = L"Código País:";
            // 
            // tabPage14
            // 
            this->tabPage14->Controls->Add(this->txtNomPisoModNomPiso);
            this->tabPage14->Controls->Add(this->label37);
            this->tabPage14->Controls->Add(this->btnModNomPiso);
            this->tabPage14->Controls->Add(this->txtCodPisoModNomPiso);
            this->tabPage14->Controls->Add(this->label38);
            this->tabPage14->Controls->Add(this->txtCodHotelModNomPiso);
            this->tabPage14->Controls->Add(this->label39);
            this->tabPage14->Controls->Add(this->txtCodPaisModNomPiso);
            this->tabPage14->Controls->Add(this->label40);
            this->tabPage14->Location = System::Drawing::Point(4, 32);
            this->tabPage14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage14->Name = L"tabPage14";
            this->tabPage14->Size = System::Drawing::Size(1168, 632);
            this->tabPage14->TabIndex = 3;
            this->tabPage14->Text = L"Nombre Piso";
            this->tabPage14->UseVisualStyleBackColor = true;
            // 
            // txtNomPisoModNomPiso
            // 
            this->txtNomPisoModNomPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNomPisoModNomPiso->Location = System::Drawing::Point(598, 385);
            this->txtNomPisoModNomPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNomPisoModNomPiso->Name = L"txtNomPisoModNomPiso";
            this->txtNomPisoModNomPiso->Size = System::Drawing::Size(202, 35);
            this->txtNomPisoModNomPiso->TabIndex = 71;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(298, 389);
            this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(161, 29);
            this->label37->TabIndex = 70;
            this->label37->Text = L"Nombre Piso:";
            // 
            // btnModNomPiso
            // 
            this->btnModNomPiso->Location = System::Drawing::Point(519, 475);
            this->btnModNomPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModNomPiso->Name = L"btnModNomPiso";
            this->btnModNomPiso->Size = System::Drawing::Size(160, 69);
            this->btnModNomPiso->TabIndex = 69;
            this->btnModNomPiso->Text = L"Modificar";
            this->btnModNomPiso->UseVisualStyleBackColor = true;
            this->btnModNomPiso->Click += gcnew System::EventHandler(this, &AdminHotel::btnModNomPiso_Click);
            // 
            // txtCodPisoModNomPiso
            // 
            this->txtCodPisoModNomPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoModNomPiso->Location = System::Drawing::Point(598, 280);
            this->txtCodPisoModNomPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoModNomPiso->Name = L"txtCodPisoModNomPiso";
            this->txtCodPisoModNomPiso->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoModNomPiso->TabIndex = 68;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(298, 285);
            this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(152, 29);
            this->label38->TabIndex = 67;
            this->label38->Text = L"Código Piso:";
            // 
            // txtCodHotelModNomPiso
            // 
            this->txtCodHotelModNomPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelModNomPiso->Location = System::Drawing::Point(598, 178);
            this->txtCodHotelModNomPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelModNomPiso->Name = L"txtCodHotelModNomPiso";
            this->txtCodHotelModNomPiso->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelModNomPiso->TabIndex = 66;
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(298, 178);
            this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(161, 29);
            this->label39->TabIndex = 65;
            this->label39->Text = L"Código Hotel:";
            // 
            // txtCodPaisModNomPiso
            // 
            this->txtCodPaisModNomPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModNomPiso->Location = System::Drawing::Point(598, 85);
            this->txtCodPaisModNomPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModNomPiso->Name = L"txtCodPaisModNomPiso";
            this->txtCodPaisModNomPiso->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModNomPiso->TabIndex = 64;
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(298, 85);
            this->label40->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(151, 29);
            this->label40->TabIndex = 63;
            this->label40->Text = L"Código País:";
            // 
            // tabPage15
            // 
            this->tabPage15->Controls->Add(this->txtCodHabModTC);
            this->tabPage15->Controls->Add(this->label45);
            this->tabPage15->Controls->Add(this->txtTCModTC);
            this->tabPage15->Controls->Add(this->label41);
            this->tabPage15->Controls->Add(this->btnModTC);
            this->tabPage15->Controls->Add(this->txtCodPisoModTC);
            this->tabPage15->Controls->Add(this->label42);
            this->tabPage15->Controls->Add(this->txtCodHotelModTC);
            this->tabPage15->Controls->Add(this->label43);
            this->tabPage15->Controls->Add(this->txtCodPaisModTC);
            this->tabPage15->Controls->Add(this->label44);
            this->tabPage15->Location = System::Drawing::Point(4, 32);
            this->tabPage15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage15->Name = L"tabPage15";
            this->tabPage15->Size = System::Drawing::Size(1168, 632);
            this->tabPage15->TabIndex = 4;
            this->tabPage15->Text = L"Tipo de cuarto";
            this->tabPage15->UseVisualStyleBackColor = true;
            this->tabPage15->Click += gcnew System::EventHandler(this, &AdminHotel::tabPage15_Click);
            // 
            // txtCodHabModTC
            // 
            this->txtCodHabModTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodHabModTC->Location = System::Drawing::Point(630, 309);
            this->txtCodHabModTC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHabModTC->Name = L"txtCodHabModTC";
            this->txtCodHabModTC->Size = System::Drawing::Size(202, 35);
            this->txtCodHabModTC->TabIndex = 82;
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(330, 314);
            this->label45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(218, 29);
            this->label45->TabIndex = 81;
            this->label45->Text = L"Código Habitación:";
            // 
            // txtTCModTC
            // 
            this->txtTCModTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtTCModTC->Location = System::Drawing::Point(630, 385);
            this->txtTCModTC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtTCModTC->Name = L"txtTCModTC";
            this->txtTCModTC->Size = System::Drawing::Size(202, 35);
            this->txtTCModTC->TabIndex = 80;
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(330, 389);
            this->label41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(146, 29);
            this->label41->TabIndex = 79;
            this->label41->Text = L"Tipo Cuarto:";
            // 
            // btnModTC
            // 
            this->btnModTC->Location = System::Drawing::Point(550, 475);
            this->btnModTC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModTC->Name = L"btnModTC";
            this->btnModTC->Size = System::Drawing::Size(160, 69);
            this->btnModTC->TabIndex = 78;
            this->btnModTC->Text = L"Modificar";
            this->btnModTC->UseVisualStyleBackColor = true;
            this->btnModTC->Click += gcnew System::EventHandler(this, &AdminHotel::btnModTC_Click);
            // 
            // txtCodPisoModTC
            // 
            this->txtCodPisoModTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodPisoModTC->Location = System::Drawing::Point(630, 231);
            this->txtCodPisoModTC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoModTC->Name = L"txtCodPisoModTC";
            this->txtCodPisoModTC->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoModTC->TabIndex = 77;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(330, 235);
            this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(152, 29);
            this->label42->TabIndex = 76;
            this->label42->Text = L"Código Piso:";
            // 
            // txtCodHotelModTC
            // 
            this->txtCodHotelModTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodHotelModTC->Location = System::Drawing::Point(630, 157);
            this->txtCodHotelModTC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelModTC->Name = L"txtCodHotelModTC";
            this->txtCodHotelModTC->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelModTC->TabIndex = 75;
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(330, 157);
            this->label43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(161, 29);
            this->label43->TabIndex = 74;
            this->label43->Text = L"Código Hotel:";
            // 
            // txtCodPaisModTC
            // 
            this->txtCodPaisModTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodPaisModTC->Location = System::Drawing::Point(630, 86);
            this->txtCodPaisModTC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModTC->Name = L"txtCodPaisModTC";
            this->txtCodPaisModTC->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModTC->TabIndex = 73;
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(330, 86);
            this->label44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(151, 29);
            this->label44->TabIndex = 72;
            this->label44->Text = L"Código País:";
            // 
            // tabPage16
            // 
            this->tabPage16->Controls->Add(this->txtCodHabModNumCamas);
            this->tabPage16->Controls->Add(this->label46);
            this->tabPage16->Controls->Add(this->txtNumCamasModNumCamas);
            this->tabPage16->Controls->Add(this->label47);
            this->tabPage16->Controls->Add(this->btnModNumCamas);
            this->tabPage16->Controls->Add(this->txtCodPisoModNumCamas);
            this->tabPage16->Controls->Add(this->label48);
            this->tabPage16->Controls->Add(this->txtCodHotelModNumCamas);
            this->tabPage16->Controls->Add(this->label49);
            this->tabPage16->Controls->Add(this->txtCodPaisModNumCamas);
            this->tabPage16->Controls->Add(this->label50);
            this->tabPage16->Location = System::Drawing::Point(4, 32);
            this->tabPage16->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage16->Name = L"tabPage16";
            this->tabPage16->Size = System::Drawing::Size(1168, 632);
            this->tabPage16->TabIndex = 5;
            this->tabPage16->Text = L"Número de camas";
            this->tabPage16->UseVisualStyleBackColor = true;
            // 
            // txtCodHabModNumCamas
            // 
            this->txtCodHabModNumCamas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHabModNumCamas->Location = System::Drawing::Point(627, 305);
            this->txtCodHabModNumCamas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHabModNumCamas->Name = L"txtCodHabModNumCamas";
            this->txtCodHabModNumCamas->Size = System::Drawing::Size(202, 35);
            this->txtCodHabModNumCamas->TabIndex = 93;
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(327, 309);
            this->label46->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(218, 29);
            this->label46->TabIndex = 92;
            this->label46->Text = L"Código Habitación:";
            // 
            // txtNumCamasModNumCamas
            // 
            this->txtNumCamasModNumCamas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNumCamasModNumCamas->Location = System::Drawing::Point(627, 380);
            this->txtNumCamasModNumCamas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNumCamasModNumCamas->Name = L"txtNumCamasModNumCamas";
            this->txtNumCamasModNumCamas->Size = System::Drawing::Size(202, 35);
            this->txtNumCamasModNumCamas->TabIndex = 91;
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(327, 385);
            this->label47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(187, 29);
            this->label47->TabIndex = 90;
            this->label47->Text = L"Número Camas:";
            // 
            // btnModNumCamas
            // 
            this->btnModNumCamas->Location = System::Drawing::Point(488, 471);
            this->btnModNumCamas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModNumCamas->Name = L"btnModNumCamas";
            this->btnModNumCamas->Size = System::Drawing::Size(160, 69);
            this->btnModNumCamas->TabIndex = 89;
            this->btnModNumCamas->Text = L"Modificar";
            this->btnModNumCamas->UseVisualStyleBackColor = true;
            this->btnModNumCamas->Click += gcnew System::EventHandler(this, &AdminHotel::btnModNumCamas_Click);
            // 
            // txtCodPisoModNumCamas
            // 
            this->txtCodPisoModNumCamas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoModNumCamas->Location = System::Drawing::Point(627, 226);
            this->txtCodPisoModNumCamas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoModNumCamas->Name = L"txtCodPisoModNumCamas";
            this->txtCodPisoModNumCamas->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoModNumCamas->TabIndex = 88;
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(327, 231);
            this->label48->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(152, 29);
            this->label48->TabIndex = 87;
            this->label48->Text = L"Código Piso:";
            // 
            // txtCodHotelModNumCamas
            // 
            this->txtCodHotelModNumCamas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelModNumCamas->Location = System::Drawing::Point(627, 152);
            this->txtCodHotelModNumCamas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelModNumCamas->Name = L"txtCodHotelModNumCamas";
            this->txtCodHotelModNumCamas->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelModNumCamas->TabIndex = 86;
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(327, 152);
            this->label49->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(161, 29);
            this->label49->TabIndex = 85;
            this->label49->Text = L"Código Hotel:";
            // 
            // txtCodPaisModNumCamas
            // 
            this->txtCodPaisModNumCamas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModNumCamas->Location = System::Drawing::Point(627, 82);
            this->txtCodPaisModNumCamas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModNumCamas->Name = L"txtCodPaisModNumCamas";
            this->txtCodPaisModNumCamas->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModNumCamas->TabIndex = 84;
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->Location = System::Drawing::Point(327, 82);
            this->label50->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(151, 29);
            this->label50->TabIndex = 83;
            this->label50->Text = L"Código País:";
            // 
            // tabPage17
            // 
            this->tabPage17->Controls->Add(this->txtCodHabModPrecio);
            this->tabPage17->Controls->Add(this->label51);
            this->tabPage17->Controls->Add(this->txtPrecioModPrecio);
            this->tabPage17->Controls->Add(this->label52);
            this->tabPage17->Controls->Add(this->btnModPrecio);
            this->tabPage17->Controls->Add(this->txtCodPisoModPrecio);
            this->tabPage17->Controls->Add(this->label53);
            this->tabPage17->Controls->Add(this->txtCodHotelModPrecio);
            this->tabPage17->Controls->Add(this->label54);
            this->tabPage17->Controls->Add(this->txtCodPaisModPrecio);
            this->tabPage17->Controls->Add(this->label55);
            this->tabPage17->Location = System::Drawing::Point(4, 32);
            this->tabPage17->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage17->Name = L"tabPage17";
            this->tabPage17->Size = System::Drawing::Size(1168, 632);
            this->tabPage17->TabIndex = 6;
            this->tabPage17->Text = L"Precio Habitación";
            this->tabPage17->UseVisualStyleBackColor = true;
            // 
            // txtCodHabModPrecio
            // 
            this->txtCodHabModPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodHabModPrecio->Location = System::Drawing::Point(630, 308);
            this->txtCodHabModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHabModPrecio->Name = L"txtCodHabModPrecio";
            this->txtCodHabModPrecio->Size = System::Drawing::Size(202, 35);
            this->txtCodHabModPrecio->TabIndex = 104;
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(330, 312);
            this->label51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(218, 29);
            this->label51->TabIndex = 103;
            this->label51->Text = L"Código Habitación:";
            // 
            // txtPrecioModPrecio
            // 
            this->txtPrecioModPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtPrecioModPrecio->Location = System::Drawing::Point(630, 383);
            this->txtPrecioModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPrecioModPrecio->Name = L"txtPrecioModPrecio";
            this->txtPrecioModPrecio->Size = System::Drawing::Size(202, 35);
            this->txtPrecioModPrecio->TabIndex = 102;
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->Location = System::Drawing::Point(330, 388);
            this->label52->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(209, 29);
            this->label52->TabIndex = 101;
            this->label52->Text = L"Precio Habitación:";
            // 
            // btnModPrecio
            // 
            this->btnModPrecio->Location = System::Drawing::Point(490, 474);
            this->btnModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModPrecio->Name = L"btnModPrecio";
            this->btnModPrecio->Size = System::Drawing::Size(160, 69);
            this->btnModPrecio->TabIndex = 100;
            this->btnModPrecio->Text = L"Modificar";
            this->btnModPrecio->UseVisualStyleBackColor = true;
            this->btnModPrecio->Click += gcnew System::EventHandler(this, &AdminHotel::btnModPrecio_Click);
            // 
            // txtCodPisoModPrecio
            // 
            this->txtCodPisoModPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoModPrecio->Location = System::Drawing::Point(630, 229);
            this->txtCodPisoModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoModPrecio->Name = L"txtCodPisoModPrecio";
            this->txtCodPisoModPrecio->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoModPrecio->TabIndex = 99;
            // 
            // label53
            // 
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->Location = System::Drawing::Point(330, 234);
            this->label53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(152, 29);
            this->label53->TabIndex = 98;
            this->label53->Text = L"Código Piso:";
            // 
            // txtCodHotelModPrecio
            // 
            this->txtCodHotelModPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelModPrecio->Location = System::Drawing::Point(630, 155);
            this->txtCodHotelModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelModPrecio->Name = L"txtCodHotelModPrecio";
            this->txtCodHotelModPrecio->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelModPrecio->TabIndex = 97;
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->Location = System::Drawing::Point(330, 155);
            this->label54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(161, 29);
            this->label54->TabIndex = 96;
            this->label54->Text = L"Código Hotel:";
            // 
            // txtCodPaisModPrecio
            // 
            this->txtCodPaisModPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModPrecio->Location = System::Drawing::Point(630, 85);
            this->txtCodPaisModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModPrecio->Name = L"txtCodPaisModPrecio";
            this->txtCodPaisModPrecio->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModPrecio->TabIndex = 95;
            // 
            // label55
            // 
            this->label55->AutoSize = true;
            this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->Location = System::Drawing::Point(330, 85);
            this->label55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(151, 29);
            this->label55->TabIndex = 94;
            this->label55->Text = L"Código País:";
            // 
            // tabPage18
            // 
            this->tabPage18->Controls->Add(this->txtCodHabModEstadoHab);
            this->tabPage18->Controls->Add(this->label56);
            this->tabPage18->Controls->Add(this->txtEstHabModEstadoHab);
            this->tabPage18->Controls->Add(this->label57);
            this->tabPage18->Controls->Add(this->btnModEstadoHab);
            this->tabPage18->Controls->Add(this->txtCodPisoModEstadoHab);
            this->tabPage18->Controls->Add(this->label58);
            this->tabPage18->Controls->Add(this->txtCodHotelModEstadoHab);
            this->tabPage18->Controls->Add(this->label59);
            this->tabPage18->Controls->Add(this->txtCodPaisModEstadoHab);
            this->tabPage18->Controls->Add(this->label60);
            this->tabPage18->Location = System::Drawing::Point(4, 32);
            this->tabPage18->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage18->Name = L"tabPage18";
            this->tabPage18->Size = System::Drawing::Size(1168, 632);
            this->tabPage18->TabIndex = 7;
            this->tabPage18->Text = L"Estado de habitación";
            this->tabPage18->UseVisualStyleBackColor = true;
            // 
            // txtCodHabModEstadoHab
            // 
            this->txtCodHabModEstadoHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHabModEstadoHab->Location = System::Drawing::Point(630, 308);
            this->txtCodHabModEstadoHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHabModEstadoHab->Name = L"txtCodHabModEstadoHab";
            this->txtCodHabModEstadoHab->Size = System::Drawing::Size(202, 35);
            this->txtCodHabModEstadoHab->TabIndex = 115;
            // 
            // label56
            // 
            this->label56->AutoSize = true;
            this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->Location = System::Drawing::Point(330, 312);
            this->label56->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(218, 29);
            this->label56->TabIndex = 114;
            this->label56->Text = L"Código Habitación:";
            // 
            // txtEstHabModEstadoHab
            // 
            this->txtEstHabModEstadoHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtEstHabModEstadoHab->Location = System::Drawing::Point(630, 383);
            this->txtEstHabModEstadoHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtEstHabModEstadoHab->Name = L"txtEstHabModEstadoHab";
            this->txtEstHabModEstadoHab->Size = System::Drawing::Size(202, 35);
            this->txtEstHabModEstadoHab->TabIndex = 113;
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->Location = System::Drawing::Point(330, 388);
            this->label57->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(214, 29);
            this->label57->TabIndex = 112;
            this->label57->Text = L"Estado Habitación:";
            // 
            // btnModEstadoHab
            // 
            this->btnModEstadoHab->Location = System::Drawing::Point(490, 474);
            this->btnModEstadoHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModEstadoHab->Name = L"btnModEstadoHab";
            this->btnModEstadoHab->Size = System::Drawing::Size(160, 69);
            this->btnModEstadoHab->TabIndex = 111;
            this->btnModEstadoHab->Text = L"Modificar";
            this->btnModEstadoHab->UseVisualStyleBackColor = true;
            this->btnModEstadoHab->Click += gcnew System::EventHandler(this, &AdminHotel::btnModEstadoHab_Click);
            // 
            // txtCodPisoModEstadoHab
            // 
            this->txtCodPisoModEstadoHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoModEstadoHab->Location = System::Drawing::Point(630, 229);
            this->txtCodPisoModEstadoHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoModEstadoHab->Name = L"txtCodPisoModEstadoHab";
            this->txtCodPisoModEstadoHab->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoModEstadoHab->TabIndex = 110;
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->Location = System::Drawing::Point(330, 234);
            this->label58->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(152, 29);
            this->label58->TabIndex = 109;
            this->label58->Text = L"Código Piso:";
            // 
            // txtCodHotelModEstadoHab
            // 
            this->txtCodHotelModEstadoHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelModEstadoHab->Location = System::Drawing::Point(630, 155);
            this->txtCodHotelModEstadoHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelModEstadoHab->Name = L"txtCodHotelModEstadoHab";
            this->txtCodHotelModEstadoHab->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelModEstadoHab->TabIndex = 108;
            // 
            // label59
            // 
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->Location = System::Drawing::Point(330, 155);
            this->label59->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(161, 29);
            this->label59->TabIndex = 107;
            this->label59->Text = L"Código Hotel:";
            // 
            // txtCodPaisModEstadoHab
            // 
            this->txtCodPaisModEstadoHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModEstadoHab->Location = System::Drawing::Point(630, 85);
            this->txtCodPaisModEstadoHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModEstadoHab->Name = L"txtCodPaisModEstadoHab";
            this->txtCodPaisModEstadoHab->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModEstadoHab->TabIndex = 106;
            // 
            // label60
            // 
            this->label60->AutoSize = true;
            this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label60->Location = System::Drawing::Point(330, 85);
            this->label60->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(151, 29);
            this->label60->TabIndex = 105;
            this->label60->Text = L"Código País:";
            // 
            // tabPage19
            // 
            this->tabPage19->Controls->Add(this->tabControl5);
            this->tabPage19->Location = System::Drawing::Point(4, 32);
            this->tabPage19->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage19->Name = L"tabPage19";
            this->tabPage19->Size = System::Drawing::Size(1184, 676);
            this->tabPage19->TabIndex = 4;
            this->tabPage19->Text = L"Reportes";
            this->tabPage19->UseVisualStyleBackColor = true;
            // 
            // tabControl5
            // 
            this->tabControl5->Appearance = System::Windows::Forms::TabAppearance::Buttons;
            this->tabControl5->Controls->Add(this->tabPage20);
            this->tabControl5->Controls->Add(this->tabPage21);
            this->tabControl5->Controls->Add(this->tabPage22);
            this->tabControl5->Controls->Add(this->tabPage23);
            this->tabControl5->Controls->Add(this->tabPage24);
            this->tabControl5->Controls->Add(this->tabPage25);
            this->tabControl5->Controls->Add(this->tabPage26);
            this->tabControl5->Controls->Add(this->tabPage27);
            this->tabControl5->Controls->Add(this->tabPage28);
            this->tabControl5->Controls->Add(this->tabPage29);
            this->tabControl5->Location = System::Drawing::Point(0, 5);
            this->tabControl5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl5->Name = L"tabControl5";
            this->tabControl5->SelectedIndex = 0;
            this->tabControl5->Size = System::Drawing::Size(1180, 668);
            this->tabControl5->TabIndex = 0;
            // 
            // tabPage20
            // 
            this->tabPage20->Controls->Add(this->textBox5);
            this->tabPage20->Controls->Add(this->label73);
            this->tabPage20->Controls->Add(this->btnConsultarHoteles);
            this->tabPage20->Controls->Add(this->txtHoteles);
            this->tabPage20->Location = System::Drawing::Point(4, 32);
            this->tabPage20->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage20->Name = L"tabPage20";
            this->tabPage20->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage20->Size = System::Drawing::Size(1172, 632);
            this->tabPage20->TabIndex = 0;
            this->tabPage20->Text = L"Hoteles";
            this->tabPage20->UseVisualStyleBackColor = true;
            // 
            // textBox5
            // 
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(544, 68);
            this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(246, 35);
            this->textBox5->TabIndex = 114;
            // 
            // label73
            // 
            this->label73->AutoSize = true;
            this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label73->Location = System::Drawing::Point(335, 68);
            this->label73->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(151, 29);
            this->label73->TabIndex = 113;
            this->label73->Text = L"Código País:";
            // 
            // btnConsultarHoteles
            // 
            this->btnConsultarHoteles->Location = System::Drawing::Point(544, 172);
            this->btnConsultarHoteles->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarHoteles->Name = L"btnConsultarHoteles";
            this->btnConsultarHoteles->Size = System::Drawing::Size(246, 43);
            this->btnConsultarHoteles->TabIndex = 1;
            this->btnConsultarHoteles->Text = L"Consultar";
            this->btnConsultarHoteles->UseVisualStyleBackColor = true;
            this->btnConsultarHoteles->Click += gcnew System::EventHandler(this, &AdminHotel::btnConsultarHoteles_Click);
            // 
            // txtHoteles
            // 
            this->txtHoteles->Location = System::Drawing::Point(209, 240);
            this->txtHoteles->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtHoteles->Name = L"txtHoteles";
            this->txtHoteles->ReadOnly = true;
            this->txtHoteles->Size = System::Drawing::Size(896, 342);
            this->txtHoteles->TabIndex = 0;
            this->txtHoteles->Text = L"";
            // 
            // tabPage21
            // 
            this->tabPage21->Controls->Add(this->btnConsultarPisos);
            this->tabPage21->Controls->Add(this->txtPisos);
            this->tabPage21->Controls->Add(this->txtCodHotelConsultarPisos);
            this->tabPage21->Controls->Add(this->label61);
            this->tabPage21->Controls->Add(this->txtCodPaisConsultarPisos);
            this->tabPage21->Controls->Add(this->label62);
            this->tabPage21->Location = System::Drawing::Point(4, 32);
            this->tabPage21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage21->Name = L"tabPage21";
            this->tabPage21->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage21->Size = System::Drawing::Size(1172, 632);
            this->tabPage21->TabIndex = 1;
            this->tabPage21->Text = L"Pisos";
            this->tabPage21->UseVisualStyleBackColor = true;
            // 
            // btnConsultarPisos
            // 
            this->btnConsultarPisos->Location = System::Drawing::Point(530, 218);
            this->btnConsultarPisos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarPisos->Name = L"btnConsultarPisos";
            this->btnConsultarPisos->Size = System::Drawing::Size(112, 46);
            this->btnConsultarPisos->TabIndex = 114;
            this->btnConsultarPisos->Text = L"Consultar";
            this->btnConsultarPisos->UseVisualStyleBackColor = true;
            this->btnConsultarPisos->Click += gcnew System::EventHandler(this, &AdminHotel::btnConsultarPisos_Click);
            // 
            // txtPisos
            // 
            this->txtPisos->Location = System::Drawing::Point(177, 323);
            this->txtPisos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPisos->Name = L"txtPisos";
            this->txtPisos->ReadOnly = true;
            this->txtPisos->Size = System::Drawing::Size(830, 261);
            this->txtPisos->TabIndex = 113;
            this->txtPisos->Text = L"";
            // 
            // txtCodHotelConsultarPisos
            // 
            this->txtCodHotelConsultarPisos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelConsultarPisos->Location = System::Drawing::Point(610, 128);
            this->txtCodHotelConsultarPisos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelConsultarPisos->Name = L"txtCodHotelConsultarPisos";
            this->txtCodHotelConsultarPisos->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelConsultarPisos->TabIndex = 112;
            // 
            // label61
            // 
            this->label61->AutoSize = true;
            this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label61->Location = System::Drawing::Point(310, 128);
            this->label61->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(161, 29);
            this->label61->TabIndex = 111;
            this->label61->Text = L"Código Hotel:";
            // 
            // txtCodPaisConsultarPisos
            // 
            this->txtCodPaisConsultarPisos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisConsultarPisos->Location = System::Drawing::Point(610, 57);
            this->txtCodPaisConsultarPisos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisConsultarPisos->Name = L"txtCodPaisConsultarPisos";
            this->txtCodPaisConsultarPisos->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisConsultarPisos->TabIndex = 110;
            // 
            // label62
            // 
            this->label62->AutoSize = true;
            this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label62->Location = System::Drawing::Point(310, 57);
            this->label62->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(151, 29);
            this->label62->TabIndex = 109;
            this->label62->Text = L"Código País:";
            // 
            // tabPage22
            // 
            this->tabPage22->Controls->Add(this->btnConsultarHab);
            this->tabPage22->Controls->Add(this->txtHabitaciones);
            this->tabPage22->Controls->Add(this->txtCodPisoConsultarHab);
            this->tabPage22->Controls->Add(this->label63);
            this->tabPage22->Controls->Add(this->txtCodHotelConsultarHab);
            this->tabPage22->Controls->Add(this->label64);
            this->tabPage22->Controls->Add(this->txtCodPaisConsultarHab);
            this->tabPage22->Controls->Add(this->label65);
            this->tabPage22->Location = System::Drawing::Point(4, 32);
            this->tabPage22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage22->Name = L"tabPage22";
            this->tabPage22->Size = System::Drawing::Size(1172, 632);
            this->tabPage22->TabIndex = 2;
            this->tabPage22->Text = L"Habitaciones";
            this->tabPage22->UseVisualStyleBackColor = true;
            // 
            // btnConsultarHab
            // 
            this->btnConsultarHab->Location = System::Drawing::Point(507, 291);
            this->btnConsultarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarHab->Name = L"btnConsultarHab";
            this->btnConsultarHab->Size = System::Drawing::Size(112, 46);
            this->btnConsultarHab->TabIndex = 118;
            this->btnConsultarHab->Text = L"Consultar";
            this->btnConsultarHab->UseVisualStyleBackColor = true;
            this->btnConsultarHab->Click += gcnew System::EventHandler(this, &AdminHotel::btnConsultarHab_Click);
            // 
            // txtHabitaciones
            // 
            this->txtHabitaciones->Location = System::Drawing::Point(153, 388);
            this->txtHabitaciones->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtHabitaciones->Name = L"txtHabitaciones";
            this->txtHabitaciones->ReadOnly = true;
            this->txtHabitaciones->Size = System::Drawing::Size(830, 198);
            this->txtHabitaciones->TabIndex = 117;
            this->txtHabitaciones->Text = L"";
            // 
            // txtCodPisoConsultarHab
            // 
            this->txtCodPisoConsultarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoConsultarHab->Location = System::Drawing::Point(608, 198);
            this->txtCodPisoConsultarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoConsultarHab->Name = L"txtCodPisoConsultarHab";
            this->txtCodPisoConsultarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoConsultarHab->TabIndex = 116;
            // 
            // label63
            // 
            this->label63->AutoSize = true;
            this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label63->Location = System::Drawing::Point(308, 203);
            this->label63->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(152, 29);
            this->label63->TabIndex = 115;
            this->label63->Text = L"Código Piso:";
            // 
            // txtCodHotelConsultarHab
            // 
            this->txtCodHotelConsultarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelConsultarHab->Location = System::Drawing::Point(608, 125);
            this->txtCodHotelConsultarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelConsultarHab->Name = L"txtCodHotelConsultarHab";
            this->txtCodHotelConsultarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelConsultarHab->TabIndex = 114;
            // 
            // label64
            // 
            this->label64->AutoSize = true;
            this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label64->Location = System::Drawing::Point(308, 125);
            this->label64->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(161, 29);
            this->label64->TabIndex = 113;
            this->label64->Text = L"Código Hotel:";
            // 
            // txtCodPaisConsultarHab
            // 
            this->txtCodPaisConsultarHab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisConsultarHab->Location = System::Drawing::Point(608, 54);
            this->txtCodPaisConsultarHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisConsultarHab->Name = L"txtCodPaisConsultarHab";
            this->txtCodPaisConsultarHab->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisConsultarHab->TabIndex = 112;
            // 
            // label65
            // 
            this->label65->AutoSize = true;
            this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label65->Location = System::Drawing::Point(308, 54);
            this->label65->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(151, 29);
            this->label65->TabIndex = 111;
            this->label65->Text = L"Código País:";
            // 
            // tabPage23
            // 
            this->tabPage23->Controls->Add(this->btnConsultarEstrellas);
            this->tabPage23->Controls->Add(this->txtEstrellas);
            this->tabPage23->Controls->Add(this->txtCodHotelConsultarEstrellas);
            this->tabPage23->Controls->Add(this->label66);
            this->tabPage23->Controls->Add(this->txtCodPaisConsultarEstrellas);
            this->tabPage23->Controls->Add(this->label67);
            this->tabPage23->Location = System::Drawing::Point(4, 32);
            this->tabPage23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage23->Name = L"tabPage23";
            this->tabPage23->Size = System::Drawing::Size(1172, 632);
            this->tabPage23->TabIndex = 3;
            this->tabPage23->Text = L"Cantidad Estrellas Hotel";
            this->tabPage23->UseVisualStyleBackColor = true;
            // 
            // btnConsultarEstrellas
            // 
            this->btnConsultarEstrellas->Location = System::Drawing::Point(520, 211);
            this->btnConsultarEstrellas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarEstrellas->Name = L"btnConsultarEstrellas";
            this->btnConsultarEstrellas->Size = System::Drawing::Size(112, 46);
            this->btnConsultarEstrellas->TabIndex = 120;
            this->btnConsultarEstrellas->Text = L"Consultar";
            this->btnConsultarEstrellas->UseVisualStyleBackColor = true;
            this->btnConsultarEstrellas->Click += gcnew System::EventHandler(this, &AdminHotel::btnConsultarEstrellas_Click);
            // 
            // txtEstrellas
            // 
            this->txtEstrellas->Location = System::Drawing::Point(168, 315);
            this->txtEstrellas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtEstrellas->Name = L"txtEstrellas";
            this->txtEstrellas->ReadOnly = true;
            this->txtEstrellas->Size = System::Drawing::Size(830, 261);
            this->txtEstrellas->TabIndex = 119;
            this->txtEstrellas->Text = L"";
            // 
            // txtCodHotelConsultarEstrellas
            // 
            this->txtCodHotelConsultarEstrellas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelConsultarEstrellas->Location = System::Drawing::Point(602, 120);
            this->txtCodHotelConsultarEstrellas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelConsultarEstrellas->Name = L"txtCodHotelConsultarEstrellas";
            this->txtCodHotelConsultarEstrellas->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelConsultarEstrellas->TabIndex = 118;
            // 
            // label66
            // 
            this->label66->AutoSize = true;
            this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label66->Location = System::Drawing::Point(302, 120);
            this->label66->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(161, 29);
            this->label66->TabIndex = 117;
            this->label66->Text = L"Código Hotel:";
            // 
            // txtCodPaisConsultarEstrellas
            // 
            this->txtCodPaisConsultarEstrellas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisConsultarEstrellas->Location = System::Drawing::Point(602, 49);
            this->txtCodPaisConsultarEstrellas->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisConsultarEstrellas->Name = L"txtCodPaisConsultarEstrellas";
            this->txtCodPaisConsultarEstrellas->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisConsultarEstrellas->TabIndex = 116;
            // 
            // label67
            // 
            this->label67->AutoSize = true;
            this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label67->Location = System::Drawing::Point(302, 49);
            this->label67->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(151, 29);
            this->label67->TabIndex = 115;
            this->label67->Text = L"Código País:";
            // 
            // tabPage24
            // 
            this->tabPage24->Controls->Add(this->btnConsultarCantHabs);
            this->tabPage24->Controls->Add(this->txtConsultarCantHabs);
            this->tabPage24->Controls->Add(this->txtCodPisoConsultarCantHabs);
            this->tabPage24->Controls->Add(this->label68);
            this->tabPage24->Controls->Add(this->txtCodHotelConsultarCantHabs);
            this->tabPage24->Controls->Add(this->label69);
            this->tabPage24->Controls->Add(this->txtCodPaisConsultarCantHabs);
            this->tabPage24->Controls->Add(this->label70);
            this->tabPage24->Location = System::Drawing::Point(4, 32);
            this->tabPage24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage24->Name = L"tabPage24";
            this->tabPage24->Size = System::Drawing::Size(1172, 632);
            this->tabPage24->TabIndex = 4;
            this->tabPage24->Text = L"Cantidad Habitaciones Piso";
            this->tabPage24->UseVisualStyleBackColor = true;
            // 
            // btnConsultarCantHabs
            // 
            this->btnConsultarCantHabs->Location = System::Drawing::Point(522, 285);
            this->btnConsultarCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarCantHabs->Name = L"btnConsultarCantHabs";
            this->btnConsultarCantHabs->Size = System::Drawing::Size(112, 46);
            this->btnConsultarCantHabs->TabIndex = 126;
            this->btnConsultarCantHabs->Text = L"Consultar";
            this->btnConsultarCantHabs->UseVisualStyleBackColor = true;
            this->btnConsultarCantHabs->Click += gcnew System::EventHandler(this, &AdminHotel::btnConsultarCantHabs_Click);
            // 
            // txtConsultarCantHabs
            // 
            this->txtConsultarCantHabs->Location = System::Drawing::Point(168, 382);
            this->txtConsultarCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtConsultarCantHabs->Name = L"txtConsultarCantHabs";
            this->txtConsultarCantHabs->ReadOnly = true;
            this->txtConsultarCantHabs->Size = System::Drawing::Size(830, 198);
            this->txtConsultarCantHabs->TabIndex = 125;
            this->txtConsultarCantHabs->Text = L"";
            // 
            // txtCodPisoConsultarCantHabs
            // 
            this->txtCodPisoConsultarCantHabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPisoConsultarCantHabs->Location = System::Drawing::Point(622, 192);
            this->txtCodPisoConsultarCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPisoConsultarCantHabs->Name = L"txtCodPisoConsultarCantHabs";
            this->txtCodPisoConsultarCantHabs->Size = System::Drawing::Size(202, 35);
            this->txtCodPisoConsultarCantHabs->TabIndex = 124;
            // 
            // label68
            // 
            this->label68->AutoSize = true;
            this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label68->Location = System::Drawing::Point(322, 197);
            this->label68->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(152, 29);
            this->label68->TabIndex = 123;
            this->label68->Text = L"Código Piso:";
            // 
            // txtCodHotelConsultarCantHabs
            // 
            this->txtCodHotelConsultarCantHabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelConsultarCantHabs->Location = System::Drawing::Point(622, 118);
            this->txtCodHotelConsultarCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelConsultarCantHabs->Name = L"txtCodHotelConsultarCantHabs";
            this->txtCodHotelConsultarCantHabs->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelConsultarCantHabs->TabIndex = 122;
            // 
            // label69
            // 
            this->label69->AutoSize = true;
            this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label69->Location = System::Drawing::Point(322, 118);
            this->label69->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(161, 29);
            this->label69->TabIndex = 121;
            this->label69->Text = L"Código Hotel:";
            // 
            // txtCodPaisConsultarCantHabs
            // 
            this->txtCodPaisConsultarCantHabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisConsultarCantHabs->Location = System::Drawing::Point(622, 48);
            this->txtCodPaisConsultarCantHabs->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisConsultarCantHabs->Name = L"txtCodPaisConsultarCantHabs";
            this->txtCodPaisConsultarCantHabs->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisConsultarCantHabs->TabIndex = 120;
            // 
            // label70
            // 
            this->label70->AutoSize = true;
            this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label70->Location = System::Drawing::Point(322, 48);
            this->label70->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(151, 29);
            this->label70->TabIndex = 119;
            this->label70->Text = L"Código País:";
            // 
            // tabPage25
            // 
            this->tabPage25->Controls->Add(this->btnConsultarUltHotel);
            this->tabPage25->Controls->Add(this->txtUltHotel);
            this->tabPage25->Location = System::Drawing::Point(4, 32);
            this->tabPage25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage25->Name = L"tabPage25";
            this->tabPage25->Size = System::Drawing::Size(1172, 632);
            this->tabPage25->TabIndex = 5;
            this->tabPage25->Text = L"Último Hotel insertado";
            this->tabPage25->UseVisualStyleBackColor = true;
            // 
            // btnConsultarUltHotel
            // 
            this->btnConsultarUltHotel->Location = System::Drawing::Point(513, 71);
            this->btnConsultarUltHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarUltHotel->Name = L"btnConsultarUltHotel";
            this->btnConsultarUltHotel->Size = System::Drawing::Size(112, 35);
            this->btnConsultarUltHotel->TabIndex = 3;
            this->btnConsultarUltHotel->Text = L"Consultar";
            this->btnConsultarUltHotel->UseVisualStyleBackColor = true;
            this->btnConsultarUltHotel->Click += gcnew System::EventHandler(this, &AdminHotel::btnConsultarUltHotel_Click);
            // 
            // txtUltHotel
            // 
            this->txtUltHotel->Location = System::Drawing::Point(148, 211);
            this->txtUltHotel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtUltHotel->Name = L"txtUltHotel";
            this->txtUltHotel->ReadOnly = true;
            this->txtUltHotel->Size = System::Drawing::Size(830, 342);
            this->txtUltHotel->TabIndex = 2;
            this->txtUltHotel->Text = L"";
            // 
            // tabPage26
            // 
            this->tabPage26->Controls->Add(this->btnUltPiso);
            this->tabPage26->Controls->Add(this->txtUltPiso);
            this->tabPage26->Location = System::Drawing::Point(4, 32);
            this->tabPage26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage26->Name = L"tabPage26";
            this->tabPage26->Size = System::Drawing::Size(1172, 632);
            this->tabPage26->TabIndex = 6;
            this->tabPage26->Text = L"Último Piso insertado";
            this->tabPage26->UseVisualStyleBackColor = true;
            // 
            // btnUltPiso
            // 
            this->btnUltPiso->Location = System::Drawing::Point(532, 72);
            this->btnUltPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnUltPiso->Name = L"btnUltPiso";
            this->btnUltPiso->Size = System::Drawing::Size(112, 35);
            this->btnUltPiso->TabIndex = 3;
            this->btnUltPiso->Text = L"Consultar";
            this->btnUltPiso->UseVisualStyleBackColor = true;
            this->btnUltPiso->Click += gcnew System::EventHandler(this, &AdminHotel::btnUltPiso_Click);
            // 
            // txtUltPiso
            // 
            this->txtUltPiso->Location = System::Drawing::Point(168, 212);
            this->txtUltPiso->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtUltPiso->Name = L"txtUltPiso";
            this->txtUltPiso->ReadOnly = true;
            this->txtUltPiso->Size = System::Drawing::Size(830, 342);
            this->txtUltPiso->TabIndex = 2;
            this->txtUltPiso->Text = L"";
            // 
            // tabPage27
            // 
            this->tabPage27->Controls->Add(this->btnUltHab);
            this->tabPage27->Controls->Add(this->txtUltHab);
            this->tabPage27->Location = System::Drawing::Point(4, 32);
            this->tabPage27->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage27->Name = L"tabPage27";
            this->tabPage27->Size = System::Drawing::Size(1172, 632);
            this->tabPage27->TabIndex = 7;
            this->tabPage27->Text = L"Última Habitacion insertada";
            this->tabPage27->UseVisualStyleBackColor = true;
            // 
            // btnUltHab
            // 
            this->btnUltHab->Location = System::Drawing::Point(532, 72);
            this->btnUltHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnUltHab->Name = L"btnUltHab";
            this->btnUltHab->Size = System::Drawing::Size(112, 35);
            this->btnUltHab->TabIndex = 3;
            this->btnUltHab->Text = L"Consultar";
            this->btnUltHab->UseVisualStyleBackColor = true;
            this->btnUltHab->Click += gcnew System::EventHandler(this, &AdminHotel::btnUltHab_Click);
            // 
            // txtUltHab
            // 
            this->txtUltHab->Location = System::Drawing::Point(168, 212);
            this->txtUltHab->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtUltHab->Name = L"txtUltHab";
            this->txtUltHab->ReadOnly = true;
            this->txtUltHab->Size = System::Drawing::Size(830, 342);
            this->txtUltHab->TabIndex = 2;
            this->txtUltHab->Text = L"";
            // 
            // tabPage28
            // 
            this->tabPage28->Controls->Add(this->reserva2);
            this->tabPage28->Controls->Add(this->label72);
            this->tabPage28->Controls->Add(this->reserva1);
            this->tabPage28->Controls->Add(this->label74);
            this->tabPage28->Controls->Add(this->btnReservaciones);
            this->tabPage28->Controls->Add(this->txtReservaciones);
            this->tabPage28->Location = System::Drawing::Point(4, 32);
            this->tabPage28->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage28->Name = L"tabPage28";
            this->tabPage28->Size = System::Drawing::Size(1172, 632);
            this->tabPage28->TabIndex = 8;
            this->tabPage28->Text = L"Reservaciones";
            this->tabPage28->UseVisualStyleBackColor = true;
            // 
            // reserva2
            // 
            this->reserva2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->reserva2->Location = System::Drawing::Point(630, 96);
            this->reserva2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->reserva2->Name = L"reserva2";
            this->reserva2->Size = System::Drawing::Size(202, 35);
            this->reserva2->TabIndex = 126;
            // 
            // label72
            // 
            this->label72->AutoSize = true;
            this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label72->Location = System::Drawing::Point(330, 96);
            this->label72->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(161, 29);
            this->label72->TabIndex = 125;
            this->label72->Text = L"Código Hotel:";
            // 
            // reserva1
            // 
            this->reserva1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->reserva1->Location = System::Drawing::Point(630, 26);
            this->reserva1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->reserva1->Name = L"reserva1";
            this->reserva1->Size = System::Drawing::Size(202, 35);
            this->reserva1->TabIndex = 124;
            // 
            // label74
            // 
            this->label74->AutoSize = true;
            this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label74->Location = System::Drawing::Point(330, 26);
            this->label74->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label74->Name = L"label74";
            this->label74->Size = System::Drawing::Size(151, 29);
            this->label74->TabIndex = 123;
            this->label74->Text = L"Código País:";
            // 
            // btnReservaciones
            // 
            this->btnReservaciones->Location = System::Drawing::Point(479, 153);
            this->btnReservaciones->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnReservaciones->Name = L"btnReservaciones";
            this->btnReservaciones->Size = System::Drawing::Size(158, 46);
            this->btnReservaciones->TabIndex = 5;
            this->btnReservaciones->Text = L"Consultar";
            this->btnReservaciones->UseVisualStyleBackColor = true;
            this->btnReservaciones->Click += gcnew System::EventHandler(this, &AdminHotel::btnReservaciones_Click);
            // 
            // txtReservaciones
            // 
            this->txtReservaciones->Location = System::Drawing::Point(142, 209);
            this->txtReservaciones->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtReservaciones->Name = L"txtReservaciones";
            this->txtReservaciones->ReadOnly = true;
            this->txtReservaciones->Size = System::Drawing::Size(830, 342);
            this->txtReservaciones->TabIndex = 4;
            this->txtReservaciones->Text = L"";
            // 
            // tabPage29
            // 
            this->tabPage29->Controls->Add(this->FacturarH);
            this->tabPage29->Controls->Add(this->mostrarFacturacion);
            this->tabPage29->Location = System::Drawing::Point(4, 32);
            this->tabPage29->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage29->Name = L"tabPage29";
            this->tabPage29->Size = System::Drawing::Size(1172, 632);
            this->tabPage29->TabIndex = 9;
            this->tabPage29->Text = L"Facturar";
            this->tabPage29->UseVisualStyleBackColor = true;
            this->tabPage29->Click += gcnew System::EventHandler(this, &AdminHotel::tabPage29_Click);
            // 
            // FacturarH
            // 
            this->FacturarH->Location = System::Drawing::Point(472, 100);
            this->FacturarH->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->FacturarH->Name = L"FacturarH";
            this->FacturarH->Size = System::Drawing::Size(170, 61);
            this->FacturarH->TabIndex = 134;
            this->FacturarH->Text = L"Facturar";
            this->FacturarH->UseVisualStyleBackColor = true;
            this->FacturarH->Click += gcnew System::EventHandler(this, &AdminHotel::FacturarH_Click);
            // 
            // mostrarFacturacion
            // 
            this->mostrarFacturacion->Location = System::Drawing::Point(171, 229);
            this->mostrarFacturacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->mostrarFacturacion->Name = L"mostrarFacturacion";
            this->mostrarFacturacion->ReadOnly = true;
            this->mostrarFacturacion->Size = System::Drawing::Size(830, 353);
            this->mostrarFacturacion->TabIndex = 133;
            this->mostrarFacturacion->Text = L"";
            // 
            // AdminHotel
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1290, 715);
            this->Controls->Add(this->tabControl1);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"AdminHotel";
            this->Text = L"Administrador Hotel";
            this->Load += gcnew System::EventHandler(this, &AdminHotel::MyForm_Load);
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabControl2->ResumeLayout(false);
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            this->tabPage5->ResumeLayout(false);
            this->tabPage5->PerformLayout();
            this->tabPage6->ResumeLayout(false);
            this->tabControl3->ResumeLayout(false);
            this->tabPage7->ResumeLayout(false);
            this->tabPage7->PerformLayout();
            this->tabPage8->ResumeLayout(false);
            this->tabPage8->PerformLayout();
            this->tabPage9->ResumeLayout(false);
            this->tabPage9->PerformLayout();
            this->tabPage10->ResumeLayout(false);
            this->tabControl4->ResumeLayout(false);
            this->tabPage11->ResumeLayout(false);
            this->tabPage11->PerformLayout();
            this->tabPage12->ResumeLayout(false);
            this->tabPage12->PerformLayout();
            this->tabPage13->ResumeLayout(false);
            this->tabPage13->PerformLayout();
            this->tabPage14->ResumeLayout(false);
            this->tabPage14->PerformLayout();
            this->tabPage15->ResumeLayout(false);
            this->tabPage15->PerformLayout();
            this->tabPage16->ResumeLayout(false);
            this->tabPage16->PerformLayout();
            this->tabPage17->ResumeLayout(false);
            this->tabPage17->PerformLayout();
            this->tabPage18->ResumeLayout(false);
            this->tabPage18->PerformLayout();
            this->tabPage19->ResumeLayout(false);
            this->tabControl5->ResumeLayout(false);
            this->tabPage20->ResumeLayout(false);
            this->tabPage20->PerformLayout();
            this->tabPage21->ResumeLayout(false);
            this->tabPage21->PerformLayout();
            this->tabPage22->ResumeLayout(false);
            this->tabPage22->PerformLayout();
            this->tabPage23->ResumeLayout(false);
            this->tabPage23->PerformLayout();
            this->tabPage24->ResumeLayout(false);
            this->tabPage24->PerformLayout();
            this->tabPage25->ResumeLayout(false);
            this->tabPage26->ResumeLayout(false);
            this->tabPage27->ResumeLayout(false);
            this->tabPage28->ResumeLayout(false);
            this->tabPage28->PerformLayout();
            this->tabPage29->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void tabPage15_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btnInsertarHotel_Click(System::Object^ sender, System::EventArgs^ e) {
        string mensaje;
        int idPais = System::Convert::ToInt32(this->txtCodPaisInsertarHotel->Text);
        int id = System::Convert::ToInt32(this->txtCodHotelInsertarHotel->Text);

        String^ nombre = this->textBox1->Text;
        string nom = msclr::interop::marshal_as<string >(nombre);

        int numEstrellas = System::Convert::ToInt32(this->textBox2->Text);
        mensaje = controlH.agregarHoteles(idPais, id, nom, numEstrellas);
        String^ resultado = gcnew String(mensaje.c_str());
        MessageBox::Show(resultado);
    }
private: System::Void btnInsertarPiso_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisInsertarPiso->Text);
    int idHotel = System::Convert::ToInt32(this->txtHotelInsertarPiso->Text);
    int id = System::Convert::ToInt32(this->txtCodPisoInsertarPiso->Text);

    String^ nombre = this->textBox1->Text;
    string nom = msclr::interop::marshal_as<string >(nombre);

    int numHabitaciones = System::Convert::ToInt32(this->txtCantHabsInsertarPiso->Text);

    mensaje = controlH.agregarPisos(idPais, idHotel, id, nom, numHabitaciones);
    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}
private: System::Void txtHotelInsertarPiso_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnInsertarHabitacion_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisInsertarHab->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelInsertarHab->Text);

    int idPiso = System::Convert::ToInt32(this->txtCodPisoInsertarHab->Text);

    int idHab = System::Convert::ToInt32(this->textBox3->Text);


    String^ tipo2 = this->txtTipoHabInsertarHab->Text;
    string tipo = msclr::interop::marshal_as<string >(tipo2);

    int numCamas = System::Convert::ToInt32(this->txtNumCamasInsertarHab->Text);

    int precio = System::Convert::ToInt32(this->txtPrecioHabInsertarHab->Text);



    String^ estados = this->txtEstadoHabInsertarHab->Text;
    string estado = msclr::interop::marshal_as<string >(estados);


    mensaje = controlH.agregarHabitacion(idPais, idHotel, idPiso, idHab, tipo, numCamas, precio, estado);
    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);

}
private: System::Void txtCodHotelInsertarHab_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnModEstrellas_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisModEstrellas->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelModEstrellas->Text);

    int estrellas = System::Convert::ToInt32(this->txtEstrellasModEstrellas->Text);
    
    mensaje = controlH.modificarEstrellas(idPais, idHotel, estrellas);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);

}
private: System::Void label71_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEliminarHotel_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisEliminarHotel->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelEliminarHotel->Text);

    mensaje = controlH.eliminarHotel(idPais, idHotel);


    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);      

}
private: System::Void btnEliminarPiso_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisEliminarPiso->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelEliminarPiso->Text);

    int idPisos = System::Convert::ToInt32(this->txtCodPisoEliminarPiso->Text);


    mensaje = controlH.eliminarPisos(idPais, idHotel, idPisos);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);


}
private: System::Void btnModNomHotel_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisModNomHotel->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelModNomHotel->Text);

    String^ nom =this->txtNomHotelModNomHotel->Text;
    string tipo = msclr::interop::marshal_as<string >(nom);

    mensaje = controlH.modificarNombre(idPais, idHotel, tipo);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);


}
private: System::Void btnModCantHabs_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisModCantHabs->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelModCantHabs->Text);

    int id = System::Convert::ToInt32(this->txtCodPisoModCantHabs->Text);

    int idHab = System::Convert::ToInt32(this->txtCantHabsModCantHabs->Text);

 
    mensaje = controlH.modificarHabitacionesNumHabitaciones(idPais, idHotel, id, idHab);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}
private: System::Void btnModNomPiso_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisModNomPiso->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelModNomPiso->Text);

    int id = System::Convert::ToInt32(this->txtCodPisoModNomPiso->Text);

    String^ nom = this->txtNomPisoModNomPiso->Text;
    string nombre = msclr::interop::marshal_as<string >(nom);

    mensaje = controlH.modificarNombrePisos(idPais, idHotel, id, nombre);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}
private: System::Void btnModTC_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisModTC->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelModTC->Text);

    int idPiso = System::Convert::ToInt32(this->txtCodPisoModTC->Text);

    int codHab = System::Convert::ToInt32(this->txtCodHabModTC->Text);

    String^ nom = this->txtTCModTC->Text;
    string tipo = msclr::interop::marshal_as<string >(nom);

    mensaje = controlH.modificarHabitacionesTipo(idPais, idHotel, idPiso, codHab, tipo);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);


}
private: System::Void btnModNumCamas_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisModNumCamas->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelModNumCamas->Text);

    int idPiso = System::Convert::ToInt32(this->txtCodPisoModNumCamas->Text);

    int codHab = System::Convert::ToInt32(this->txtCodHabModNumCamas->Text);

    int camas = System::Convert::ToInt32(this->txtNumCamasModNumCamas->Text);


    mensaje = controlH.modificarHabitacionesCamas(idPais, idHotel, idPiso, codHab, camas);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);


}
private: System::Void btnModPrecio_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisModPrecio->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelModPrecio->Text);

    int idPiso = System::Convert::ToInt32(this->txtCodPisoModPrecio->Text);

    int codHab = System::Convert::ToInt32(this->txtCodHabModPrecio->Text);

    int precio = System::Convert::ToInt32(this->txtPrecioModPrecio->Text);


    mensaje = controlH.modificarHabitacionesPrecio(idPais, idHotel, idPiso, codHab, precio);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);


}
private: System::Void btnModEstadoHab_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisModEstadoHab->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelModEstadoHab->Text);

    int idPiso = System::Convert::ToInt32(this->txtCodPisoModEstadoHab->Text);

    int codHab = System::Convert::ToInt32(this->txtCodHabModEstadoHab->Text);

    String^ nom = this->txtEstHabModEstadoHab->Text;
    string estado = msclr::interop::marshal_as<string >(nom);

    mensaje = controlH.modificarHabitacionesEst(idPais, idHotel, idPiso, codHab, estado);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);


    
}
private: System::Void btnEliminarHab_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    
    int idPais = System::Convert::ToInt32(this->txtCodPaisEliminarHab->Text);

    int idHotel = System::Convert::ToInt32(this->txtCodHotelEliminarHab->Text);

    int idPiso = System::Convert::ToInt32(this->txtCodPisoEliminarHab->Text);

    int codHab = System::Convert::ToInt32(this->txtCodHabEliminarHab->Text);
    

    mensaje = controlH.eliminarHabitacion(idPais, idHotel, idPiso, codHab);


    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
    
}
private: System::Void btnConsultarHoteles_Click(System::Object^ sender, System::EventArgs^ e) {

    int id = System::Convert::ToInt32(this->textBox5->Text);

    string mensaje;
    mensaje = controlH.consultarHoteles(id);
    String^ resultado = gcnew String(mensaje.c_str());
    this->txtHoteles->Text = resultado;


}
private: System::Void btnConsultarPisos_Click(System::Object^ sender, System::EventArgs^ e) {
    

    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisConsultarPisos->Text);
    int idHotel = System::Convert::ToInt32(this->txtCodHotelConsultarPisos->Text);

    mensaje = controlH.consultarPisos(idPais, idHotel);
    String^ resultado = gcnew String(mensaje.c_str());
    this->txtPisos->Text = resultado;
}
private: System::Void btnConsultarHab_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisConsultarHab->Text);
    int idHotel = System::Convert::ToInt32(this->txtCodHotelConsultarHab->Text);
    int idPiso = System::Convert::ToInt32(this->txtCodPisoConsultarHab->Text);

    mensaje = controlH.consultarHabitaciones(idPais, idHotel, idPiso);


    String^ resultado = gcnew String(mensaje.c_str());
    this->txtHabitaciones->Text = resultado;
}
private: System::Void btnConsultarEstrellas_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisConsultarEstrellas->Text);
    int idHotel = System::Convert::ToInt32(this->txtCodHotelConsultarEstrellas->Text);

    mensaje = controlH.consultarCantEstrellas(idPais, idHotel);

    String^ resultado = gcnew String(mensaje.c_str());
    this->txtEstrellas->Text = resultado;

}
private: System::Void btnConsultarCantHabs_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisConsultarCantHabs->Text);
    int idHotel = System::Convert::ToInt32(this->txtCodHotelConsultarCantHabs->Text);
    int idPiso = System::Convert::ToInt32(this->txtCodPisoConsultarCantHabs->Text);
    mensaje = controlH.consultarCantHabitaciones(idPais, idHotel, idPiso);
    String^ resultado = gcnew String(mensaje.c_str());
    this->txtConsultarCantHabs->Text = resultado;

}
private: System::Void btnConsultarUltHotel_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    mensaje = controlH.consultarUltimoHotel();
    
    String^ resultado = gcnew String(mensaje.c_str());
    this->txtUltHotel->Text = resultado;

}
private: System::Void btnUltPiso_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    mensaje = controlH.consultarUltimoPiso();

    String^ resultado = gcnew String(mensaje.c_str());
    this->txtUltPiso->Text = resultado;

}
private: System::Void btnUltHab_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    mensaje = controlH.consultarUltimoCuarto();
    String^ resultado = gcnew String(mensaje.c_str());
    this->txtUltHab->Text = resultado;

}
private: System::Void btnReservaciones_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;
    
    int codPais = System::Convert::ToInt32(this->reserva1->Text);
    int codHotel = System::Convert::ToInt32(this->reserva2->Text);
    mensaje = controlH.consultarReservacionHabitaciones(codPais, codHotel);
    String^ resultado = gcnew String(mensaje.c_str());
  
    this->txtReservaciones->Text = resultado;

   
    


}
private: System::Void FacturarH_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    mensaje = controlH.reserva.facturarHoteles();
    String^ resultado = gcnew String(mensaje.c_str());

    this->mostrarFacturacion->Text = resultado;

    
}
private: System::Void tabPage29_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
