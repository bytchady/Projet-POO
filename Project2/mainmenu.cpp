#include "mainmenu.h"

using namespace ProjetPOO;

void WinMain() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm());
}