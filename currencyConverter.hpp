#include <string>
#include <fstream>
#include <iostream>

class Currency{
    double value_;
    std::string currency_;

public:
    Currency() { std::cout << "Currency constructor.\n"; }
    Currency(double value, std::string currency)
        : value_(value)
        , currency_(currency)
        {}
    ~Currency() { std::cout << "Currency destructor.\n"; }


};