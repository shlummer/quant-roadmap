#include <iostream>

int main() {
    double ask1 = 100.01;
    double ask2 = 100.02;
    double ask3 = 100.03;

    int amt1 = 50;
    int amt2 = 150;
    int amt3 = 200;

    int shares;

    std::cout << "Price:  " << ask1 << " " << ask2 << " " << ask3 << "\n";
    std::cout << "Shares: " << amt1 << " " << amt2 << " " << amt3 << "\n";

    std::cout << "Shares to buy: ";
    std::cin >> shares;

    if (shares <= 0) {
        std::cout << "Shares must be greater than 0.\n";
        return 0;
    }

    int ord1 = 0;
    int ord2 = 0;
    int ord3 = 0;

    if (shares <= amt1) {
        ord1 = shares;
    }
    else if (shares <= amt1 + amt2) {
        ord1 = amt1;
        ord2 = shares - ord1;
    }
    else if (shares <= amt1 + amt2 + amt3) {
        ord1 = amt1;
        ord2 = amt2;
        ord3 = shares - amt1 - amt2;
    }
    else {
        std::cout << "Not enough liquidity.\n";
        return 0;
    }

    double totalCost =
        ord1 * ask1 +
        ord2 * ask2 +
        ord3 * ask3;

    double averagePrice = totalCost / shares;
    double slippage = averagePrice - ask1;

    std::cout << "\n";
    std::cout << ord1 << " shares @ " << ask1 << "\n";

    if (ord2 > 0) {
        std::cout << ord2 << " shares @ " << ask2 << "\n";
    }

    if (ord3 > 0) {
        std::cout << ord3 << " shares @ " << ask3 << "\n";
    }
    double totalSlippage = slippage * shares;
    std::cout << "\nTotal Cost: " << totalCost << "\n";
    std::cout << "Average execution price: " << averagePrice << "\n";
    std::cout << "Slippage per share: " << slippage << "\n";
    std::cout << "Total slippage: " << totalSlippage << "\n";

    return 0;
}