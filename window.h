#include "sortgraphic.h"

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

        Gtk::Grid m_grid;
        Gtk::Button m_sortButton;
        SortGraphic sortGraphic;
        Gtk::ComboBoxText m_sortDropDownMenu;
};