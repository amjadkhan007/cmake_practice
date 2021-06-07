#pragma once

#include "./pet.h"
#include <iostream>

using namespace std;

class Cat : public Pett
{
private:
    /* data */
    virtual void print_info();
    void set_name(string);
    

public:
    Cat(string);
    ~Cat();
};

