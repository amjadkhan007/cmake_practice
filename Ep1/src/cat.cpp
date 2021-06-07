#include <iostream>
#include "../include/cat.h"

using namespace std;

Cat::Cat(string name) : Pett(name) {
    cout<< "Cat Constructor\n";
}

void Cat::print_info() {
    cout << "Cat:: My Name is " << name <<endl;
}

Cat::~Cat() {
    cout<<"Cat Destructor\n";
}