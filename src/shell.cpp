#include "shell.h"
#include "commands.h"

#include <iostream>
#include <string>

void Shell::run() {
    std::string cmd;

    std::cout << "KittyBuilder v1.0\n";

    while (true) {
        std::cout << "kitty> ";

        std::getline(std::cin, cmd);

        if (cmd == "exit")
            break;

        executeCommand(cmd);
    }
}
