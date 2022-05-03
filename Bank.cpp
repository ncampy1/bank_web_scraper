// Nicklaus Campanella
// CSCE 306; Spring 2022
// Portfolio Project - Bank.cpp

// Code Description: File for class Bank

using namespace std;
#include "Bank.h"
#include <iostream>


Bank::Bank(){}

// setters
void Bank::set_cpr(int cpr_rate){
    this->cpr = cpr_rate;
};
void Bank::set_cd(int cd_rate){
    this->cd = cd_rate;
};
void Bank::set_annfee(int annfee_rate){
    this->annfee = annfee_rate;
};
void Bank::set_assets(int b_assets){
    this->assets = b_assets;
};

// getters
int Bank::get_cpr(){
    return this->cpr;
};
int Bank::get_cd(){
    return this->cd;
};
int Bank::get_annfee(){
    return this->annfee;
};
int Bank::get_assets(){
    return this->assets;
};

