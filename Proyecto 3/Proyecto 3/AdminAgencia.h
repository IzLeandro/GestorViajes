#pragma once
#include "Controlador.h"
#include <msclr/marshal_cppstd.h>
#include<thread>
namespace Proyecto3 {
    Controlador controlA;
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Resumen de AdminAgencia
    /// </summary>
    public ref class AdminAgencia : public System::Windows::Forms::Form
    {
    public:
        AdminAgencia(void){
            InitializeComponent();

        }

        AdminAgencia(Controlador control) {
            InitializeComponent();
            controlA = control;
        }

    protected:
        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        ~AdminAgencia()
        {
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
    private: System::Windows::Forms::Button^ btnInsertarAgencia;

    private: System::Windows::Forms::TextBox^ txtCantCarrosInsertarAgencia;

    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ txtNomAgenciaInsertarAgencia;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaInsertarAgencia;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ txtCodPaisInsertarAgencia;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::Button^ btnInsertarTF;

    private: System::Windows::Forms::TextBox^ txtCodTFInsertarTF;

    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ txtCantHabsInsertarPiso;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ txtNombreTFInsertarTF;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaInsertarTF;

    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ txtCodPaisInsertarTF;

    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TabPage^ tabPage5;
    private: System::Windows::Forms::TextBox^ txtAgnoInsertarCarro;

    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TextBox^ txtNumAsientosInsertarCarro;

    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Button^ btnInsertarCarros;


    private: System::Windows::Forms::TextBox^ txtCodTFInsertarCarro;

    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TextBox^ txtModeloInsertarCarro;

    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ txtPlacaInsertarCarro;

    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaInsertarCarro;

    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TextBox^ txtCodPaisInsertarCarro;

    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::TabPage^ tabPage6;
    private: System::Windows::Forms::TabControl^ tabControl3;
    private: System::Windows::Forms::TabPage^ tabPage7;
    private: System::Windows::Forms::Button^ btnEliminarAgencia;

    private: System::Windows::Forms::TextBox^ txtCodAgenciaEliminarAgencia;

    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::TextBox^ txtCodPaisEliminarAgencia;

    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::TabPage^ tabPage8;
    private: System::Windows::Forms::TextBox^ txtCodTFEliminarTF;

    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Button^ btnEliminarTF;

    private: System::Windows::Forms::TextBox^ txtCodAgenciaEliminarTF;

    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TextBox^ txtCodPaisEliminarTF;

    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::TabPage^ tabPage9;
    private: System::Windows::Forms::TextBox^ txtPlacaEliminarCarro;

    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::TextBox^ txtCodTFEliminarCarro;

    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Button^ btnEliminarCarro;

    private: System::Windows::Forms::TextBox^ txtCodAgenciaEliminarCarro;

    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::TextBox^ txtCodPaisEliminarCarro;

    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::TabPage^ tabPage10;
    private: System::Windows::Forms::TabControl^ tabControl4;
    private: System::Windows::Forms::TabPage^ tabPage11;
    private: System::Windows::Forms::Button^ btnModNumCarrosAgen;

    private: System::Windows::Forms::TextBox^ txtNumCarrosModNumCarrosAgen;

    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaModNumCarrosAgen;


    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::TextBox^ txtCodPaisModNumCarrosAgen;

    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::TabPage^ tabPage12;
    private: System::Windows::Forms::Button^ btnModNomAgencia;

    private: System::Windows::Forms::TextBox^ txtNomAgenciaModNomAgencia;

    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaModNomAgencia;

    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::TextBox^ txtCodPaisModNomAgencia;

    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::TabPage^ tabPage13;
    private: System::Windows::Forms::TextBox^ txtCantCarrosTFModCantCarrosTF;

    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Button^ btnModCantCarrosTF;

    private: System::Windows::Forms::TextBox^ txtCodTFModCantCarrosTF;

    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaModCantCarrosTF;


    private: System::Windows::Forms::TextBox^ txtCodPaisModCantCarrosTF;

    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::TabPage^ tabPage14;
    private: System::Windows::Forms::TextBox^ txtNomTFModNomTF;

    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Button^ btnModNomTF;

    private: System::Windows::Forms::TextBox^ txtCodTFModNomTF;

    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::TextBox^ txtCodAgencialModNomTF;

    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::TextBox^ txtCodPaisModNomTF;

    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::TabPage^ tabPage15;
    private: System::Windows::Forms::TextBox^ txtPlacaModNumAsientos;

    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::TextBox^ txtNumAsientosModNumAsientos;

    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Button^ btnModNumAsientos;

    private: System::Windows::Forms::TextBox^ txtCodTFModNumAsientos;

    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaModNumAsientos;

    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::TextBox^ txtCodPaisModNumAsientos;

    private: System::Windows::Forms::Label^ label44;












    private: System::Windows::Forms::TabPage^ tabPage17;
    private: System::Windows::Forms::TextBox^ txtPlacaModPrecio;

    private: System::Windows::Forms::Label^ label51;
    private: System::Windows::Forms::TextBox^ txtPrecioModPrecio;
    private: System::Windows::Forms::Label^ label52;
    private: System::Windows::Forms::Button^ btnModPrecio;
    private: System::Windows::Forms::TextBox^ txtCodTFModPrecio;

    private: System::Windows::Forms::Label^ label53;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaModPrecio;

    private: System::Windows::Forms::Label^ label54;
    private: System::Windows::Forms::TextBox^ txtCodPaisModPrecio;
    private: System::Windows::Forms::Label^ label55;
    private: System::Windows::Forms::TabPage^ tabPage18;
    private: System::Windows::Forms::TextBox^ txtPlacaModEstadoCarro;
    private: System::Windows::Forms::TextBox^ txtEstCarroModEstadoCarro;



    private: System::Windows::Forms::Label^ label57;
    private: System::Windows::Forms::Button^ btnModEstadoCarro;

    private: System::Windows::Forms::TextBox^ txtCodTFModEstadoCarro;

    private: System::Windows::Forms::TextBox^ txtCodAgenciaModEstadoCarro;


    private: System::Windows::Forms::TextBox^ txtCodPaisModEstadoCarro;



    private: System::Windows::Forms::TabPage^ tabPage19;
    private: System::Windows::Forms::TabControl^ tabControl5;
    private: System::Windows::Forms::TabPage^ tabPage20;
    private: System::Windows::Forms::Button^ btnConsultarAgencias;
    private: System::Windows::Forms::RichTextBox^ txtAgencias;


    private: System::Windows::Forms::TabPage^ tabPage21;
    private: System::Windows::Forms::Button^ btnConsultarTF;
    private: System::Windows::Forms::RichTextBox^ txtTF;


    private: System::Windows::Forms::TextBox^ txtCodHotelConsultarTF;

    private: System::Windows::Forms::Label^ label61;
    private: System::Windows::Forms::TextBox^ txtCodPaisConsultarTF;

    private: System::Windows::Forms::Label^ label62;















    private: System::Windows::Forms::TabPage^ tabPage23;
    private: System::Windows::Forms::Button^ btnConsultarCantCarrosAgen;
    private: System::Windows::Forms::RichTextBox^ txtCantCarrosAgen;


    private: System::Windows::Forms::TextBox^ txtCodAgenciaConsultarCantCarrosAgen;

    private: System::Windows::Forms::Label^ label66;
    private: System::Windows::Forms::TextBox^ txtCodPaisConsultarCantCarrosAgen;

    private: System::Windows::Forms::Label^ label67;
    private: System::Windows::Forms::TabPage^ tabPage24;
    private: System::Windows::Forms::Button^ btnConsultarCantAsientos;
    private: System::Windows::Forms::RichTextBox^ txtConsultarCantAsientos;
    private: System::Windows::Forms::TextBox^ txtCodTFConsultarCantAsientos;



    private: System::Windows::Forms::Label^ label68;
    private: System::Windows::Forms::TextBox^ txtCodAgenciaConsultarCantAsientos;

    private: System::Windows::Forms::Label^ label69;
    private: System::Windows::Forms::TextBox^ txtCodPaisConsultarCantAsientos;

    private: System::Windows::Forms::Label^ label70;
    private: System::Windows::Forms::TabPage^ tabPage25;
    private: System::Windows::Forms::Button^ btnConsultarUltAgencia;
    private: System::Windows::Forms::RichTextBox^ txtUltAgencia;


    private: System::Windows::Forms::TabPage^ tabPage26;
    private: System::Windows::Forms::Button^ btnUltTF;
    private: System::Windows::Forms::RichTextBox^ txtUltTF;


    private: System::Windows::Forms::TabPage^ tabPage27;
    private: System::Windows::Forms::Button^ btnUltHab;
    private: System::Windows::Forms::RichTextBox^ txtUltHab;
    private: System::Windows::Forms::TextBox^ txtPrecioInsertarCarro;

    private: System::Windows::Forms::Label^ label71;
    private: System::Windows::Forms::TextBox^ txtEstadoCarroInsertarCarro;

    private: System::Windows::Forms::Label^ label72;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::TextBox^ txtPlacaConsultarCantAsientos;


    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::TabPage^ tabPage16;
    private: System::Windows::Forms::Button^ btnConsultarReservaciones;
    private: System::Windows::Forms::RichTextBox^ txtReservaciones;


private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::TextBox^ txtCodPaisAgencia;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TabPage^ tabPage22;
private: System::Windows::Forms::Button^ FacturarA;
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
            this->btnInsertarAgencia = (gcnew System::Windows::Forms::Button());
            this->txtCantCarrosInsertarAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->txtNomAgenciaInsertarAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaInsertarAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisInsertarAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->btnInsertarTF = (gcnew System::Windows::Forms::Button());
            this->txtCodTFInsertarTF = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->txtCantHabsInsertarPiso = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->txtNombreTFInsertarTF = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaInsertarTF = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisInsertarTF = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->txtEstadoCarroInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->txtPrecioInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->txtAgnoInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->txtNumAsientosInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->btnInsertarCarros = (gcnew System::Windows::Forms::Button());
            this->txtCodTFInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->txtModeloInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->txtPlacaInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisInsertarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
            this->btnEliminarAgencia = (gcnew System::Windows::Forms::Button());
            this->txtCodAgenciaEliminarAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisEliminarAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
            this->txtCodTFEliminarTF = (gcnew System::Windows::Forms::TextBox());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->btnEliminarTF = (gcnew System::Windows::Forms::Button());
            this->txtCodAgenciaEliminarTF = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisEliminarTF = (gcnew System::Windows::Forms::TextBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
            this->txtPlacaEliminarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->txtCodTFEliminarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->btnEliminarCarro = (gcnew System::Windows::Forms::Button());
            this->txtCodAgenciaEliminarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisEliminarCarro = (gcnew System::Windows::Forms::TextBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
            this->btnModNumCarrosAgen = (gcnew System::Windows::Forms::Button());
            this->txtNumCarrosModNumCarrosAgen = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaModNumCarrosAgen = (gcnew System::Windows::Forms::TextBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModNumCarrosAgen = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
            this->btnModNomAgencia = (gcnew System::Windows::Forms::Button());
            this->txtNomAgenciaModNomAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaModNomAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModNomAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->txtCantCarrosTFModCantCarrosTF = (gcnew System::Windows::Forms::TextBox());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->btnModCantCarrosTF = (gcnew System::Windows::Forms::Button());
            this->txtCodTFModCantCarrosTF = (gcnew System::Windows::Forms::TextBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaModCantCarrosTF = (gcnew System::Windows::Forms::TextBox());
            this->txtCodPaisModCantCarrosTF = (gcnew System::Windows::Forms::TextBox());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
            this->txtNomTFModNomTF = (gcnew System::Windows::Forms::TextBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->btnModNomTF = (gcnew System::Windows::Forms::Button());
            this->txtCodTFModNomTF = (gcnew System::Windows::Forms::TextBox());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgencialModNomTF = (gcnew System::Windows::Forms::TextBox());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModNomTF = (gcnew System::Windows::Forms::TextBox());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
            this->txtPlacaModNumAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->txtNumAsientosModNumAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->btnModNumAsientos = (gcnew System::Windows::Forms::Button());
            this->txtCodTFModNumAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaModNumAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModNumAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
            this->txtPlacaModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->txtPrecioModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->btnModPrecio = (gcnew System::Windows::Forms::Button());
            this->txtCodTFModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisModPrecio = (gcnew System::Windows::Forms::TextBox());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->txtPlacaModEstadoCarro = (gcnew System::Windows::Forms::TextBox());
            this->txtEstCarroModEstadoCarro = (gcnew System::Windows::Forms::TextBox());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->btnModEstadoCarro = (gcnew System::Windows::Forms::Button());
            this->txtCodTFModEstadoCarro = (gcnew System::Windows::Forms::TextBox());
            this->txtCodAgenciaModEstadoCarro = (gcnew System::Windows::Forms::TextBox());
            this->txtCodPaisModEstadoCarro = (gcnew System::Windows::Forms::TextBox());
            this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
            this->txtCodPaisAgencia = (gcnew System::Windows::Forms::TextBox());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->btnConsultarAgencias = (gcnew System::Windows::Forms::Button());
            this->txtAgencias = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
            this->btnConsultarTF = (gcnew System::Windows::Forms::Button());
            this->txtTF = (gcnew System::Windows::Forms::RichTextBox());
            this->txtCodHotelConsultarTF = (gcnew System::Windows::Forms::TextBox());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisConsultarTF = (gcnew System::Windows::Forms::TextBox());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
            this->btnConsultarCantCarrosAgen = (gcnew System::Windows::Forms::Button());
            this->txtCantCarrosAgen = (gcnew System::Windows::Forms::RichTextBox());
            this->txtCodAgenciaConsultarCantCarrosAgen = (gcnew System::Windows::Forms::TextBox());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisConsultarCantCarrosAgen = (gcnew System::Windows::Forms::TextBox());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->tabPage24 = (gcnew System::Windows::Forms::TabPage());
            this->txtPlacaConsultarCantAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->btnConsultarCantAsientos = (gcnew System::Windows::Forms::Button());
            this->txtConsultarCantAsientos = (gcnew System::Windows::Forms::RichTextBox());
            this->txtCodTFConsultarCantAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->txtCodAgenciaConsultarCantAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->txtCodPaisConsultarCantAsientos = (gcnew System::Windows::Forms::TextBox());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->tabPage25 = (gcnew System::Windows::Forms::TabPage());
            this->btnConsultarUltAgencia = (gcnew System::Windows::Forms::Button());
            this->txtUltAgencia = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage26 = (gcnew System::Windows::Forms::TabPage());
            this->btnUltTF = (gcnew System::Windows::Forms::Button());
            this->txtUltTF = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage27 = (gcnew System::Windows::Forms::TabPage());
            this->btnUltHab = (gcnew System::Windows::Forms::Button());
            this->txtUltHab = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->btnConsultarReservaciones = (gcnew System::Windows::Forms::Button());
            this->txtReservaciones = (gcnew System::Windows::Forms::RichTextBox());
            this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
            this->FacturarA = (gcnew System::Windows::Forms::Button());
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
            this->tabPage17->SuspendLayout();
            this->tabPage18->SuspendLayout();
            this->tabPage19->SuspendLayout();
            this->tabControl5->SuspendLayout();
            this->tabPage20->SuspendLayout();
            this->tabPage21->SuspendLayout();
            this->tabPage23->SuspendLayout();
            this->tabPage24->SuspendLayout();
            this->tabPage25->SuspendLayout();
            this->tabPage26->SuspendLayout();
            this->tabPage27->SuspendLayout();
            this->tabPage16->SuspendLayout();
            this->tabPage22->SuspendLayout();
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
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1275, 805);
            this->tabControl1->TabIndex = 1;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Location = System::Drawing::Point(4, 32);
            this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage1->Size = System::Drawing::Size(1267, 769);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Menú Admin Agencia";
            this->tabPage1->UseVisualStyleBackColor = true;
            this->tabPage1->Click += gcnew System::EventHandler(this, &AdminAgencia::tabPage1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(252, 285);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(583, 52);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Menú Administrador Agencia";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->tabControl2);
            this->tabPage2->Location = System::Drawing::Point(4, 32);
            this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage2->Size = System::Drawing::Size(1267, 769);
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
            this->tabControl2->Size = System::Drawing::Size(1180, 749);
            this->tabControl2->TabIndex = 0;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->btnInsertarAgencia);
            this->tabPage3->Controls->Add(this->txtCantCarrosInsertarAgencia);
            this->tabPage3->Controls->Add(this->label5);
            this->tabPage3->Controls->Add(this->txtNomAgenciaInsertarAgencia);
            this->tabPage3->Controls->Add(this->label4);
            this->tabPage3->Controls->Add(this->txtCodAgenciaInsertarAgencia);
            this->tabPage3->Controls->Add(this->label2);
            this->tabPage3->Controls->Add(this->txtCodPaisInsertarAgencia);
            this->tabPage3->Controls->Add(this->label3);
            this->tabPage3->Location = System::Drawing::Point(4, 32);
            this->tabPage3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage3->Size = System::Drawing::Size(1172, 713);
            this->tabPage3->TabIndex = 0;
            this->tabPage3->Text = L"Insertar Agencia";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // btnInsertarAgencia
            // 
            this->btnInsertarAgencia->Location = System::Drawing::Point(462, 477);
            this->btnInsertarAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnInsertarAgencia->Name = L"btnInsertarAgencia";
            this->btnInsertarAgencia->Size = System::Drawing::Size(160, 69);
            this->btnInsertarAgencia->TabIndex = 9;
            this->btnInsertarAgencia->Text = L"Insertar";
            this->btnInsertarAgencia->UseVisualStyleBackColor = true;
            this->btnInsertarAgencia->Click += gcnew System::EventHandler(this, &AdminAgencia::btnInsertarAgencia_Click);
            // 
            // txtCantCarrosInsertarAgencia
            // 
            this->txtCantCarrosInsertarAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCantCarrosInsertarAgencia->Location = System::Drawing::Point(632, 357);
            this->txtCantCarrosInsertarAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCantCarrosInsertarAgencia->Name = L"txtCantCarrosInsertarAgencia";
            this->txtCantCarrosInsertarAgencia->Size = System::Drawing::Size(202, 35);
            this->txtCantCarrosInsertarAgencia->TabIndex = 8;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(264, 362);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(361, 29);
            this->label5->TabIndex = 7;
            this->label5->Text = L"Cantidad Carros Agencia Nueva:";
            // 
            // txtNomAgenciaInsertarAgencia
            // 
            this->txtNomAgenciaInsertarAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNomAgenciaInsertarAgencia->Location = System::Drawing::Point(632, 271);
            this->txtNomAgenciaInsertarAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNomAgenciaInsertarAgencia->Name = L"txtNomAgenciaInsertarAgencia";
            this->txtNomAgenciaInsertarAgencia->Size = System::Drawing::Size(202, 35);
            this->txtNomAgenciaInsertarAgencia->TabIndex = 6;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(264, 280);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(275, 29);
            this->label4->TabIndex = 5;
            this->label4->Text = L"Nombre Agencia Nueva:";
            // 
            // txtCodAgenciaInsertarAgencia
            // 
            this->txtCodAgenciaInsertarAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaInsertarAgencia->Location = System::Drawing::Point(632, 188);
            this->txtCodAgenciaInsertarAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaInsertarAgencia->Name = L"txtCodAgenciaInsertarAgencia";
            this->txtCodAgenciaInsertarAgencia->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaInsertarAgencia->TabIndex = 4;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(264, 197);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(266, 29);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Código Agencia Nueva:";
            // 
            // txtCodPaisInsertarAgencia
            // 
            this->txtCodPaisInsertarAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisInsertarAgencia->Location = System::Drawing::Point(632, 105);
            this->txtCodPaisInsertarAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisInsertarAgencia->Name = L"txtCodPaisInsertarAgencia";
            this->txtCodPaisInsertarAgencia->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisInsertarAgencia->TabIndex = 2;
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
            this->tabPage4->Controls->Add(this->btnInsertarTF);
            this->tabPage4->Controls->Add(this->txtCodTFInsertarTF);
            this->tabPage4->Controls->Add(this->label10);
            this->tabPage4->Controls->Add(this->txtCantHabsInsertarPiso);
            this->tabPage4->Controls->Add(this->label6);
            this->tabPage4->Controls->Add(this->txtNombreTFInsertarTF);
            this->tabPage4->Controls->Add(this->label7);
            this->tabPage4->Controls->Add(this->txtCodAgenciaInsertarTF);
            this->tabPage4->Controls->Add(this->label8);
            this->tabPage4->Controls->Add(this->txtCodPaisInsertarTF);
            this->tabPage4->Controls->Add(this->label9);
            this->tabPage4->Location = System::Drawing::Point(4, 32);
            this->tabPage4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage4->Size = System::Drawing::Size(1172, 713);
            this->tabPage4->TabIndex = 1;
            this->tabPage4->Text = L"Insertar Flotilla";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // btnInsertarTF
            // 
            this->btnInsertarTF->Location = System::Drawing::Point(500, 492);
            this->btnInsertarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnInsertarTF->Name = L"btnInsertarTF";
            this->btnInsertarTF->Size = System::Drawing::Size(160, 69);
            this->btnInsertarTF->TabIndex = 19;
            this->btnInsertarTF->Text = L"Insertar";
            this->btnInsertarTF->UseVisualStyleBackColor = true;
            this->btnInsertarTF->Click += gcnew System::EventHandler(this, &AdminAgencia::btnInsertarTF_Click);
            // 
            // txtCodTFInsertarTF
            // 
            this->txtCodTFInsertarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodTFInsertarTF->Location = System::Drawing::Point(616, 222);
            this->txtCodTFInsertarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFInsertarTF->Name = L"txtCodTFInsertarTF";
            this->txtCodTFInsertarTF->Size = System::Drawing::Size(202, 35);
            this->txtCodTFInsertarTF->TabIndex = 18;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(204, 231);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(251, 29);
            this->label10->TabIndex = 17;
            this->label10->Text = L"Código Flotilla Nueva:";
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
            this->label6->Size = System::Drawing::Size(346, 29);
            this->label6->TabIndex = 15;
            this->label6->Text = L"Cantidad Carros Flotilla Nueva:";
            // 
            // txtNombreTFInsertarTF
            // 
            this->txtNombreTFInsertarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNombreTFInsertarTF->Location = System::Drawing::Point(616, 309);
            this->txtNombreTFInsertarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNombreTFInsertarTF->Name = L"txtNombreTFInsertarTF";
            this->txtNombreTFInsertarTF->Size = System::Drawing::Size(202, 35);
            this->txtNombreTFInsertarTF->TabIndex = 14;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(204, 318);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(260, 29);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Nombre Flotilla Nueva:";
            // 
            // txtCodAgenciaInsertarTF
            // 
            this->txtCodAgenciaInsertarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaInsertarTF->Location = System::Drawing::Point(616, 137);
            this->txtCodAgenciaInsertarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaInsertarTF->Name = L"txtCodAgenciaInsertarTF";
            this->txtCodAgenciaInsertarTF->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaInsertarTF->TabIndex = 12;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(204, 146);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(191, 29);
            this->label8->TabIndex = 11;
            this->label8->Text = L"Código Agencia:";
            // 
            // txtCodPaisInsertarTF
            // 
            this->txtCodPaisInsertarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisInsertarTF->Location = System::Drawing::Point(616, 49);
            this->txtCodPaisInsertarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisInsertarTF->Name = L"txtCodPaisInsertarTF";
            this->txtCodPaisInsertarTF->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisInsertarTF->TabIndex = 10;
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
            this->tabPage5->Controls->Add(this->txtEstadoCarroInsertarCarro);
            this->tabPage5->Controls->Add(this->label72);
            this->tabPage5->Controls->Add(this->txtPrecioInsertarCarro);
            this->tabPage5->Controls->Add(this->label71);
            this->tabPage5->Controls->Add(this->txtAgnoInsertarCarro);
            this->tabPage5->Controls->Add(this->label17);
            this->tabPage5->Controls->Add(this->txtNumAsientosInsertarCarro);
            this->tabPage5->Controls->Add(this->label16);
            this->tabPage5->Controls->Add(this->btnInsertarCarros);
            this->tabPage5->Controls->Add(this->txtCodTFInsertarCarro);
            this->tabPage5->Controls->Add(this->label11);
            this->tabPage5->Controls->Add(this->txtModeloInsertarCarro);
            this->tabPage5->Controls->Add(this->label12);
            this->tabPage5->Controls->Add(this->txtPlacaInsertarCarro);
            this->tabPage5->Controls->Add(this->label13);
            this->tabPage5->Controls->Add(this->txtCodAgenciaInsertarCarro);
            this->tabPage5->Controls->Add(this->label14);
            this->tabPage5->Controls->Add(this->txtCodPaisInsertarCarro);
            this->tabPage5->Controls->Add(this->label15);
            this->tabPage5->Location = System::Drawing::Point(4, 32);
            this->tabPage5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Size = System::Drawing::Size(1172, 713);
            this->tabPage5->TabIndex = 2;
            this->tabPage5->Text = L"Insertar Carro";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // txtEstadoCarroInsertarCarro
            // 
            this->txtEstadoCarroInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtEstadoCarroInsertarCarro->Location = System::Drawing::Point(688, 526);
            this->txtEstadoCarroInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtEstadoCarroInsertarCarro->Name = L"txtEstadoCarroInsertarCarro";
            this->txtEstadoCarroInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtEstadoCarroInsertarCarro->TabIndex = 38;
            // 
            // label72
            // 
            this->label72->AutoSize = true;
            this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label72->Location = System::Drawing::Point(276, 531);
            this->label72->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(236, 29);
            this->label72->TabIndex = 37;
            this->label72->Text = L"Estado Carro Nuevo:";
            // 
            // txtPrecioInsertarCarro
            // 
            this->txtPrecioInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtPrecioInsertarCarro->Location = System::Drawing::Point(688, 460);
            this->txtPrecioInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPrecioInsertarCarro->Name = L"txtPrecioInsertarCarro";
            this->txtPrecioInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtPrecioInsertarCarro->TabIndex = 36;
            // 
            // label71
            // 
            this->label71->AutoSize = true;
            this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label71->Location = System::Drawing::Point(276, 460);
            this->label71->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(231, 29);
            this->label71->TabIndex = 35;
            this->label71->Text = L"Precio Carro Nuevo:";
            // 
            // txtAgnoInsertarCarro
            // 
            this->txtAgnoInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtAgnoInsertarCarro->Location = System::Drawing::Point(688, 392);
            this->txtAgnoInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtAgnoInsertarCarro->Name = L"txtAgnoInsertarCarro";
            this->txtAgnoInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtAgnoInsertarCarro->TabIndex = 34;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(276, 392);
            this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(203, 29);
            this->label17->TabIndex = 33;
            this->label17->Text = L"Año Carro Nuevo:";
            // 
            // txtNumAsientosInsertarCarro
            // 
            this->txtNumAsientosInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNumAsientosInsertarCarro->Location = System::Drawing::Point(688, 320);
            this->txtNumAsientosInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNumAsientosInsertarCarro->Name = L"txtNumAsientosInsertarCarro";
            this->txtNumAsientosInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtNumAsientosInsertarCarro->TabIndex = 32;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(276, 329);
            this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(346, 29);
            this->label16->TabIndex = 31;
            this->label16->Text = L"Número Asientos Carro Nuevo:";
            // 
            // btnInsertarCarros
            // 
            this->btnInsertarCarros->Location = System::Drawing::Point(522, 609);
            this->btnInsertarCarros->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnInsertarCarros->Name = L"btnInsertarCarros";
            this->btnInsertarCarros->Size = System::Drawing::Size(160, 69);
            this->btnInsertarCarros->TabIndex = 30;
            this->btnInsertarCarros->Text = L"Insertar";
            this->btnInsertarCarros->UseVisualStyleBackColor = true;
            this->btnInsertarCarros->Click += gcnew System::EventHandler(this, &AdminAgencia::btnInsertarHabitacion_Click);
            // 
            // txtCodTFInsertarCarro
            // 
            this->txtCodTFInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodTFInsertarCarro->Location = System::Drawing::Point(688, 120);
            this->txtCodTFInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFInsertarCarro->Name = L"txtCodTFInsertarCarro";
            this->txtCodTFInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodTFInsertarCarro->TabIndex = 29;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(276, 129);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(176, 29);
            this->label11->TabIndex = 28;
            this->label11->Text = L"Código Flotilla:";
            // 
            // txtModeloInsertarCarro
            // 
            this->txtModeloInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtModeloInsertarCarro->Location = System::Drawing::Point(688, 257);
            this->txtModeloInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtModeloInsertarCarro->Name = L"txtModeloInsertarCarro";
            this->txtModeloInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtModeloInsertarCarro->TabIndex = 27;
            this->txtModeloInsertarCarro->TextChanged += gcnew System::EventHandler(this, &AdminAgencia::txtModeloInsertarCarro_TextChanged);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(276, 262);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(243, 29);
            this->label12->TabIndex = 26;
            this->label12->Text = L"Modelo Carro Nuevo:";
            // 
            // txtPlacaInsertarCarro
            // 
            this->txtPlacaInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtPlacaInsertarCarro->Location = System::Drawing::Point(688, 185);
            this->txtPlacaInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPlacaInsertarCarro->Name = L"txtPlacaInsertarCarro";
            this->txtPlacaInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtPlacaInsertarCarro->TabIndex = 25;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(276, 194);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(221, 29);
            this->label13->TabIndex = 24;
            this->label13->Text = L"Placa Carro Nuevo:";
            // 
            // txtCodAgenciaInsertarCarro
            // 
            this->txtCodAgenciaInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaInsertarCarro->Location = System::Drawing::Point(688, 71);
            this->txtCodAgenciaInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaInsertarCarro->Name = L"txtCodAgenciaInsertarCarro";
            this->txtCodAgenciaInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaInsertarCarro->TabIndex = 23;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(276, 71);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(191, 29);
            this->label14->TabIndex = 22;
            this->label14->Text = L"Código Agencia:";
            this->label14->Click += gcnew System::EventHandler(this, &AdminAgencia::label14_Click);
            // 
            // txtCodPaisInsertarCarro
            // 
            this->txtCodPaisInsertarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisInsertarCarro->Location = System::Drawing::Point(688, 22);
            this->txtCodPaisInsertarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisInsertarCarro->Name = L"txtCodPaisInsertarCarro";
            this->txtCodPaisInsertarCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisInsertarCarro->TabIndex = 21;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(276, 22);
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
            this->tabPage6->Size = System::Drawing::Size(1267, 769);
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
            this->tabControl3->Size = System::Drawing::Size(1186, 762);
            this->tabControl3->TabIndex = 0;
            // 
            // tabPage7
            // 
            this->tabPage7->Controls->Add(this->btnEliminarAgencia);
            this->tabPage7->Controls->Add(this->txtCodAgenciaEliminarAgencia);
            this->tabPage7->Controls->Add(this->label18);
            this->tabPage7->Controls->Add(this->txtCodPaisEliminarAgencia);
            this->tabPage7->Controls->Add(this->label19);
            this->tabPage7->Location = System::Drawing::Point(4, 32);
            this->tabPage7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage7->Name = L"tabPage7";
            this->tabPage7->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage7->Size = System::Drawing::Size(1178, 726);
            this->tabPage7->TabIndex = 0;
            this->tabPage7->Text = L"Eliminar Agencia";
            this->tabPage7->UseVisualStyleBackColor = true;
            // 
            // btnEliminarAgencia
            // 
            this->btnEliminarAgencia->Location = System::Drawing::Point(476, 377);
            this->btnEliminarAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnEliminarAgencia->Name = L"btnEliminarAgencia";
            this->btnEliminarAgencia->Size = System::Drawing::Size(160, 69);
            this->btnEliminarAgencia->TabIndex = 28;
            this->btnEliminarAgencia->Text = L"Eliminar";
            this->btnEliminarAgencia->UseVisualStyleBackColor = true;
            this->btnEliminarAgencia->Click += gcnew System::EventHandler(this, &AdminAgencia::btnEliminarAgencia_Click);
            // 
            // txtCodAgenciaEliminarAgencia
            // 
            this->txtCodAgenciaEliminarAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaEliminarAgencia->Location = System::Drawing::Point(561, 251);
            this->txtCodAgenciaEliminarAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaEliminarAgencia->Name = L"txtCodAgenciaEliminarAgencia";
            this->txtCodAgenciaEliminarAgencia->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaEliminarAgencia->TabIndex = 27;
            this->txtCodAgenciaEliminarAgencia->TextChanged += gcnew System::EventHandler(this, &AdminAgencia::txtCodAgenciaEliminarAgencia_TextChanged);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(344, 251);
            this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(191, 29);
            this->label18->TabIndex = 26;
            this->label18->Text = L"Código Agencia:";
            // 
            // txtCodPaisEliminarAgencia
            // 
            this->txtCodPaisEliminarAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisEliminarAgencia->Location = System::Drawing::Point(561, 135);
            this->txtCodPaisEliminarAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisEliminarAgencia->Name = L"txtCodPaisEliminarAgencia";
            this->txtCodPaisEliminarAgencia->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisEliminarAgencia->TabIndex = 25;
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
            this->tabPage8->Controls->Add(this->txtCodTFEliminarTF);
            this->tabPage8->Controls->Add(this->label22);
            this->tabPage8->Controls->Add(this->btnEliminarTF);
            this->tabPage8->Controls->Add(this->txtCodAgenciaEliminarTF);
            this->tabPage8->Controls->Add(this->label20);
            this->tabPage8->Controls->Add(this->txtCodPaisEliminarTF);
            this->tabPage8->Controls->Add(this->label21);
            this->tabPage8->Location = System::Drawing::Point(4, 32);
            this->tabPage8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage8->Name = L"tabPage8";
            this->tabPage8->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage8->Size = System::Drawing::Size(1178, 726);
            this->tabPage8->TabIndex = 1;
            this->tabPage8->Text = L"Eliminar Flotilla";
            this->tabPage8->UseVisualStyleBackColor = true;
            // 
            // txtCodTFEliminarTF
            // 
            this->txtCodTFEliminarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodTFEliminarTF->Location = System::Drawing::Point(594, 298);
            this->txtCodTFEliminarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFEliminarTF->Name = L"txtCodTFEliminarTF";
            this->txtCodTFEliminarTF->Size = System::Drawing::Size(202, 35);
            this->txtCodTFEliminarTF->TabIndex = 35;
            this->txtCodTFEliminarTF->TextChanged += gcnew System::EventHandler(this, &AdminAgencia::txtCodTFEliminarTF_TextChanged);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(376, 303);
            this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(176, 29);
            this->label22->TabIndex = 34;
            this->label22->Text = L"Código Flotilla:";
            // 
            // btnEliminarTF
            // 
            this->btnEliminarTF->Location = System::Drawing::Point(508, 400);
            this->btnEliminarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnEliminarTF->Name = L"btnEliminarTF";
            this->btnEliminarTF->Size = System::Drawing::Size(160, 69);
            this->btnEliminarTF->TabIndex = 33;
            this->btnEliminarTF->Text = L"Eliminar";
            this->btnEliminarTF->UseVisualStyleBackColor = true;
            this->btnEliminarTF->Click += gcnew System::EventHandler(this, &AdminAgencia::btnEliminarTF_Click);
            // 
            // txtCodAgenciaEliminarTF
            // 
            this->txtCodAgenciaEliminarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaEliminarTF->Location = System::Drawing::Point(594, 203);
            this->txtCodAgenciaEliminarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaEliminarTF->Name = L"txtCodAgenciaEliminarTF";
            this->txtCodAgenciaEliminarTF->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaEliminarTF->TabIndex = 32;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(376, 203);
            this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(191, 29);
            this->label20->TabIndex = 31;
            this->label20->Text = L"Código Agencia:";
            // 
            // txtCodPaisEliminarTF
            // 
            this->txtCodPaisEliminarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisEliminarTF->Location = System::Drawing::Point(594, 109);
            this->txtCodPaisEliminarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisEliminarTF->Name = L"txtCodPaisEliminarTF";
            this->txtCodPaisEliminarTF->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisEliminarTF->TabIndex = 30;
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
            this->tabPage9->Controls->Add(this->txtPlacaEliminarCarro);
            this->tabPage9->Controls->Add(this->label26);
            this->tabPage9->Controls->Add(this->txtCodTFEliminarCarro);
            this->tabPage9->Controls->Add(this->label23);
            this->tabPage9->Controls->Add(this->btnEliminarCarro);
            this->tabPage9->Controls->Add(this->txtCodAgenciaEliminarCarro);
            this->tabPage9->Controls->Add(this->label24);
            this->tabPage9->Controls->Add(this->txtCodPaisEliminarCarro);
            this->tabPage9->Controls->Add(this->label25);
            this->tabPage9->Location = System::Drawing::Point(4, 32);
            this->tabPage9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage9->Name = L"tabPage9";
            this->tabPage9->Size = System::Drawing::Size(1178, 726);
            this->tabPage9->TabIndex = 2;
            this->tabPage9->Text = L"Eliminar Carro";
            this->tabPage9->UseVisualStyleBackColor = true;
            // 
            // txtPlacaEliminarCarro
            // 
            this->txtPlacaEliminarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtPlacaEliminarCarro->Location = System::Drawing::Point(586, 357);
            this->txtPlacaEliminarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPlacaEliminarCarro->Name = L"txtPlacaEliminarCarro";
            this->txtPlacaEliminarCarro->Size = System::Drawing::Size(202, 35);
            this->txtPlacaEliminarCarro->TabIndex = 44;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(369, 362);
            this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(145, 29);
            this->label26->TabIndex = 43;
            this->label26->Text = L"Placa Carro:";
            // 
            // txtCodTFEliminarCarro
            // 
            this->txtCodTFEliminarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodTFEliminarCarro->Location = System::Drawing::Point(586, 252);
            this->txtCodTFEliminarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFEliminarCarro->Name = L"txtCodTFEliminarCarro";
            this->txtCodTFEliminarCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodTFEliminarCarro->TabIndex = 42;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(369, 257);
            this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(176, 29);
            this->label23->TabIndex = 41;
            this->label23->Text = L"Código Flotilla:";
            // 
            // btnEliminarCarro
            // 
            this->btnEliminarCarro->Location = System::Drawing::Point(507, 458);
            this->btnEliminarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnEliminarCarro->Name = L"btnEliminarCarro";
            this->btnEliminarCarro->Size = System::Drawing::Size(160, 69);
            this->btnEliminarCarro->TabIndex = 40;
            this->btnEliminarCarro->Text = L"Eliminar";
            this->btnEliminarCarro->UseVisualStyleBackColor = true;
            this->btnEliminarCarro->Click += gcnew System::EventHandler(this, &AdminAgencia::btnEliminarCarro_Click);
            // 
            // txtCodAgenciaEliminarCarro
            // 
            this->txtCodAgenciaEliminarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaEliminarCarro->Location = System::Drawing::Point(586, 157);
            this->txtCodAgenciaEliminarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaEliminarCarro->Name = L"txtCodAgenciaEliminarCarro";
            this->txtCodAgenciaEliminarCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaEliminarCarro->TabIndex = 39;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(369, 157);
            this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(191, 29);
            this->label24->TabIndex = 38;
            this->label24->Text = L"Código Agencia:";
            // 
            // txtCodPaisEliminarCarro
            // 
            this->txtCodPaisEliminarCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisEliminarCarro->Location = System::Drawing::Point(586, 63);
            this->txtCodPaisEliminarCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisEliminarCarro->Name = L"txtCodPaisEliminarCarro";
            this->txtCodPaisEliminarCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisEliminarCarro->TabIndex = 37;
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
            this->tabPage10->Size = System::Drawing::Size(1267, 769);
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
            this->tabControl4->Controls->Add(this->tabPage17);
            this->tabControl4->Controls->Add(this->tabPage18);
            this->tabControl4->Location = System::Drawing::Point(0, 5);
            this->tabControl4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl4->Name = L"tabControl4";
            this->tabControl4->SelectedIndex = 0;
            this->tabControl4->Size = System::Drawing::Size(1176, 762);
            this->tabControl4->TabIndex = 0;
            // 
            // tabPage11
            // 
            this->tabPage11->Controls->Add(this->btnModNumCarrosAgen);
            this->tabPage11->Controls->Add(this->txtNumCarrosModNumCarrosAgen);
            this->tabPage11->Controls->Add(this->label29);
            this->tabPage11->Controls->Add(this->txtCodAgenciaModNumCarrosAgen);
            this->tabPage11->Controls->Add(this->label27);
            this->tabPage11->Controls->Add(this->txtCodPaisModNumCarrosAgen);
            this->tabPage11->Controls->Add(this->label28);
            this->tabPage11->Location = System::Drawing::Point(4, 32);
            this->tabPage11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage11->Name = L"tabPage11";
            this->tabPage11->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage11->Size = System::Drawing::Size(1168, 726);
            this->tabPage11->TabIndex = 0;
            this->tabPage11->Text = L"Número Carros Agencia";
            this->tabPage11->UseVisualStyleBackColor = true;
            // 
            // btnModNumCarrosAgen
            // 
            this->btnModNumCarrosAgen->Location = System::Drawing::Point(474, 432);
            this->btnModNumCarrosAgen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModNumCarrosAgen->Name = L"btnModNumCarrosAgen";
            this->btnModNumCarrosAgen->Size = System::Drawing::Size(160, 69);
            this->btnModNumCarrosAgen->TabIndex = 46;
            this->btnModNumCarrosAgen->Text = L"Modificar";
            this->btnModNumCarrosAgen->UseVisualStyleBackColor = true;
            this->btnModNumCarrosAgen->Click += gcnew System::EventHandler(this, &AdminAgencia::btnModNumCarrosAgen_Click);
            // 
            // txtNumCarrosModNumCarrosAgen
            // 
            this->txtNumCarrosModNumCarrosAgen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNumCarrosModNumCarrosAgen->Location = System::Drawing::Point(549, 328);
            this->txtNumCarrosModNumCarrosAgen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNumCarrosModNumCarrosAgen->Name = L"txtNumCarrosModNumCarrosAgen";
            this->txtNumCarrosModNumCarrosAgen->Size = System::Drawing::Size(202, 35);
            this->txtNumCarrosModNumCarrosAgen->TabIndex = 45;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(332, 328);
            this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(184, 29);
            this->label29->TabIndex = 44;
            this->label29->Text = L"Número Carros:";
            // 
            // txtCodAgenciaModNumCarrosAgen
            // 
            this->txtCodAgenciaModNumCarrosAgen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaModNumCarrosAgen->Location = System::Drawing::Point(549, 226);
            this->txtCodAgenciaModNumCarrosAgen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaModNumCarrosAgen->Name = L"txtCodAgenciaModNumCarrosAgen";
            this->txtCodAgenciaModNumCarrosAgen->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaModNumCarrosAgen->TabIndex = 43;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(332, 226);
            this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(191, 29);
            this->label27->TabIndex = 42;
            this->label27->Text = L"Código Agencia:";
            // 
            // txtCodPaisModNumCarrosAgen
            // 
            this->txtCodPaisModNumCarrosAgen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModNumCarrosAgen->Location = System::Drawing::Point(549, 132);
            this->txtCodPaisModNumCarrosAgen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModNumCarrosAgen->Name = L"txtCodPaisModNumCarrosAgen";
            this->txtCodPaisModNumCarrosAgen->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModNumCarrosAgen->TabIndex = 41;
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
            this->tabPage12->Controls->Add(this->btnModNomAgencia);
            this->tabPage12->Controls->Add(this->txtNomAgenciaModNomAgencia);
            this->tabPage12->Controls->Add(this->label30);
            this->tabPage12->Controls->Add(this->txtCodAgenciaModNomAgencia);
            this->tabPage12->Controls->Add(this->label31);
            this->tabPage12->Controls->Add(this->txtCodPaisModNomAgencia);
            this->tabPage12->Controls->Add(this->label32);
            this->tabPage12->Location = System::Drawing::Point(4, 32);
            this->tabPage12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage12->Name = L"tabPage12";
            this->tabPage12->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage12->Size = System::Drawing::Size(1168, 726);
            this->tabPage12->TabIndex = 1;
            this->tabPage12->Text = L"Nombre Agencia";
            this->tabPage12->UseVisualStyleBackColor = true;
            // 
            // btnModNomAgencia
            // 
            this->btnModNomAgencia->Location = System::Drawing::Point(514, 429);
            this->btnModNomAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModNomAgencia->Name = L"btnModNomAgencia";
            this->btnModNomAgencia->Size = System::Drawing::Size(160, 69);
            this->btnModNomAgencia->TabIndex = 53;
            this->btnModNomAgencia->Text = L"Modificar";
            this->btnModNomAgencia->UseVisualStyleBackColor = true;
            this->btnModNomAgencia->Click += gcnew System::EventHandler(this, &AdminAgencia::btnModNomAgencia_Click);
            // 
            // txtNomAgenciaModNomAgencia
            // 
            this->txtNomAgenciaModNomAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNomAgenciaModNomAgencia->Location = System::Drawing::Point(590, 325);
            this->txtNomAgenciaModNomAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNomAgenciaModNomAgencia->Name = L"txtNomAgenciaModNomAgencia";
            this->txtNomAgenciaModNomAgencia->Size = System::Drawing::Size(202, 35);
            this->txtNomAgenciaModNomAgencia->TabIndex = 52;
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(372, 325);
            this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(200, 29);
            this->label30->TabIndex = 51;
            this->label30->Text = L"Nombre Agencia:";
            // 
            // txtCodAgenciaModNomAgencia
            // 
            this->txtCodAgenciaModNomAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaModNomAgencia->Location = System::Drawing::Point(590, 223);
            this->txtCodAgenciaModNomAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaModNomAgencia->Name = L"txtCodAgenciaModNomAgencia";
            this->txtCodAgenciaModNomAgencia->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaModNomAgencia->TabIndex = 50;
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(372, 223);
            this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(191, 29);
            this->label31->TabIndex = 49;
            this->label31->Text = L"Código Agencia:";
            // 
            // txtCodPaisModNomAgencia
            // 
            this->txtCodPaisModNomAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModNomAgencia->Location = System::Drawing::Point(590, 129);
            this->txtCodPaisModNomAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModNomAgencia->Name = L"txtCodPaisModNomAgencia";
            this->txtCodPaisModNomAgencia->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModNomAgencia->TabIndex = 48;
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
            this->tabPage13->Controls->Add(this->label34);
            this->tabPage13->Controls->Add(this->txtCantCarrosTFModCantCarrosTF);
            this->tabPage13->Controls->Add(this->label36);
            this->tabPage13->Controls->Add(this->btnModCantCarrosTF);
            this->tabPage13->Controls->Add(this->txtCodTFModCantCarrosTF);
            this->tabPage13->Controls->Add(this->label33);
            this->tabPage13->Controls->Add(this->txtCodAgenciaModCantCarrosTF);
            this->tabPage13->Controls->Add(this->txtCodPaisModCantCarrosTF);
            this->tabPage13->Controls->Add(this->label35);
            this->tabPage13->Location = System::Drawing::Point(4, 32);
            this->tabPage13->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage13->Name = L"tabPage13";
            this->tabPage13->Size = System::Drawing::Size(1168, 726);
            this->tabPage13->TabIndex = 2;
            this->tabPage13->Text = L"Cantidad Carros Flotilla";
            this->tabPage13->UseVisualStyleBackColor = true;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(268, 145);
            this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(191, 29);
            this->label34->TabIndex = 63;
            this->label34->Text = L"Código Agencia:";
            // 
            // txtCantCarrosTFModCantCarrosTF
            // 
            this->txtCantCarrosTFModCantCarrosTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCantCarrosTFModCantCarrosTF->Location = System::Drawing::Point(564, 346);
            this->txtCantCarrosTFModCantCarrosTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCantCarrosTFModCantCarrosTF->Name = L"txtCantCarrosTFModCantCarrosTF";
            this->txtCantCarrosTFModCantCarrosTF->Size = System::Drawing::Size(202, 35);
            this->txtCantCarrosTFModCantCarrosTF->TabIndex = 62;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(264, 351);
            this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(193, 29);
            this->label36->TabIndex = 61;
            this->label36->Text = L"Cantidad Carros:";
            // 
            // btnModCantCarrosTF
            // 
            this->btnModCantCarrosTF->Location = System::Drawing::Point(484, 437);
            this->btnModCantCarrosTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModCantCarrosTF->Name = L"btnModCantCarrosTF";
            this->btnModCantCarrosTF->Size = System::Drawing::Size(160, 69);
            this->btnModCantCarrosTF->TabIndex = 60;
            this->btnModCantCarrosTF->Text = L"Modificar";
            this->btnModCantCarrosTF->UseVisualStyleBackColor = true;
            this->btnModCantCarrosTF->Click += gcnew System::EventHandler(this, &AdminAgencia::btnModCantCarrosTF_Click);
            // 
            // txtCodTFModCantCarrosTF
            // 
            this->txtCodTFModCantCarrosTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodTFModCantCarrosTF->Location = System::Drawing::Point(564, 242);
            this->txtCodTFModCantCarrosTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFModCantCarrosTF->Name = L"txtCodTFModCantCarrosTF";
            this->txtCodTFModCantCarrosTF->Size = System::Drawing::Size(202, 35);
            this->txtCodTFModCantCarrosTF->TabIndex = 59;
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(264, 246);
            this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(176, 29);
            this->label33->TabIndex = 58;
            this->label33->Text = L"Código Flotilla:";
            // 
            // txtCodAgenciaModCantCarrosTF
            // 
            this->txtCodAgenciaModCantCarrosTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaModCantCarrosTF->Location = System::Drawing::Point(564, 140);
            this->txtCodAgenciaModCantCarrosTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaModCantCarrosTF->Name = L"txtCodAgenciaModCantCarrosTF";
            this->txtCodAgenciaModCantCarrosTF->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaModCantCarrosTF->TabIndex = 57;
            // 
            // txtCodPaisModCantCarrosTF
            // 
            this->txtCodPaisModCantCarrosTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModCantCarrosTF->Location = System::Drawing::Point(564, 46);
            this->txtCodPaisModCantCarrosTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModCantCarrosTF->Name = L"txtCodPaisModCantCarrosTF";
            this->txtCodPaisModCantCarrosTF->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModCantCarrosTF->TabIndex = 55;
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
            this->tabPage14->Controls->Add(this->txtNomTFModNomTF);
            this->tabPage14->Controls->Add(this->label37);
            this->tabPage14->Controls->Add(this->btnModNomTF);
            this->tabPage14->Controls->Add(this->txtCodTFModNomTF);
            this->tabPage14->Controls->Add(this->label38);
            this->tabPage14->Controls->Add(this->txtCodAgencialModNomTF);
            this->tabPage14->Controls->Add(this->label39);
            this->tabPage14->Controls->Add(this->txtCodPaisModNomTF);
            this->tabPage14->Controls->Add(this->label40);
            this->tabPage14->Location = System::Drawing::Point(4, 32);
            this->tabPage14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage14->Name = L"tabPage14";
            this->tabPage14->Size = System::Drawing::Size(1168, 726);
            this->tabPage14->TabIndex = 3;
            this->tabPage14->Text = L"Nombre Flotilla";
            this->tabPage14->UseVisualStyleBackColor = true;
            // 
            // txtNomTFModNomTF
            // 
            this->txtNomTFModNomTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtNomTFModNomTF->Location = System::Drawing::Point(598, 385);
            this->txtNomTFModNomTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNomTFModNomTF->Name = L"txtNomTFModNomTF";
            this->txtNomTFModNomTF->Size = System::Drawing::Size(202, 35);
            this->txtNomTFModNomTF->TabIndex = 71;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(298, 389);
            this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(185, 29);
            this->label37->TabIndex = 70;
            this->label37->Text = L"Nombre Flotilla:";
            // 
            // btnModNomTF
            // 
            this->btnModNomTF->Location = System::Drawing::Point(519, 475);
            this->btnModNomTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModNomTF->Name = L"btnModNomTF";
            this->btnModNomTF->Size = System::Drawing::Size(160, 69);
            this->btnModNomTF->TabIndex = 69;
            this->btnModNomTF->Text = L"Modificar";
            this->btnModNomTF->UseVisualStyleBackColor = true;
            this->btnModNomTF->Click += gcnew System::EventHandler(this, &AdminAgencia::btnModNomTF_Click);
            // 
            // txtCodTFModNomTF
            // 
            this->txtCodTFModNomTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodTFModNomTF->Location = System::Drawing::Point(598, 280);
            this->txtCodTFModNomTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFModNomTF->Name = L"txtCodTFModNomTF";
            this->txtCodTFModNomTF->Size = System::Drawing::Size(202, 35);
            this->txtCodTFModNomTF->TabIndex = 68;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(298, 285);
            this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(176, 29);
            this->label38->TabIndex = 67;
            this->label38->Text = L"Código Flotilla:";
            // 
            // txtCodAgencialModNomTF
            // 
            this->txtCodAgencialModNomTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgencialModNomTF->Location = System::Drawing::Point(598, 178);
            this->txtCodAgencialModNomTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgencialModNomTF->Name = L"txtCodAgencialModNomTF";
            this->txtCodAgencialModNomTF->Size = System::Drawing::Size(202, 35);
            this->txtCodAgencialModNomTF->TabIndex = 66;
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(298, 178);
            this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(191, 29);
            this->label39->TabIndex = 65;
            this->label39->Text = L"Código Agencia:";
            // 
            // txtCodPaisModNomTF
            // 
            this->txtCodPaisModNomTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodPaisModNomTF->Location = System::Drawing::Point(598, 85);
            this->txtCodPaisModNomTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModNomTF->Name = L"txtCodPaisModNomTF";
            this->txtCodPaisModNomTF->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModNomTF->TabIndex = 64;
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
            this->tabPage15->Controls->Add(this->txtPlacaModNumAsientos);
            this->tabPage15->Controls->Add(this->label45);
            this->tabPage15->Controls->Add(this->txtNumAsientosModNumAsientos);
            this->tabPage15->Controls->Add(this->label41);
            this->tabPage15->Controls->Add(this->btnModNumAsientos);
            this->tabPage15->Controls->Add(this->txtCodTFModNumAsientos);
            this->tabPage15->Controls->Add(this->label42);
            this->tabPage15->Controls->Add(this->txtCodAgenciaModNumAsientos);
            this->tabPage15->Controls->Add(this->label43);
            this->tabPage15->Controls->Add(this->txtCodPaisModNumAsientos);
            this->tabPage15->Controls->Add(this->label44);
            this->tabPage15->Location = System::Drawing::Point(4, 32);
            this->tabPage15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage15->Name = L"tabPage15";
            this->tabPage15->Size = System::Drawing::Size(1168, 726);
            this->tabPage15->TabIndex = 4;
            this->tabPage15->Text = L"Número de asientos";
            this->tabPage15->UseVisualStyleBackColor = true;
            this->tabPage15->Click += gcnew System::EventHandler(this, &AdminAgencia::tabPage15_Click);
            // 
            // txtPlacaModNumAsientos
            // 
            this->txtPlacaModNumAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtPlacaModNumAsientos->Location = System::Drawing::Point(630, 309);
            this->txtPlacaModNumAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPlacaModNumAsientos->Name = L"txtPlacaModNumAsientos";
            this->txtPlacaModNumAsientos->Size = System::Drawing::Size(202, 35);
            this->txtPlacaModNumAsientos->TabIndex = 82;
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(330, 314);
            this->label45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(145, 29);
            this->label45->TabIndex = 81;
            this->label45->Text = L"Placa Carro:";
            // 
            // txtNumAsientosModNumAsientos
            // 
            this->txtNumAsientosModNumAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtNumAsientosModNumAsientos->Location = System::Drawing::Point(630, 385);
            this->txtNumAsientosModNumAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtNumAsientosModNumAsientos->Name = L"txtNumAsientosModNumAsientos";
            this->txtNumAsientosModNumAsientos->Size = System::Drawing::Size(202, 35);
            this->txtNumAsientosModNumAsientos->TabIndex = 80;
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(330, 389);
            this->label41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(204, 29);
            this->label41->TabIndex = 79;
            this->label41->Text = L"Número Asientos:";
            // 
            // btnModNumAsientos
            // 
            this->btnModNumAsientos->Location = System::Drawing::Point(550, 475);
            this->btnModNumAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModNumAsientos->Name = L"btnModNumAsientos";
            this->btnModNumAsientos->Size = System::Drawing::Size(160, 69);
            this->btnModNumAsientos->TabIndex = 78;
            this->btnModNumAsientos->Text = L"Modificar";
            this->btnModNumAsientos->UseVisualStyleBackColor = true;
            this->btnModNumAsientos->Click += gcnew System::EventHandler(this, &AdminAgencia::btnModNumAsientos_Click);
            // 
            // txtCodTFModNumAsientos
            // 
            this->txtCodTFModNumAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodTFModNumAsientos->Location = System::Drawing::Point(630, 231);
            this->txtCodTFModNumAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFModNumAsientos->Name = L"txtCodTFModNumAsientos";
            this->txtCodTFModNumAsientos->Size = System::Drawing::Size(202, 35);
            this->txtCodTFModNumAsientos->TabIndex = 77;
            this->txtCodTFModNumAsientos->TextChanged += gcnew System::EventHandler(this, &AdminAgencia::txtCodTFModNumAsientos_TextChanged);
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(330, 235);
            this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(176, 29);
            this->label42->TabIndex = 76;
            this->label42->Text = L"Código Flotilla:";
            // 
            // txtCodAgenciaModNumAsientos
            // 
            this->txtCodAgenciaModNumAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaModNumAsientos->Location = System::Drawing::Point(630, 157);
            this->txtCodAgenciaModNumAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaModNumAsientos->Name = L"txtCodAgenciaModNumAsientos";
            this->txtCodAgenciaModNumAsientos->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaModNumAsientos->TabIndex = 75;
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(330, 157);
            this->label43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(191, 29);
            this->label43->TabIndex = 74;
            this->label43->Text = L"Código Agencia:";
            // 
            // txtCodPaisModNumAsientos
            // 
            this->txtCodPaisModNumAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModNumAsientos->Location = System::Drawing::Point(630, 86);
            this->txtCodPaisModNumAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModNumAsientos->Name = L"txtCodPaisModNumAsientos";
            this->txtCodPaisModNumAsientos->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModNumAsientos->TabIndex = 73;
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
            // tabPage17
            // 
            this->tabPage17->Controls->Add(this->txtPlacaModPrecio);
            this->tabPage17->Controls->Add(this->label51);
            this->tabPage17->Controls->Add(this->txtPrecioModPrecio);
            this->tabPage17->Controls->Add(this->label52);
            this->tabPage17->Controls->Add(this->btnModPrecio);
            this->tabPage17->Controls->Add(this->txtCodTFModPrecio);
            this->tabPage17->Controls->Add(this->label53);
            this->tabPage17->Controls->Add(this->txtCodAgenciaModPrecio);
            this->tabPage17->Controls->Add(this->label54);
            this->tabPage17->Controls->Add(this->txtCodPaisModPrecio);
            this->tabPage17->Controls->Add(this->label55);
            this->tabPage17->Location = System::Drawing::Point(4, 32);
            this->tabPage17->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage17->Name = L"tabPage17";
            this->tabPage17->Size = System::Drawing::Size(1168, 726);
            this->tabPage17->TabIndex = 6;
            this->tabPage17->Text = L"Precio Carro";
            this->tabPage17->UseVisualStyleBackColor = true;
            // 
            // txtPlacaModPrecio
            // 
            this->txtPlacaModPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtPlacaModPrecio->Location = System::Drawing::Point(630, 308);
            this->txtPlacaModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPlacaModPrecio->Name = L"txtPlacaModPrecio";
            this->txtPlacaModPrecio->Size = System::Drawing::Size(202, 35);
            this->txtPlacaModPrecio->TabIndex = 104;
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(330, 312);
            this->label51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(145, 29);
            this->label51->TabIndex = 103;
            this->label51->Text = L"Placa Carro:";
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
            this->label52->Size = System::Drawing::Size(155, 29);
            this->label52->TabIndex = 101;
            this->label52->Text = L"Precio Carro:";
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
            this->btnModPrecio->Click += gcnew System::EventHandler(this, &AdminAgencia::btnModPrecio_Click);
            // 
            // txtCodTFModPrecio
            // 
            this->txtCodTFModPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtCodTFModPrecio->Location = System::Drawing::Point(630, 229);
            this->txtCodTFModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFModPrecio->Name = L"txtCodTFModPrecio";
            this->txtCodTFModPrecio->Size = System::Drawing::Size(202, 35);
            this->txtCodTFModPrecio->TabIndex = 99;
            // 
            // label53
            // 
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->Location = System::Drawing::Point(330, 234);
            this->label53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(176, 29);
            this->label53->TabIndex = 98;
            this->label53->Text = L"Código Flotilla:";
            // 
            // txtCodAgenciaModPrecio
            // 
            this->txtCodAgenciaModPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaModPrecio->Location = System::Drawing::Point(630, 155);
            this->txtCodAgenciaModPrecio->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaModPrecio->Name = L"txtCodAgenciaModPrecio";
            this->txtCodAgenciaModPrecio->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaModPrecio->TabIndex = 97;
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->Location = System::Drawing::Point(330, 155);
            this->label54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(191, 29);
            this->label54->TabIndex = 96;
            this->label54->Text = L"Código Agencia:";
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
            this->tabPage18->Controls->Add(this->label46);
            this->tabPage18->Controls->Add(this->label47);
            this->tabPage18->Controls->Add(this->label48);
            this->tabPage18->Controls->Add(this->label49);
            this->tabPage18->Controls->Add(this->txtPlacaModEstadoCarro);
            this->tabPage18->Controls->Add(this->txtEstCarroModEstadoCarro);
            this->tabPage18->Controls->Add(this->label57);
            this->tabPage18->Controls->Add(this->btnModEstadoCarro);
            this->tabPage18->Controls->Add(this->txtCodTFModEstadoCarro);
            this->tabPage18->Controls->Add(this->txtCodAgenciaModEstadoCarro);
            this->tabPage18->Controls->Add(this->txtCodPaisModEstadoCarro);
            this->tabPage18->Location = System::Drawing::Point(4, 32);
            this->tabPage18->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage18->Name = L"tabPage18";
            this->tabPage18->Size = System::Drawing::Size(1168, 726);
            this->tabPage18->TabIndex = 7;
            this->tabPage18->Text = L"Estado del carro";
            this->tabPage18->UseVisualStyleBackColor = true;
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(330, 312);
            this->label46->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(145, 29);
            this->label46->TabIndex = 119;
            this->label46->Text = L"Placa Carro:";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(330, 234);
            this->label47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(176, 29);
            this->label47->TabIndex = 118;
            this->label47->Text = L"Código Flotilla:";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(330, 155);
            this->label48->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(191, 29);
            this->label48->TabIndex = 117;
            this->label48->Text = L"Código Agencia:";
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(330, 85);
            this->label49->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(151, 29);
            this->label49->TabIndex = 116;
            this->label49->Text = L"Código País:";
            // 
            // txtPlacaModEstadoCarro
            // 
            this->txtPlacaModEstadoCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtPlacaModEstadoCarro->Location = System::Drawing::Point(630, 308);
            this->txtPlacaModEstadoCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPlacaModEstadoCarro->Name = L"txtPlacaModEstadoCarro";
            this->txtPlacaModEstadoCarro->Size = System::Drawing::Size(202, 35);
            this->txtPlacaModEstadoCarro->TabIndex = 115;
            // 
            // txtEstCarroModEstadoCarro
            // 
            this->txtEstCarroModEstadoCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtEstCarroModEstadoCarro->Location = System::Drawing::Point(630, 383);
            this->txtEstCarroModEstadoCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtEstCarroModEstadoCarro->Name = L"txtEstCarroModEstadoCarro";
            this->txtEstCarroModEstadoCarro->Size = System::Drawing::Size(202, 35);
            this->txtEstCarroModEstadoCarro->TabIndex = 113;
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->Location = System::Drawing::Point(330, 388);
            this->label57->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(160, 29);
            this->label57->TabIndex = 112;
            this->label57->Text = L"Estado Carro:";
            // 
            // btnModEstadoCarro
            // 
            this->btnModEstadoCarro->Location = System::Drawing::Point(490, 474);
            this->btnModEstadoCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnModEstadoCarro->Name = L"btnModEstadoCarro";
            this->btnModEstadoCarro->Size = System::Drawing::Size(160, 69);
            this->btnModEstadoCarro->TabIndex = 111;
            this->btnModEstadoCarro->Text = L"Modificar";
            this->btnModEstadoCarro->UseVisualStyleBackColor = true;
            this->btnModEstadoCarro->Click += gcnew System::EventHandler(this, &AdminAgencia::btnModEstadoCarro_Click);
            // 
            // txtCodTFModEstadoCarro
            // 
            this->txtCodTFModEstadoCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodTFModEstadoCarro->Location = System::Drawing::Point(630, 229);
            this->txtCodTFModEstadoCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFModEstadoCarro->Name = L"txtCodTFModEstadoCarro";
            this->txtCodTFModEstadoCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodTFModEstadoCarro->TabIndex = 110;
            // 
            // txtCodAgenciaModEstadoCarro
            // 
            this->txtCodAgenciaModEstadoCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaModEstadoCarro->Location = System::Drawing::Point(630, 155);
            this->txtCodAgenciaModEstadoCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaModEstadoCarro->Name = L"txtCodAgenciaModEstadoCarro";
            this->txtCodAgenciaModEstadoCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaModEstadoCarro->TabIndex = 108;
            // 
            // txtCodPaisModEstadoCarro
            // 
            this->txtCodPaisModEstadoCarro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisModEstadoCarro->Location = System::Drawing::Point(630, 85);
            this->txtCodPaisModEstadoCarro->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisModEstadoCarro->Name = L"txtCodPaisModEstadoCarro";
            this->txtCodPaisModEstadoCarro->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisModEstadoCarro->TabIndex = 106;
            // 
            // tabPage19
            // 
            this->tabPage19->Controls->Add(this->tabControl5);
            this->tabPage19->Location = System::Drawing::Point(4, 32);
            this->tabPage19->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage19->Name = L"tabPage19";
            this->tabPage19->Size = System::Drawing::Size(1267, 769);
            this->tabPage19->TabIndex = 4;
            this->tabPage19->Text = L"Reportes";
            this->tabPage19->UseVisualStyleBackColor = true;
            // 
            // tabControl5
            // 
            this->tabControl5->Controls->Add(this->tabPage20);
            this->tabControl5->Controls->Add(this->tabPage21);
            this->tabControl5->Controls->Add(this->tabPage23);
            this->tabControl5->Controls->Add(this->tabPage24);
            this->tabControl5->Controls->Add(this->tabPage25);
            this->tabControl5->Controls->Add(this->tabPage26);
            this->tabControl5->Controls->Add(this->tabPage27);
            this->tabControl5->Controls->Add(this->tabPage16);
            this->tabControl5->Controls->Add(this->tabPage22);
            this->tabControl5->Location = System::Drawing::Point(0, 5);
            this->tabControl5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabControl5->Name = L"tabControl5";
            this->tabControl5->SelectedIndex = 0;
            this->tabControl5->Size = System::Drawing::Size(1258, 751);
            this->tabControl5->TabIndex = 0;
            // 
            // tabPage20
            // 
            this->tabPage20->Controls->Add(this->txtCodPaisAgencia);
            this->tabPage20->Controls->Add(this->label58);
            this->tabPage20->Controls->Add(this->btnConsultarAgencias);
            this->tabPage20->Controls->Add(this->txtAgencias);
            this->tabPage20->Location = System::Drawing::Point(4, 29);
            this->tabPage20->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage20->Name = L"tabPage20";
            this->tabPage20->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage20->Size = System::Drawing::Size(1250, 718);
            this->tabPage20->TabIndex = 0;
            this->tabPage20->Text = L"Agencias";
            this->tabPage20->UseVisualStyleBackColor = true;
            this->tabPage20->Click += gcnew System::EventHandler(this, &AdminAgencia::tabPage20_Click);
            // 
            // txtCodPaisAgencia
            // 
            this->txtCodPaisAgencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisAgencia->Location = System::Drawing::Point(495, 125);
            this->txtCodPaisAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisAgencia->Name = L"txtCodPaisAgencia";
            this->txtCodPaisAgencia->Size = System::Drawing::Size(289, 40);
            this->txtCodPaisAgencia->TabIndex = 6;
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->Location = System::Drawing::Point(284, 125);
            this->label58->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(188, 33);
            this->label58->TabIndex = 5;
            this->label58->Text = L"Código País: ";
            this->label58->Click += gcnew System::EventHandler(this, &AdminAgencia::label58_Click);
            // 
            // btnConsultarAgencias
            // 
            this->btnConsultarAgencias->Location = System::Drawing::Point(495, 223);
            this->btnConsultarAgencias->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarAgencias->Name = L"btnConsultarAgencias";
            this->btnConsultarAgencias->Size = System::Drawing::Size(289, 53);
            this->btnConsultarAgencias->TabIndex = 1;
            this->btnConsultarAgencias->Text = L"Consultar";
            this->btnConsultarAgencias->UseVisualStyleBackColor = true;
            this->btnConsultarAgencias->Click += gcnew System::EventHandler(this, &AdminAgencia::btnConsultarAgencias_Click);
            // 
            // txtAgencias
            // 
            this->txtAgencias->Location = System::Drawing::Point(161, 300);
            this->txtAgencias->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtAgencias->Name = L"txtAgencias";
            this->txtAgencias->ReadOnly = true;
            this->txtAgencias->Size = System::Drawing::Size(830, 342);
            this->txtAgencias->TabIndex = 0;
            this->txtAgencias->Text = L"";
            // 
            // tabPage21
            // 
            this->tabPage21->Controls->Add(this->btnConsultarTF);
            this->tabPage21->Controls->Add(this->txtTF);
            this->tabPage21->Controls->Add(this->txtCodHotelConsultarTF);
            this->tabPage21->Controls->Add(this->label61);
            this->tabPage21->Controls->Add(this->txtCodPaisConsultarTF);
            this->tabPage21->Controls->Add(this->label62);
            this->tabPage21->Location = System::Drawing::Point(4, 29);
            this->tabPage21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage21->Name = L"tabPage21";
            this->tabPage21->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage21->Size = System::Drawing::Size(1250, 718);
            this->tabPage21->TabIndex = 1;
            this->tabPage21->Text = L"Flotillas";
            this->tabPage21->UseVisualStyleBackColor = true;
            // 
            // btnConsultarTF
            // 
            this->btnConsultarTF->Location = System::Drawing::Point(530, 218);
            this->btnConsultarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarTF->Name = L"btnConsultarTF";
            this->btnConsultarTF->Size = System::Drawing::Size(112, 46);
            this->btnConsultarTF->TabIndex = 114;
            this->btnConsultarTF->Text = L"Consultar";
            this->btnConsultarTF->UseVisualStyleBackColor = true;
            this->btnConsultarTF->Click += gcnew System::EventHandler(this, &AdminAgencia::btnConsultarTF_Click);
            // 
            // txtTF
            // 
            this->txtTF->Location = System::Drawing::Point(177, 323);
            this->txtTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtTF->Name = L"txtTF";
            this->txtTF->ReadOnly = true;
            this->txtTF->Size = System::Drawing::Size(830, 261);
            this->txtTF->TabIndex = 113;
            this->txtTF->Text = L"";
            // 
            // txtCodHotelConsultarTF
            // 
            this->txtCodHotelConsultarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodHotelConsultarTF->Location = System::Drawing::Point(610, 128);
            this->txtCodHotelConsultarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodHotelConsultarTF->Name = L"txtCodHotelConsultarTF";
            this->txtCodHotelConsultarTF->Size = System::Drawing::Size(202, 35);
            this->txtCodHotelConsultarTF->TabIndex = 112;
            this->txtCodHotelConsultarTF->TextChanged += gcnew System::EventHandler(this, &AdminAgencia::txtCodHotelConsultarTF_TextChanged);
            // 
            // label61
            // 
            this->label61->AutoSize = true;
            this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label61->Location = System::Drawing::Point(310, 128);
            this->label61->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(191, 29);
            this->label61->TabIndex = 111;
            this->label61->Text = L"Código Agencia:";
            // 
            // txtCodPaisConsultarTF
            // 
            this->txtCodPaisConsultarTF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisConsultarTF->Location = System::Drawing::Point(610, 57);
            this->txtCodPaisConsultarTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisConsultarTF->Name = L"txtCodPaisConsultarTF";
            this->txtCodPaisConsultarTF->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisConsultarTF->TabIndex = 110;
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
            // tabPage23
            // 
            this->tabPage23->Controls->Add(this->btnConsultarCantCarrosAgen);
            this->tabPage23->Controls->Add(this->txtCantCarrosAgen);
            this->tabPage23->Controls->Add(this->txtCodAgenciaConsultarCantCarrosAgen);
            this->tabPage23->Controls->Add(this->label66);
            this->tabPage23->Controls->Add(this->txtCodPaisConsultarCantCarrosAgen);
            this->tabPage23->Controls->Add(this->label67);
            this->tabPage23->Location = System::Drawing::Point(4, 29);
            this->tabPage23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage23->Name = L"tabPage23";
            this->tabPage23->Size = System::Drawing::Size(1250, 718);
            this->tabPage23->TabIndex = 3;
            this->tabPage23->Text = L"Cantidad Carros Agencia";
            this->tabPage23->UseVisualStyleBackColor = true;
            // 
            // btnConsultarCantCarrosAgen
            // 
            this->btnConsultarCantCarrosAgen->Location = System::Drawing::Point(520, 211);
            this->btnConsultarCantCarrosAgen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarCantCarrosAgen->Name = L"btnConsultarCantCarrosAgen";
            this->btnConsultarCantCarrosAgen->Size = System::Drawing::Size(112, 46);
            this->btnConsultarCantCarrosAgen->TabIndex = 120;
            this->btnConsultarCantCarrosAgen->Text = L"Consultar";
            this->btnConsultarCantCarrosAgen->UseVisualStyleBackColor = true;
            this->btnConsultarCantCarrosAgen->Click += gcnew System::EventHandler(this, &AdminAgencia::btnConsultarCantCarrosAgen_Click);
            // 
            // txtCantCarrosAgen
            // 
            this->txtCantCarrosAgen->Location = System::Drawing::Point(168, 315);
            this->txtCantCarrosAgen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCantCarrosAgen->Name = L"txtCantCarrosAgen";
            this->txtCantCarrosAgen->ReadOnly = true;
            this->txtCantCarrosAgen->Size = System::Drawing::Size(830, 261);
            this->txtCantCarrosAgen->TabIndex = 119;
            this->txtCantCarrosAgen->Text = L"";
            // 
            // txtCodAgenciaConsultarCantCarrosAgen
            // 
            this->txtCodAgenciaConsultarCantCarrosAgen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaConsultarCantCarrosAgen->Location = System::Drawing::Point(602, 120);
            this->txtCodAgenciaConsultarCantCarrosAgen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaConsultarCantCarrosAgen->Name = L"txtCodAgenciaConsultarCantCarrosAgen";
            this->txtCodAgenciaConsultarCantCarrosAgen->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaConsultarCantCarrosAgen->TabIndex = 118;
            // 
            // label66
            // 
            this->label66->AutoSize = true;
            this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label66->Location = System::Drawing::Point(302, 120);
            this->label66->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(191, 29);
            this->label66->TabIndex = 117;
            this->label66->Text = L"Código Agencia:";
            // 
            // txtCodPaisConsultarCantCarrosAgen
            // 
            this->txtCodPaisConsultarCantCarrosAgen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisConsultarCantCarrosAgen->Location = System::Drawing::Point(602, 49);
            this->txtCodPaisConsultarCantCarrosAgen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisConsultarCantCarrosAgen->Name = L"txtCodPaisConsultarCantCarrosAgen";
            this->txtCodPaisConsultarCantCarrosAgen->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisConsultarCantCarrosAgen->TabIndex = 116;
            this->txtCodPaisConsultarCantCarrosAgen->TextChanged += gcnew System::EventHandler(this, &AdminAgencia::txtCodPaisConsultarCantCarrosAgen_TextChanged);
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
            this->tabPage24->Controls->Add(this->txtPlacaConsultarCantAsientos);
            this->tabPage24->Controls->Add(this->label50);
            this->tabPage24->Controls->Add(this->btnConsultarCantAsientos);
            this->tabPage24->Controls->Add(this->txtConsultarCantAsientos);
            this->tabPage24->Controls->Add(this->txtCodTFConsultarCantAsientos);
            this->tabPage24->Controls->Add(this->label68);
            this->tabPage24->Controls->Add(this->txtCodAgenciaConsultarCantAsientos);
            this->tabPage24->Controls->Add(this->label69);
            this->tabPage24->Controls->Add(this->txtCodPaisConsultarCantAsientos);
            this->tabPage24->Controls->Add(this->label70);
            this->tabPage24->Location = System::Drawing::Point(4, 29);
            this->tabPage24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage24->Name = L"tabPage24";
            this->tabPage24->Size = System::Drawing::Size(1250, 718);
            this->tabPage24->TabIndex = 4;
            this->tabPage24->Text = L"Cantidad Asientos Carro";
            this->tabPage24->UseVisualStyleBackColor = true;
            // 
            // txtPlacaConsultarCantAsientos
            // 
            this->txtPlacaConsultarCantAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtPlacaConsultarCantAsientos->Location = System::Drawing::Point(622, 271);
            this->txtPlacaConsultarCantAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtPlacaConsultarCantAsientos->Name = L"txtPlacaConsultarCantAsientos";
            this->txtPlacaConsultarCantAsientos->Size = System::Drawing::Size(202, 35);
            this->txtPlacaConsultarCantAsientos->TabIndex = 128;
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->Location = System::Drawing::Point(322, 275);
            this->label50->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(145, 29);
            this->label50->TabIndex = 127;
            this->label50->Text = L"Placa Carro:";
            // 
            // btnConsultarCantAsientos
            // 
            this->btnConsultarCantAsientos->Location = System::Drawing::Point(516, 346);
            this->btnConsultarCantAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarCantAsientos->Name = L"btnConsultarCantAsientos";
            this->btnConsultarCantAsientos->Size = System::Drawing::Size(112, 46);
            this->btnConsultarCantAsientos->TabIndex = 126;
            this->btnConsultarCantAsientos->Text = L"Consultar";
            this->btnConsultarCantAsientos->UseVisualStyleBackColor = true;
            this->btnConsultarCantAsientos->Click += gcnew System::EventHandler(this, &AdminAgencia::btnConsultarCantAsientos_Click);
            // 
            // txtConsultarCantAsientos
            // 
            this->txtConsultarCantAsientos->Location = System::Drawing::Point(171, 415);
            this->txtConsultarCantAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtConsultarCantAsientos->Name = L"txtConsultarCantAsientos";
            this->txtConsultarCantAsientos->ReadOnly = true;
            this->txtConsultarCantAsientos->Size = System::Drawing::Size(830, 270);
            this->txtConsultarCantAsientos->TabIndex = 125;
            this->txtConsultarCantAsientos->Text = L"";
            // 
            // txtCodTFConsultarCantAsientos
            // 
            this->txtCodTFConsultarCantAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodTFConsultarCantAsientos->Location = System::Drawing::Point(622, 192);
            this->txtCodTFConsultarCantAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodTFConsultarCantAsientos->Name = L"txtCodTFConsultarCantAsientos";
            this->txtCodTFConsultarCantAsientos->Size = System::Drawing::Size(202, 35);
            this->txtCodTFConsultarCantAsientos->TabIndex = 124;
            // 
            // label68
            // 
            this->label68->AutoSize = true;
            this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label68->Location = System::Drawing::Point(322, 197);
            this->label68->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(176, 29);
            this->label68->TabIndex = 123;
            this->label68->Text = L"Código Flotilla:";
            // 
            // txtCodAgenciaConsultarCantAsientos
            // 
            this->txtCodAgenciaConsultarCantAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodAgenciaConsultarCantAsientos->Location = System::Drawing::Point(622, 118);
            this->txtCodAgenciaConsultarCantAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodAgenciaConsultarCantAsientos->Name = L"txtCodAgenciaConsultarCantAsientos";
            this->txtCodAgenciaConsultarCantAsientos->Size = System::Drawing::Size(202, 35);
            this->txtCodAgenciaConsultarCantAsientos->TabIndex = 122;
            this->txtCodAgenciaConsultarCantAsientos->TextChanged += gcnew System::EventHandler(this, &AdminAgencia::txtCodHotelConsultarCantHabs_TextChanged);
            // 
            // label69
            // 
            this->label69->AutoSize = true;
            this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label69->Location = System::Drawing::Point(322, 118);
            this->label69->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(191, 29);
            this->label69->TabIndex = 121;
            this->label69->Text = L"Código Agencia:";
            // 
            // txtCodPaisConsultarCantAsientos
            // 
            this->txtCodPaisConsultarCantAsientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->txtCodPaisConsultarCantAsientos->Location = System::Drawing::Point(622, 48);
            this->txtCodPaisConsultarCantAsientos->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtCodPaisConsultarCantAsientos->Name = L"txtCodPaisConsultarCantAsientos";
            this->txtCodPaisConsultarCantAsientos->Size = System::Drawing::Size(202, 35);
            this->txtCodPaisConsultarCantAsientos->TabIndex = 120;
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
            this->tabPage25->Controls->Add(this->btnConsultarUltAgencia);
            this->tabPage25->Controls->Add(this->txtUltAgencia);
            this->tabPage25->Location = System::Drawing::Point(4, 29);
            this->tabPage25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage25->Name = L"tabPage25";
            this->tabPage25->Size = System::Drawing::Size(1250, 718);
            this->tabPage25->TabIndex = 5;
            this->tabPage25->Text = L"Última Agencia insertada";
            this->tabPage25->UseVisualStyleBackColor = true;
            // 
            // btnConsultarUltAgencia
            // 
            this->btnConsultarUltAgencia->Location = System::Drawing::Point(513, 71);
            this->btnConsultarUltAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarUltAgencia->Name = L"btnConsultarUltAgencia";
            this->btnConsultarUltAgencia->Size = System::Drawing::Size(112, 35);
            this->btnConsultarUltAgencia->TabIndex = 3;
            this->btnConsultarUltAgencia->Text = L"Consultar";
            this->btnConsultarUltAgencia->UseVisualStyleBackColor = true;
            this->btnConsultarUltAgencia->Click += gcnew System::EventHandler(this, &AdminAgencia::btnConsultarUltAgencia_Click);
            // 
            // txtUltAgencia
            // 
            this->txtUltAgencia->Location = System::Drawing::Point(148, 211);
            this->txtUltAgencia->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtUltAgencia->Name = L"txtUltAgencia";
            this->txtUltAgencia->Size = System::Drawing::Size(830, 342);
            this->txtUltAgencia->TabIndex = 2;
            this->txtUltAgencia->Text = L"";
            // 
            // tabPage26
            // 
            this->tabPage26->Controls->Add(this->btnUltTF);
            this->tabPage26->Controls->Add(this->txtUltTF);
            this->tabPage26->Location = System::Drawing::Point(4, 29);
            this->tabPage26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage26->Name = L"tabPage26";
            this->tabPage26->Size = System::Drawing::Size(1250, 718);
            this->tabPage26->TabIndex = 6;
            this->tabPage26->Text = L"Última Flotilla insertada";
            this->tabPage26->UseVisualStyleBackColor = true;
            // 
            // btnUltTF
            // 
            this->btnUltTF->Location = System::Drawing::Point(532, 72);
            this->btnUltTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnUltTF->Name = L"btnUltTF";
            this->btnUltTF->Size = System::Drawing::Size(112, 35);
            this->btnUltTF->TabIndex = 3;
            this->btnUltTF->Text = L"Consultar";
            this->btnUltTF->UseVisualStyleBackColor = true;
            this->btnUltTF->Click += gcnew System::EventHandler(this, &AdminAgencia::btnUltTF_Click);
            // 
            // txtUltTF
            // 
            this->txtUltTF->Location = System::Drawing::Point(168, 212);
            this->txtUltTF->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtUltTF->Name = L"txtUltTF";
            this->txtUltTF->ReadOnly = true;
            this->txtUltTF->Size = System::Drawing::Size(830, 342);
            this->txtUltTF->TabIndex = 2;
            this->txtUltTF->Text = L"";
            // 
            // tabPage27
            // 
            this->tabPage27->Controls->Add(this->btnUltHab);
            this->tabPage27->Controls->Add(this->txtUltHab);
            this->tabPage27->Location = System::Drawing::Point(4, 29);
            this->tabPage27->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage27->Name = L"tabPage27";
            this->tabPage27->Size = System::Drawing::Size(1250, 718);
            this->tabPage27->TabIndex = 7;
            this->tabPage27->Text = L"Último Carro insertado";
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
            this->btnUltHab->Click += gcnew System::EventHandler(this, &AdminAgencia::btnUltHab_Click);
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
            // tabPage16
            // 
            this->tabPage16->Controls->Add(this->label59);
            this->tabPage16->Controls->Add(this->textBox2);
            this->tabPage16->Controls->Add(this->label56);
            this->tabPage16->Controls->Add(this->textBox1);
            this->tabPage16->Controls->Add(this->btnConsultarReservaciones);
            this->tabPage16->Controls->Add(this->txtReservaciones);
            this->tabPage16->Location = System::Drawing::Point(4, 29);
            this->tabPage16->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage16->Name = L"tabPage16";
            this->tabPage16->Size = System::Drawing::Size(1250, 718);
            this->tabPage16->TabIndex = 8;
            this->tabPage16->Text = L"Reservaciones";
            this->tabPage16->UseVisualStyleBackColor = true;
            // 
            // label59
            // 
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->Location = System::Drawing::Point(289, 141);
            this->label59->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(191, 29);
            this->label59->TabIndex = 124;
            this->label59->Text = L"Código Agencia:";
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(506, 135);
            this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(202, 35);
            this->textBox2->TabIndex = 123;
            // 
            // label56
            // 
            this->label56->AutoSize = true;
            this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->Location = System::Drawing::Point(289, 72);
            this->label56->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(151, 29);
            this->label56->TabIndex = 122;
            this->label56->Text = L"Código País:";
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(506, 72);
            this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(202, 35);
            this->textBox1->TabIndex = 121;
            // 
            // btnConsultarReservaciones
            // 
            this->btnConsultarReservaciones->Location = System::Drawing::Point(506, 233);
            this->btnConsultarReservaciones->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->btnConsultarReservaciones->Name = L"btnConsultarReservaciones";
            this->btnConsultarReservaciones->Size = System::Drawing::Size(202, 35);
            this->btnConsultarReservaciones->TabIndex = 5;
            this->btnConsultarReservaciones->Text = L"Consultar";
            this->btnConsultarReservaciones->UseVisualStyleBackColor = true;
            this->btnConsultarReservaciones->Click += gcnew System::EventHandler(this, &AdminAgencia::btnConsultarReservaciones_Click);
            // 
            // txtReservaciones
            // 
            this->txtReservaciones->Location = System::Drawing::Point(148, 287);
            this->txtReservaciones->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->txtReservaciones->Name = L"txtReservaciones";
            this->txtReservaciones->ReadOnly = true;
            this->txtReservaciones->Size = System::Drawing::Size(830, 342);
            this->txtReservaciones->TabIndex = 4;
            this->txtReservaciones->Text = L"";
            // 
            // tabPage22
            // 
            this->tabPage22->Controls->Add(this->FacturarA);
            this->tabPage22->Controls->Add(this->mostrarFacturacion);
            this->tabPage22->Location = System::Drawing::Point(4, 29);
            this->tabPage22->Name = L"tabPage22";
            this->tabPage22->Size = System::Drawing::Size(1250, 718);
            this->tabPage22->TabIndex = 9;
            this->tabPage22->Text = L"Facturar";
            this->tabPage22->UseVisualStyleBackColor = true;
            // 
            // FacturarA
            // 
            this->FacturarA->Location = System::Drawing::Point(511, 118);
            this->FacturarA->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->FacturarA->Name = L"FacturarA";
            this->FacturarA->Size = System::Drawing::Size(170, 61);
            this->FacturarA->TabIndex = 136;
            this->FacturarA->Text = L"Facturar";
            this->FacturarA->UseVisualStyleBackColor = true;
            this->FacturarA->Click += gcnew System::EventHandler(this, &AdminAgencia::FacturarA_Click);
            // 
            // mostrarFacturacion
            // 
            this->mostrarFacturacion->Location = System::Drawing::Point(210, 247);
            this->mostrarFacturacion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->mostrarFacturacion->Name = L"mostrarFacturacion";
            this->mostrarFacturacion->ReadOnly = true;
            this->mostrarFacturacion->Size = System::Drawing::Size(830, 353);
            this->mostrarFacturacion->TabIndex = 135;
            this->mostrarFacturacion->Text = L"";
            // 
            // AdminAgencia
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1275, 811);
            this->Controls->Add(this->tabControl1);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"AdminAgencia";
            this->Text = L"Administrador Agencia";
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
            this->tabPage23->ResumeLayout(false);
            this->tabPage23->PerformLayout();
            this->tabPage24->ResumeLayout(false);
            this->tabPage24->PerformLayout();
            this->tabPage25->ResumeLayout(false);
            this->tabPage26->ResumeLayout(false);
            this->tabPage27->ResumeLayout(false);
            this->tabPage16->ResumeLayout(false);
            this->tabPage16->PerformLayout();
            this->tabPage22->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btnInsertarHabitacion_Click(System::Object^ sender, System::EventArgs^ e) {


        string mensaje;

        int idPais = System::Convert::ToInt32(this->txtCodPaisInsertarCarro->Text);

        int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaInsertarCarro->Text);

        int idFlotilla = System::Convert::ToInt32(this->txtCodTFInsertarCarro->Text);

        int placa = System::Convert::ToInt32(this->txtPlacaInsertarCarro->Text);

        String^ model = this->txtModeloInsertarCarro->Text;

        string modelo = msclr::interop::marshal_as<string >(model);

        int numAsientos = System::Convert::ToInt32(this->txtNumAsientosInsertarCarro->Text);

        int annio = System::Convert::ToInt32(this->txtAgnoInsertarCarro->Text);

        int precio= System::Convert::ToInt32(this->txtPrecioInsertarCarro->Text);
         
        String^ estados = this->txtEstadoCarroInsertarCarro->Text;

        string estado = msclr::interop::marshal_as<string >(estados);


        mensaje = controlA.agregarCarro(idPais, idAgencia,idFlotilla, placa, modelo, numAsientos,annio,precio,estado);


        String^ resultado = gcnew String(mensaje.c_str());
        MessageBox::Show(resultado);

    }
    private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void txtCodHotelConsultarCantHabs_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void btnEliminarAgencia_Click(System::Object^ sender, System::EventArgs^ e) {
        string mensaje;

        int idPais = System::Convert::ToInt32(this->txtCodPaisEliminarAgencia->Text);

        int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaEliminarAgencia->Text);

        mensaje = controlA.eliminarAgencia(idPais, idAgencia);


        String^ resultado = gcnew String(mensaje.c_str());
        MessageBox::Show(resultado);
    }
private: System::Void txtCodAgenciaEliminarAgencia_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEliminarTF_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisEliminarTF->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaEliminarTF->Text);

    int idFlotilla= System::Convert::ToInt32(this->txtCodTFEliminarTF->Text);

    mensaje = controlA.eliminarFlotilla(idPais, idAgencia, idFlotilla);


    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);

    
}
private: System::Void txtCodTFEliminarTF_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnInsertarAgencia_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisInsertarAgencia->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaInsertarAgencia->Text);

    String^ nombre = this->txtNomAgenciaInsertarAgencia->Text;

    string nom = msclr::interop::marshal_as<string >(nombre);

    int numCarros= System::Convert::ToInt32(this->txtCantCarrosInsertarAgencia->Text);

    mensaje = controlA.agregarAgencia(idPais, idAgencia, nom, numCarros);


    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}
