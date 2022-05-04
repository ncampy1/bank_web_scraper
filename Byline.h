//
// Created by ncamp on 5/3/2022.
//
#include <iostream>
#include "Bank.h"

using namespace std;

#ifndef PORTFOLIO_Byline_H
#define PORTFOLIO_Byline_H

class Byline : public Bank {
public:
    Byline(string);
    int get_data();
    int get_branches();

    void set_branches(int);

private:
    int branches;

};

#endif //PORTFOLIO_Byline_H
