#include "window.h"

Window::Window() {
    //Setup window
    set_title("Worst Sorting Algorithms");
    set_border_width(10);
    m_grid.set_orientation(Gtk::ORIENTATION_VERTICAL);
    
    //Setup button
    m_sortButton.add_label("Sort");
    m_sortButton.signal_clicked().connect(sigc::mem_fun(*this, &Window::on_button_clicked));
    m_grid.add(m_sortButton);

    //Setup sort graphic
    m_grid.attach_next_to(sortGraphic, m_sortButton, Gtk::POS_BOTTOM, 2, 1);

    add(m_grid);
    show_all_children();
}

Window::~Window() {
}

void Window::on_button_clicked() {
    std::cout << "Sort" << std::endl;
}