/* Copyright (C) Marco Heisig, Dominik Ernst 2014 - GNU GPLv3 or later */
#pragma once
#include <string>

class Process {
public:
    Process(int *argc, char ***argv);
    void run();
private:
    int rank;
    std::string input;
    std::string output;
};