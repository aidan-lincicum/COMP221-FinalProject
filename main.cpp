#include <iostream>
#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include "window.h"



int main(int argc, char** argv) {
    // * ========================= Rory's stuff ==============================
    // PRNG num;
    // const int fard = 12345;
    // for(int i = 0; i < 100; i++) {
    //     std::cout << (int) (fard * num.getNum(0,1)) << std::endl;
    // }

    // std::cin.ignore();
    // return 0;

    // * ======================================================================

    auto app = Gtk::Application::create(argc, argv);

    Window window;

    return app -> run(window);
}