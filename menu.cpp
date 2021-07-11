//
//  menu.cpp
//  OOMproject.cpp
//
//  Created by depp  on 30/06/21.
//

#include "menu.hpp"
#include"moneymanager.hpp"
#include <iostream>
#include<string>
#include"login.hpp"
#include"userdetails.hpp"
using namespace std;
    void menu::mainmenu(){
        userdetails oob;
        cout<<"        MAIN MENU 🤲🏻      "<<endl;
        cout<<"1. Wallet"<<endl;
        cout<<"2. Stocks"<<endl;
        cout<<"3. holdings"<<endl;
        cout<<"4. user details"<<endl;
        cout<<"5. logout"<<endl;
        cout << "give the required serial number"<<endl;
        int a2;
        cin>>a2;
        switch (a2) {
            case 1:
                Wallet();
                break;
            case 2:
                trade();
                break;
            case 3:
                Holdings();
                break;
            case 4:
                oob.showdetails();
                break;
            case 5:
                logout();
                break;
            default:{
                cout<<"give appropriate input"<<endl;
                mainmenu();
            }
                
                break;
        }
        
    }
    void menu::Wallet(){
        
        cout<<"1. Wallet Balance"<<endl;
        cout<<"2. Add To Wallet"<<endl;
        cout << "give the required serial number"<<endl;
        string b1;
        cin>>b1;
        if(b1=="1")
           showbalance();
        else if(b1=="2")
            addbalance();
        else{
            cout<<"give appropriate input"<<endl;
            Wallet();
        }
    }

    void menu::Holdings(){
        
        holdings();
        mainmenu();
        
    }
void menu::logout(){
    cout<<"loging out !!!✌🏻"<<endl;
    login obb;
    obb.loginpage();
}

    
