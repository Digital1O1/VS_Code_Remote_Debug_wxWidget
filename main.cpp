// Reference link : https://wiki.wxwidgets.org/Hello_World
// For compilers that don't support precompilation, include "wx/wx.h"
// #include "wx/wxprec.h"
#include "wx-3.1/wx/wxprec.h"
#ifndef WX_PRECOMP
// #include "wx/wx.h"
#include "wx-3.1/wx/wx.h"
#endif

#include "HelloWorldApp.h"

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d \r\n", i);
    }

    printf("Hello world\r\n");

    return 0;
}

// IMPLEMENT_APP(HelloWorldApp)

// // This is executed upon startup, like 'main()' in non-wxWidgets programs.
// bool HelloWorldApp::OnInit()
// {
//     wxFrame *frame = new wxFrame((wxFrame *)NULL, -1, _T("Hello wxWidgets World"));
//     frame->CreateStatusBar();
//     frame->SetStatusText(_T("Hello World"));
//     frame->Show(true);
//     SetTopWindow(frame);
//     return true;
// }