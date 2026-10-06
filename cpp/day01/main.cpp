#include <iostream>
#include <string>
int main () {
    std::string name;
    int age;

    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Age: ";
    std::cin >> age;

    std::cout << "Hello " << name << ". You are " << age << " years old.\n";

    return 0;
}