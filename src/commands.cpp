#include "commands.h"

#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void createProject(const std::string& name)
{
    fs::create_directory(name);
    fs::create_directory(name + "/src");
    fs::create_directory(name + "/assets");

    std::ofstream(name + "/README.md")
        << "# " << name << "\n";

    std::cout << "Projeto criado!\n";
}

void executeCommand(const std::string& cmd)
{
    if (cmd == "help")
    {
        std::cout << "help\n";
        std::cout << "newapp\n";
        std::cout << "version\n";
        std::cout << "exit\n";
    }
    else if (cmd == "version")
    {
        std::cout << "KittyBuilder 1.0\n";
    }
    else if (cmd.rfind("newapp ", 0) == 0)
    {
        std::string name = cmd.substr(7);
        createProject(name);
    }
    else
    {
        std::cout << "Comando desconhecido\n";
    }
}
