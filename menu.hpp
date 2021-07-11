//
//  menu.hpp
//  OOMproject.cpp
//
//  Created by depp  on 30/06/21.
//
#include"moneymanager.hpp"
#ifndef menu_hpp
#define menu_hpp


class menu:private moneymanager{
public:
    void mainmenu();
    void Wallet();
    void Holdings();
    void logout();
};

#endif /* menu_hpp */
