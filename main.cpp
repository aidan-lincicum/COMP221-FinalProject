#include "PRNG.h"
#include <iostream>
// #include <gtkmm/application.h>
// #include <gtkmm/window.h>
// #include "window.h"

int main(int argc, char** argv) {
    // * ========================= Aidan's stuff ==============================
    // auto app = Gtk::Application::create(argc, argv);

    // Window window;

    // return app -> run(window);

    // * ======================================================================
    PRNG num;
    for(int i = 0; i < 100; i++) {
        std::cout << num.getNum(0,1) << std::endl;
    }

    std::cin.ignore();
    return 0;
}