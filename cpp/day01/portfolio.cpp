#include <iostream>

int main() {
    double stock;
    int shares;
    
    std::cout << "Stock price: ";
    std::cin >> stock;
    std::cout << "Shares: ";
    std::cin >> shares;
    
    double value = stock * shares;
    std::cout << "Value: " << value << "\n";

    return 0;
}