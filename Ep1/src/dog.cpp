#include <iostream>
#include "../include/dog.h"

using namespace std;

Dog::Dog(string name) : Pett(name) {
    cout<< "Dog Constructor\n";
}

void Dog::print_info() {
    cout << "Dog:: My Name is " << name <<endl;
}

Dog::~Dog() {
    cout<<"Dog Destructor\n";
}