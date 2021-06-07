#include <iostream>
#include "./include/cat.h"
#include "./include/dog.h"

using namespace std;
int main(int, char**) {
    
    int choice;
    
    char key = 'y';

    do {
        cout<< "\t -------------- Enter Choice -------------\n";
        cout << "Enter 1 for Cat, 2 for Dog: ";
        cin >> choice;
        string name;
        if(choice == 1 || choice == 2) {
            cout << "Enter name of you pet: ";
            cin >> name;

            Pett *pet;
            if(choice == 1) {
                pet = new Cat(name);
            } else {
                pet = new Dog(name);
            }

            pet->print_info();

            cout<< "\t -------------- Do you want tp continue-------------\n";
            cout << "Enter y for yes, press any other key to abort: ";
            cin >> key;
        }

    } while ( key == 'y');
    
    

}
