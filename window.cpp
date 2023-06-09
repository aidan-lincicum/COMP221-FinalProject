#include "window.h"

Window::Window() : bogosort(values, sizeValues){
    //Setup window
    set_title("Worst Sorting Algorithms");
    set_border_width(10);
    m_grid.set_orientation(Gtk::ORIENTATION_VERTICAL);

    //Setup dropdown menu
    m_sortDropDownMenu.append("Pick a sorting algorithm");
    m_sortDropDownMenu.append("Bogosort");
    m_sortDropDownMenu.append("Miracle Sort");
    m_sortDropDownMenu.append("Bogobogosort");
    m_sortDropDownMenu.set_active(0);
    m_sortDropDownMenu.signal_changed().connect(sigc::mem_fun(*this, &Window::on_combo_changed));
    m_grid.add(m_sortDropDownMenu);
    
    //Setup button
    m_sortButton.add_label("Sort");
    m_sortButton.signal_clicked().connect(sigc::mem_fun(*this, &Window::on_button_clicked));
    m_grid.add(m_sortButton);

    //Setup sort graphic
    sortGraphic.setValueArray(values, sizeValues);
    m_grid.attach_next_to(sortGraphic, m_sortButton, Gtk::POS_BOTTOM, 2, 1);

    add(m_grid);
    show_all_children();
}

Window::~Window() {
}

void Window::on_button_clicked() {
    bool isSorted = false;
    switch(m_sortDropDownMenu.get_active_row_number()) {
        case 1:
            while(!isSorted) {
                isSorted = bogosort.bogostep();
                sortGraphic.queue_draw();   
                while (gtk_events_pending()) {
                    gtk_main_iteration();
                }
                Sleep(100);
            }
            break;
        case 2:
            util.shuffle(values, sizeValues);
            while(!isSorted) {
                isSorted = util.isSorted(values, sizeValues);
                sortGraphic.queue_draw(); 
                while (gtk_events_pending()) {
                    gtk_main_iteration();
                }
            }
        case 3:
            util.shuffle(values, sizeValues);
            bogobogo(values, sizeValues);
    }
}

void Window::on_combo_changed() {}

void Window::bogobogo(int * arr, int arrSize) {
    bool isSorted = util.isSorted(arr, arrSize);
    while(!isSorted) {
        util.shuffle(arr, arrSize);
        sortGraphic.queue_draw(); 
        while (gtk_events_pending()) {
            gtk_main_iteration();
        }
        Sleep(10);
        bogobogo(arr, arrSize - 1);
        isSorted = util.isSorted(arr, arrSize);
    }
}