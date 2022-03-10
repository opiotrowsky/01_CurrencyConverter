#include "currencyConverter.hpp"

int main() {
    double val;
    std::string curr, newcurr;
    std::cout << "Hello customer. Please, tell me first how much money do you have and what currency it is.\n";
    std::cin >> val >> curr;
    Currency currency(val, curr);
    std::cout << "Thank you. Now please tell me which currency do you want to get.\n";
    std::cin >> newcurr;
    currency.changeCurrency(newcurr);
    std::cout << "This is how much money do you have in chosen currency:\n";
    std::cout << currency.getValue() << " " << currency.getCurrency() << "\n";
}