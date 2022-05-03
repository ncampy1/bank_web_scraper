//
// Created by ncamp on 5/3/2022.
//

using namespace std;
#include <iostream>

#ifndef PORTFOLIO_BANK_H
#define PORTFOLIO_BANK_H

class Bank {

public:
    Bank();

    void set_cpr(int);
    void set_cd(int);
    void set_annfee(int);
    void set_assets(int);

    int get_cpr();
    int get_cd();
    int get_annfee();
    int get_assets();

    void print_cd();

private:
    int cpr;
    int cd;
    int annfee;
    int assets;

};

#endif //PORTFOLIO_BANK_H