private: System::Void btnInsertarTF_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisInsertarTF->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaInsertarTF->Text);

    int idFlotilla= System::Convert::ToInt32(this->txtCodTFInsertarTF->Text);

    String^ nombre = this->txtNombreTFInsertarTF->Text;

    string nom = msclr::interop::marshal_as<string >(nombre);

    int numCarros = System::Convert::ToInt32(this->txtCantHabsInsertarPiso->Text);

    mensaje = controlA.agregarFlotilla(idPais, idAgencia, idFlotilla, nom, numCarros);


    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}
private: System::Void txtModeloInsertarCarro_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnModNumCarrosAgen_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisModNumCarrosAgen->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaModNumCarrosAgen->Text);

    int numCarros = System::Convert::ToInt32(this->txtNumCarrosModNumCarrosAgen->Text);

    mensaje = controlA.modificarAgenciasNumCarros(idPais, idAgencia, numCarros);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);

}
private: System::Void btnModNomAgencia_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisModNomAgencia->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaModNomAgencia->Text);

    String^ nombre = this->txtNomAgenciaModNomAgencia->Text;

    string nom = msclr::interop::marshal_as<string >(nombre);

    mensaje = controlA.modificarAgenciasNombre(idPais, idAgencia, nom);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}
private: System::Void btnModCantCarrosTF_Click(System::Object^ sender, System::EventArgs^ e) {


    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisModCantCarrosTF->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaModCantCarrosTF->Text);

    int idFlotilla = System::Convert::ToInt32(this->txtCodTFModCantCarrosTF->Text);

    int numCarros = System::Convert::ToInt32(this->txtCantCarrosTFModCantCarrosTF->Text);

    

    mensaje = controlA.modificarFlotillasNumCarros(idPais, idAgencia, idFlotilla, numCarros);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);     
}
private: System::Void btnModNomTF_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisModNomTF->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgencialModNomTF->Text);

    int idFlotilla = System::Convert::ToInt32(this->txtCodTFModNomTF->Text);

    String^ nombre = this->txtNomTFModNomTF->Text;

    string nom = msclr::interop::marshal_as<string >(nombre);



    mensaje = controlA.modificarFlotillasNombre(idPais, idAgencia, idFlotilla, nom);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}
