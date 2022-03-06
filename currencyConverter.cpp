#include "currencyConverter.hpp"

void Currency::changeCurrency(std::string currency) {
    if(currency == currency_) {
        std::cout << "It's already " << currency_ << ".\n";
        return;
    }

    std::fstream file;
    file.open( "exchangeRate.txt", std::ios::in);
    if(!(file.good())) {
        std::cout << "Could not open exchange rate file.\n";
        return;
    }

    std::string fileCurr;
    std::string fileVal;
    std::string str;
    double val;
    while(std::getline(file, fileCurr)) {
        if(!fileCurr.find(currency_)) {
            break;
        }
    }
    for(int i = 4; i < fileCurr.size(); ++i) {
        fileVal.push_back(fileCurr[i]);
    }
    val = stod(fileVal);
    value_ /= val;

    if(currency == "USD") {
        currency_ = currency;
        return;
    }

    fileCurr.clear();
    fileVal.clear();
    file.clear();
    file.seekg(0);

    while(std::getline(file, fileCurr)) {
        if(!fileCurr.find(currency)) {
            break;
        }
    }
    for(int i = 4; i < fileCurr.size(); ++i) {
        fileVal.push_back(fileCurr[i]);
    }
    currency_ = currency;
    val = stod(fileVal);
    value_ *= val;
}