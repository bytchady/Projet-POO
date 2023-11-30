#include "mainmenu.h"

using namespace ProjectPOO;

void WinMain() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew mainmenu());
}