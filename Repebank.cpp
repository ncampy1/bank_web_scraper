//
// Created by ncamp on 5/3/2022.
//

using namespace std;
#include <iostream>
#include "Repebank.h"

Repebank::Repebank(string loc){}

int Repebank::get_data(){}

int Repebank::get_branches() {
    return this->branches;
}

void Repebank::set_branches(int branchnum) {
    this->branches = branchnum;
}