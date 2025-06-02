#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main() {
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;
    std::string roc = "1) 👊️Rock\n";
    std::string pap = "2) ✋Paper\n";
    std::string sci = "3) ✌Scissors\n";
    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
    std::cout << roc;
    std::cout << pap;
    std::cout << sci;
    std::cout << "Choose: ";
    std::cin >> user;
    std::cout << "\nYou  choose ";
    switch (user) {
    case 1:
        std::cout << roc;
        break;
    case 2:
        std::cout << pap;
        break;
    case 3:
        std::cout << sci;
        break;
    default:
        std::cout << "Invalid Option\n";
    }
    std::cout << "Comp choose ";
    switch (computer) {
    case 1:
        std::cout << roc;
        break;
    case 2:
        std::cout << pap;
        break;
    case 3:
        std::cout << sci;
        break;
    default:
        std::cout << "Invalid Option\n";
    }
    if (user == computer) {
        std::cout << "Draw Game\n";
    }
    else if (user == 1 && computer == 3) {
        std::cout << "You Win\n";
    }
    else if (user == 3 && computer == 2) {
        std::cout << "You Win\n";
    }
    else if (user == 2 && computer == 1) {
        std::cout << "You Win\n";
    }
    else {
        std::cout << "Computer Wins!\n";
    }
}
