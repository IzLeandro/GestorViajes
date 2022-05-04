#include "ventanaPagos.h"

#include <array>
using namespace std;

using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(cli::array<String^>^args) {

	auto arr = gcnew cli::array<String^>(42);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto3Pagos::ventanaPagos form;
	Application::Run(% form);
}
