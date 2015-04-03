#include "UserInterface.h" //the header name for your form

using namespace Team8Boggle; //the project name in your header file

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew UserInterface());
	return 0;
}