#include "sortgraphic.h"
#include "bogosort.h"

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/grid.h>
#include <gtkmm/comboboxtext.h>

class Window : public Gtk::Window {
    public:
        Window();
        virtual ~Window();

    protected:
        void on_button_clicked();
        void on_combo_changed();
        void bogobogo(int * arr, int arrSize);

        int values[5] = {10,20,30,40,50};
        int sizeValues = 5;

        Gtk::Grid m_grid;
        Gtk::Button m_sortButton;
        SortGraphic sortGraphic;
        Gtk::ComboBoxText m_sortDropDownMenu;
        Bogosort bogosort;
        util util;
};