private: System::Void btnModNumAsientos_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisModNumAsientos->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaModNumAsientos->Text);

    int idFlota = System::Convert::ToInt32(this->txtCodTFModNumAsientos->Text);

    int placa = System::Convert::ToInt32(this->txtPlacaModNumAsientos->Text);

    int numAsientos = System::Convert::ToInt32(this->txtNumAsientosModNumAsientos->Text);


    mensaje = controlA.modificarCarrosNumAsientos(idPais, idAgencia, idFlota, placa, numAsientos);
    

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}



private: System::Void txtCodTFModNumAsientos_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnModPrecio_Click(System::Object^ sender, System::EventArgs^ e) {
    

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisModPrecio->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaModPrecio->Text);

    int idFlota = System::Convert::ToInt32(this->txtCodTFModPrecio->Text);

    int placa = System::Convert::ToInt32(this->txtPlacaModPrecio->Text);

    int precio = System::Convert::ToInt32(this->txtPrecioModPrecio->Text);


    mensaje = controlA.modificarCarrosNumAsientos(idPais, idAgencia, idFlota, placa, precio);


    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
}
private: System::Void btnModEstadoCarro_Click(System::Object^ sender, System::EventArgs^ e) {
    

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisModEstadoCarro->Text);

    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaModEstadoCarro->Text);

    int idFlota = System::Convert::ToInt32(this->txtCodTFModEstadoCarro->Text);

    int placa = System::Convert::ToInt32(this->txtPlacaModEstadoCarro->Text);

    String^ estados = this->txtEstCarroModEstadoCarro->Text;

    string estado = msclr::interop::marshal_as<string >(estados);
    mensaje = controlA.modificarCarrosEstado(idPais, idAgencia, idFlota, placa,estado);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);

}
private: System::Void label56_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label58_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnConsultarAgencias_Click(System::Object^ sender, System::EventArgs^ e) {
    

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisAgencia->Text);
    mensaje = controlA.consultarAgencias(idPais);


    String^ resultado = gcnew String(mensaje.c_str());
    this->txtAgencias->Text = resultado;

}
private: System::Void btnConsultarTF_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisConsultarTF->Text);
    int idAgencia = System::Convert::ToInt32(this->txtCodHotelConsultarTF ->Text);
    mensaje = controlA.consultarFlotillas(idPais, idAgencia);

    String^ resultado = gcnew String(mensaje.c_str());
    this->txtTF->Text = resultado;
}
private: System::Void txtCodHotelConsultarTF_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnConsultarCantCarrosAgen_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisConsultarCantCarrosAgen->Text);
    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaConsultarCantCarrosAgen->Text);
    mensaje = controlA.consultarCantidadCarrosAgencia(idPais, idAgencia);

    String^ resultado = gcnew String(mensaje.c_str());
    this->txtCantCarrosAgen->Text = resultado;

}
private: System::Void txtCodPaisConsultarCantCarrosAgen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnConsultarCantAsientos_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    int idPais = System::Convert::ToInt32(this->txtCodPaisConsultarCantAsientos->Text);
    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaConsultarCantAsientos->Text);
    int idFlota = System::Convert::ToInt32(this->txtCodTFConsultarCantAsientos->Text);
    int placa = System::Convert::ToInt32(this->txtPlacaConsultarCantAsientos->Text);
    mensaje = controlA.consultarAsientosCarro(idPais, idAgencia, idFlota, placa);


    String^ resultado = gcnew String(mensaje.c_str());
    this->txtConsultarCantAsientos->Text = resultado;
}
private: System::Void btnConsultarUltAgencia_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    mensaje = controlA.consultarUltimaAgencia();

    String^ resultado = gcnew String(mensaje.c_str());
    this->txtUltAgencia->Text = resultado;
}
private: System::Void btnUltTF_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    mensaje = controlA.consultarUltimaFlota();
    String^ resultado = gcnew String(mensaje.c_str());
    this->txtUltTF->Text = resultado;
}
private: System::Void btnUltHab_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    mensaje = controlA.consultarUltimoCarro();
    String^ resultado = gcnew String(mensaje.c_str());
    this->txtUltHab->Text = resultado;
}
private: System::Void btnConsultarReservaciones_Click(System::Object^ sender, System::EventArgs^ e) {
    
    string mensaje;

    int idPais = System::Convert::ToInt32(this->textBox1->Text);
    int idAgencia = System::Convert::ToInt32(this->textBox2->Text);
    mensaje = controlA.consultarReservacionesCarros(idPais, idAgencia);

    String^ resultado = gcnew String(mensaje.c_str());
    this->txtReservaciones->Text = resultado;
}
private: System::Void tabPage20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FacturarA_Click(System::Object^ sender, System::EventArgs^ e) {

    string mensaje;

    mensaje = controlA.facturarAgencias();

    String^ resultado = gcnew String(mensaje.c_str());
    this->mostrarFacturacion->Text = resultado;
}
private: System::Void btnEliminarCarro_Click(System::Object^ sender, System::EventArgs^ e) {
    string mensaje;
    int idPais = System::Convert::ToInt32(this->txtCodPaisEliminarCarro->Text);
    int idAgencia = System::Convert::ToInt32(this->txtCodAgenciaEliminarCarro->Text);
    int idFlota = System::Convert::ToInt32(this->txtCodTFEliminarCarro->Text);
    int placa = System::Convert::ToInt32(this->txtPlacaEliminarCarro->Text);
    
    mensaje = controlA.borrarCarros(idPais, idAgencia, idFlota, placa);

    String^ resultado = gcnew String(mensaje.c_str());
    MessageBox::Show(resultado);
        
 
}
};
}

