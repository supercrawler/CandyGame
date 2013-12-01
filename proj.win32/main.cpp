#include "main.h"
#include "AppDelegate.h"
#include "CCEGLView.h"
#include "GameDefine.h"

USING_NS_CC;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance
    AppDelegate app;
    EGLView eglView;
    eglView.init("CandyGame", kWith, kHeight, 0.8f);
    //eglView.init("TestCPP", 852, 1136);
    return Application::getInstance()->run();
}
