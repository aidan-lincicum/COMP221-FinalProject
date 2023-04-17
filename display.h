#include <gtkmm/drawingarea.h>

class Display : public Gtk::DrawingArea {
    public:
        Display();
        virtual ~Display();
    
    protected:
        bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
};