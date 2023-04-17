//#include "PRNG.h"
//#include <iostream>
#include "display.h"
#include <gtkmm/application.h>
#include <gtkmm/window.h>

int main(int argc, char** argv) {
    auto app = Gtk::Application::create(argc, argv);

    Gtk::Window win;
    win.set_title("Drawing Area");

    Display display;
    win.add(display);
    display.show();

    return app -> run(win);
    // PRNG num;
    // std::cout << num.getNum(1,1) << std::endl;
    // for(int i = 0; i < 100; i++) {
    //     std::cout << num.getNum(0,1) << std::endl;
    // }

    // std::cin.ignore();
    // return 0;
}