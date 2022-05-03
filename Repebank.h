//
// Created by ncamp on 5/3/2022.
//
#include <iostream>
#include "Bank.h"

using namespace std;

#ifndef PORTFOLIO_REPEBANK_H
#define PORTFOLIO_REPEBANK_H

class Repebank : public Bank {
public:
    Repebank(string);
    int get_data();
    int get_branches();

    void set_branches(int);

private:
    int branches;

};

#endif //PORTFOLIO_REPEBANK_H
