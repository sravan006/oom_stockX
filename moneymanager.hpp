//
//  WalletBalance.hpp
//  OOMproject.cpp
//
//  Created by depp  on 01/07/21.
//
#include"stockstatus.hpp"
#include<string>
#ifndef moneymanager_hpp
#define moneymanager_hpp

class moneymanager:private stockstatus{
protected:
    void showbalance();
    void addbalance();
    void trade();
    void buy();
    void sell();
    void holdings();
    void buy(int y,string unit);
    void sell(int y,string unit);
    };

#endif /* WalletBalance_hpp */
    