#include <wx/wx.h>

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        wxFrame *frame = new wxFrame(NULL, wxID_ANY, "Hello, wxWidgets");
        wxStaticText *text = new wxStaticText(frame, wxID_ANY, "Hello, World!", wxPoint(10, 10));
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
