//
// Created by ncamp on 5/3/2022.
//
#include <iostream>
#include "Bank.h"

using namespace std;

#ifndef PORTFOLIO_Lakeside_H
#define PORTFOLIO_Lakeside_H

class Lakeside : public Bank {
public:
    Lakeside(string);
    int get_data();
    int get_branches();

    void set_branches(int);

private:
    int branches;

};

#endif //PORTFOLIO_Lakeside_H
