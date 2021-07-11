//
//  userdetails.cpp
//  OOMproject.cpp
//
//  Created by depp  on 09/07/21.
//

#include "userdetails.hpp"
#include"menu.hpp"
#include<iomanip>
#include<iostream>
#include"login.hpp"
using namespace std;

void userdetails::showdetails(){
    login o;
    cout<<setw(20)<<"User Name:  ";
    cout<<o.getName()<<endl;
    cout<<setw(20)<<"User id:  ";
    cout<<o.getUserid()<<endl;
    cout<<setw(20)<<"Mobile No.:  ";
    cout<<o.printMobile_no()<<endl;
    cout<<setw(20)<<"Age:  ";
    cout<<o.printage()<<endl;
    cout<<setw(20)<<"Bank account No.:  ";
    cout<<o.printbank_account_no()<<endl;
    menu obb;
    obb.mainmenu();
    
}
