#pragma once

#include <iostream>
using namespace std;
class Pett{
    public:
        Pett(string);
        virtual void print_info() = 0;
    protected:
        string name;
};