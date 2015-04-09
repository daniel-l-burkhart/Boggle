#include "UserInterface.h" //the header name for your form

using namespace Team8Boggle;

/// <summary>
/// Mains the specified arguments.
/// </summary>
/// <param name="args">The arguments.</param>
/// <returns></returns>
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew UserInterface());
	return 0;
}