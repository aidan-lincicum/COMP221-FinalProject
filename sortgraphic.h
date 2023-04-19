#include <gtkmm/drawingarea.h>
#include <cairomm/context.h>
#include <array>
#include <iostream>

class SortGraphic : public Gtk::DrawingArea {
    public:
        SortGraphic();
        virtual ~SortGraphic();
    
    protected:
        bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
};