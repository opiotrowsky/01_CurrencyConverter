#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <iterator>

class Currency{
    double value_;
    std::string currency_;

public:
    Currency() {}
    Currency(double value, std::string currency)
        : value_(value)
        , currency_(currency)
        {}
    ~Currency() {}

    double getValue() { return value_; }
    std::string getCurrency() { return currency_; }

    double setValue(double value) { return value_ = value; }
    std::string setCurrency(std::string currency) { return currency_ = currency; }

    void changeCurrency(std::string currency);
};