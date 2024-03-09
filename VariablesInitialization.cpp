/* This programm is written to show the three different types of variables decleration in c++. We have three types, they are:
1. Braced initialization
2. Functional initialization
3. Assignment initialization */

#include <iostream>
int main(){

    // Braced initialization

int apples {}; // Initialized to 0 because we are using brace initialzation
int oranges {3}; // initialized to 3
int bananas {55};
int fruit {oranges + bananas};

std::cout << "Apples = " << apples << std::endl;
std::cout << "Oranges = " << oranges << std::endl;
std::cout << "Bananas = " << bananas << std::endl;
std::cout << "Fruit = " << fruit << std::endl;
std::cout << "____________________________\n";

    // Functional initialization

int car (); // Garbage value
int jeep (40); // initialized to 40
int fartuner (133);
int vehicals {jeep + fartuner};

std::cout << "Car = " << car << std::endl;
std::cout << "Jeep = " << jeep << std::endl;
std::cout << "Fartuner = " << fartuner << std::endl;
std::cout << "Vehicals = " << vehicals << std::endl;
std::cout << "____________________________\n";


    // Assignment initialization

int tomato; // Garbage value
int potato = 50; // initialized to 50
int onion = 210;
int vegetables = potato + onion;

std::cout << "Tomato = " << tomato << std::endl;
std::cout << "Potato = " << potato << std::endl;
std::cout << "Onion = " << onion << std::endl;
std::cout << "Vegetables = " << vegetables << std::endl;
std::cout << "____________________________\n";

return 0;
}