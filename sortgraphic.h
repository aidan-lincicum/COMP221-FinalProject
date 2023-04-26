#include <gtkmm/drawingarea.h>
#include <cairomm/context.h>
#include <array>
#include <iostream>

class SortGraphic : public Gtk::DrawingArea {
    public:
        SortGraphic();
        virtual ~SortGraphic();
        void setValueArray(int * arr, int arrSize);
    
    protected:
        bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
        int *values;
        int valuesSize;
};