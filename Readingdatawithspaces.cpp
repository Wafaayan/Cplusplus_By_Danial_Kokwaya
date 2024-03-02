#include <iostream>
int main(){

std::string fullName;
int age{0};


/* If we store the name directly as std::cin>>name then programm will be able to store only a single name either first name or last name. To store a full name having spaces, we have to replace std::cin>>name by std::getline(std::cin,fullName); */


std::cout << "Please enter your full name: ";
std::getline(std::cin,fullName);

std::cout << "Please enter your age: ";
std::cin >> age;

std::cout << "Hello "<< fullName << " you are " << age << " years old. ";

}