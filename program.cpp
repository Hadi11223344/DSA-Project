#include "program.h"
#include <iostream>
using namespace std;

    void Program::run() {
        // Program logic goes here
        ui.displayMenu();
        int userInput = ui.getUserInput();

        // Based on user input, perform operations using the classes
        // ...

        // For simplicity, we'll just print a message here
        cout << "Program completed successfully." << endl;
    }