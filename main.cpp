#include <iostream>
#include "util.h"
// #include <gtkmm/application.h>
// #include <gtkmm/window.h>
// #include "window.h"

void bogobogo(int * arr, int arrSize) {
    util util;
    bool isSorted = util.isSorted(arr, arrSize);
    while(!isSorted) {
        util.shuffle(arr, arrSize);
        bogobogo(arr, arrSize - 1);
        isSorted = util.isSorted(arr, arrSize);
    }
}

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

    int arr[] = {2,6,1,4,5};

    bogobogo(arr, 5);
    
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << std::endl;
    }

    // auto app = Gtk::Application::create(argc, argv);

    // Window window;

    // return app -> run(window);
    return 0;
}