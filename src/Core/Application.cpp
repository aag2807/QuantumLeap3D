#include "Application.h"
#include <iostream>

namespace QuantumLeap3D
{
    Application::Application()
    {
        std::cout << "Starting App" << std::endl;
    }

    Application::~Application()
    {
        std::cout << "Closing App" << std::endl;
    }

    int Application::Run()
    {
        std::cout << "Running App" << std::endl;

        // main loop goes here

        return 0;
    }
}