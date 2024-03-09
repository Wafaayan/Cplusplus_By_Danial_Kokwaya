/* This programm is written to show the representation of a number in different representation systems.

In Hexadecimal, we use the prefix "0x", "0b" in Binary, and "0" in Octal system. This is the rule of C++ to add the above prefixes so that the compiler can easily detect the right value and representation system. */

#include <iostream>
int main(){

int number1 = 12; // Decimal
int number2 = 0xC; // Hexadecimal
int number3 = 0b1100; // Binary
int number4 = 014; // Octal


std::cout << " Number 1 = " << number1 << std::endl;
std::cout << " Number 2 = " << number2 << std::endl;
std::cout << " Number 3 = " << number3 << std::endl;
std::cout << " Number 4 = " << number4 << std::endl;

return 0;
}