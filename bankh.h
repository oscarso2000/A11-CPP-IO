//CS 2024 -- A11
//Written by Oscar So (ons4)
//November 16, 2019

#pragma once
#include <iostream>
#include <map>
#include "bankaccounth.h"
using namespace std;

class Bank
{
public:
    //Bank();
    void newAccount();
    void addingAccount(int number, string name, int balance);
    void listAccounts();
    void selectAccount();
    void showActive();
    BankAccount *getCurrentAccount()
    {
        return mCurrentAccount;
    }
    void freeAccounts();
    void addAccounts();
private:
    map<int, BankAccount *> mAccounts;
    BankAccount *mCurrentAccount;
};