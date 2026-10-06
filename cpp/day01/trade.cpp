#include <iostream>
int main() {
    double buyp;
    double sellp;
    int shares;
    double pl;
    std::cout << "Buy price: ";
    std::cin >> buyp;
    std::cout << "Sell price: ";
    std::cin >> sellp;
    std::cout << "Shares: ";
    std::cin >> shares;
    pl = (sellp - buyp) * shares;
    if (pl > 0){
        std::cout << "Profit: " << pl << "\n";
    }
    else if (pl == 0){
        std::cout << "You broke even";  
    }
    else {
      std::cout << "Loss: " << -pl << "\n";  
    }
    double returnPercent = ((sellp-buyp)/buyp)*100;
    std::cout << "Return: " << returnPercent << "%" << "\n";
    return 0;
}