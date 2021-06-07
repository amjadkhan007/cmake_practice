#pragma once
#include "./pet.h"
#include <iostream>

using namespace std;

class Dog : public Pett
{
private:
    /* data */
    virtual void print_info();
    void set_name(string);

public:
    Dog(string);
    ~Dog();
};
