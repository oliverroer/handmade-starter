#include <windows.h>

int CALLBACK
WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow
)
{
    HWND    ownerWindowHandle = 0;
    LPCTSTR message = "This is Handmade Starter.";
    LPCTSTR title = "Handmade Starter";
    UINT    contents = MB_OK|MB_ICONINFORMATION;

    MessageBox(
        ownerWindowHandle,
        message,
        title,
        contents
    );

    return(0);
}
