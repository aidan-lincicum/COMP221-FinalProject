#include "sortgraphic.h"

SortGraphic::SortGraphic() {
    set_size_request(400, 400);
    set_vexpand(true);
    set_hexpand(true);
}

SortGraphic::~SortGraphic() {

}

bool SortGraphic::on_draw(const Cairo::RefPtr<Cairo::Context>& cr) {
    int values[]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200};
    Gtk::Allocation allocation = get_allocation();
    const int width = allocation.get_width();
    const int height = allocation.get_height();

    int numValues = sizeof(values) / sizeof(values[0]);
    int spacing = width / numValues;
    int padding = spacing / 2;

    int max = -1;
    for(int i = 0; i < numValues; i++) {
        if (max < values[i]) {
            max = values[i];
        }
    }

    cr -> set_line_width(padding);
    cr -> set_source_rgb(0.8,0.0,0.0);

    for(int i = 0; i < numValues; i++) {
        cr -> move_to(spacing * i + padding, height);
        cr -> line_to(spacing * i + padding, height - (((double) values[i] / (double) max) * height));
    }

    cr -> stroke();

    return true;
}