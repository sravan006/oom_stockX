//
//  WalletBalance.cpp
//  OOMproject.cpp
//
//  Created by depp  on 01/07/21.
//

#include "moneymanager.hpp"
#include"menu.hpp"
#include<iostream>
#include<string>
#include"stockstatus.hpp"
using namespace std;
int wallet_balance;
int holdings_counter[6];
int added_balance;
int stock_sno;
menu ob;


void moneymanager::trade(){
    stockstatus1();
    cout<<"select serial no.of stock to trade"<<endl;
    cout<<"select 0 for mainmenu"<<endl;
    cin>>stock_sno;
         if (stock_sno>0 && stock_sno<6){
             cout<<"1.buy"<<endl;
             cout<<"2.sell"<<endl;
             string m1;
             cin>>m1;
                if (m1=="1")
                 buy();
                else if (m1=="2")
                 sell();
                else{
                    cout<<"enter appropriate input"<<endl;
                 cout<<"########################################"<<endl;
                 trade();
             }
    }
         else if(stock_sno==6){
             cout<<"wanna trade in grams or kilograms ?"<<endl;
             cout<<"1.grams"<<endl;
             cout<<"2.kilograms"<<endl;
             string m6;
             cin>>m6;
             if(m6=="1"){
             cout<<"1.buy"<<endl;
             cout<<"2.sell"<<endl;
             string m5;
             cin>>m5;
                 if(m5=="1")
                 buy(1,"grams");
                 else if(m5=="2")
                 sell(1,"grams");
                 else
                 {
                 cout<<"enter appropriate input"<<endl;
                 trade();
                 }
             }
             else if(m6=="2"){
                 cout<<"1.buy"<<endl;
                 cout<<"2.sell"<<endl;
                 string m5;
                 cin>>m5;
                 if(m5=="1")
                     buy(1000,"kilograms");
                 else if(m5=="2")
                     sell(1000,"kilograms");
                 else
                 {
                     cout<<"enter appropriate input"<<endl;
                     trade();
                 }
             }
             else{
         cout<<"enter appropriate input"<<endl;
                 cout<<"########################################"<<endl;
                 trade();
             }
                 
         }
    else if (stock_sno==0)
        ob.mainmenu();
    else{
        cout<<"select apporiate number"<<endl;
        cout<<"########################################"<<endl;
        trade();
    }
}

void moneymanager::buy(){
    cout<<"how many no.of shares u wanna buy ?"<<endl;
    int f1,f2;
    cin>>f1;
    f2= a[stock_sno-1]*f1;
    if(f2<=wallet_balance){
        cout<<"hurray you bought "<<f1<<" shares of "<<p[stock_sno-1]<<endl;
        wallet_balance=wallet_balance-f2;
        holdings_counter[stock_sno-1]=holdings_counter[stock_sno-1]+f1;
        cout<<"########################################"<<endl;
        ob.mainmenu();
    }
    else{
        cout<<"check your wallet balance"<<endl;
        cout<<"########################################"<<endl;
        ob.mainmenu();
    }
}

void moneymanager::sell(){
    cout<<"how many no.of shares u wanna sell ?"<<endl;
    int f1,f2;
    cin>>f1;
    f2=a[stock_sno-1]*f1;
    if(holdings_counter[stock_sno-1]>=f1)
    {
        cout<<"your trade is successful"<<endl;
        wallet_balance=wallet_balance+f2;
        holdings_counter[stock_sno-1]=holdings_counter[stock_sno-1]-f1;
        cout<<"########################################"<<endl;
        ob.mainmenu();
    }
    else{
        cout<<"you don't possess the required no.of stocks"<<endl;
        cout<<"########################################"<<endl;
        ob.mainmenu();
    }
}

void moneymanager::buy(int y, string unit){
    cout<<"how many "<<unit<<" u wanna buy ?"<<endl;
    int f1,f2;
    cin>>f1;
    f2= a[stock_sno-1]*f1*y;
    if(f2<=wallet_balance){
        cout<<"hurray you bought "<<f1<<" "<<unit<<" of "<<p[stock_sno-1]<<endl;
        wallet_balance=wallet_balance-f2;
        holdings_counter[stock_sno-1]=holdings_counter[stock_sno-1]+f1*y;
        cout<<"########################################"<<endl;
        ob.mainmenu();
    }
    else{
        cout<<"check your wallet balance"<<endl;
        cout<<"########################################"<<endl;
        ob.mainmenu();
    }
}

void moneymanager::sell(int y, string unit){
    cout<<"how many "<<unit<<" u wanna sell ?"<<endl;
    int f1,f2;
    cin>>f1;
    f2=a[stock_sno-1]*f1*y;
    if(holdings_counter[stock_sno-1]>=f1)
    {
        cout<<"your trade is successful"<<endl;
        wallet_balance=wallet_balance+f2;
        holdings_counter[stock_sno-1]=holdings_counter[stock_sno-1]-f1*y;
        cout<<"########################################"<<endl;
        ob.mainmenu();
    }
    else{
        cout<<"you don't possess required "<<unit<<" of gold "<<endl;
        cout<<"########################################"<<endl;
        ob.mainmenu();
    }
}

void moneymanager::holdings(){
    for(int i=0;i<5;i++){
    if(holdings_counter[i]>0){
        cout<<"you have "<<holdings_counter[i]<<" shares in "<<p[i]<<endl;
        
    }
    }
    if(holdings_counter[5]>0)
        cout<<"you have "<<holdings_counter[5]<<" grams in "<<p[5]<<endl;
    if(holdings_counter[0]+holdings_counter[1]+holdings_counter[2]+holdings_counter[3]+holdings_counter[4]+holdings_counter[5]==0){
        if (wallet_balance>added_balance)
        cout<<"your profit is "<<wallet_balance-added_balance<<"/-"<<endl;
    else if(wallet_balance<added_balance)
        cout<<"you are in loss of "<<added_balance-wallet_balance<<"/-"<<endl;
    else
        cout<<"you so stable, start buying stocks !!"<<endl;
    }
    else
        cout<<"see your profits after completing your trade"<<endl;
        
        
}

void moneymanager::showbalance(){
    if (wallet_balance==0)
    { cout<<"Your Wallet is Empty"<<endl;
    cout<<"1. add to wallet"<<endl;
        cout<<"2. Main menu"<<endl;
        string c1;
        cin>>c1;
        if(c1=="1")
            addbalance();
        else
        ob.mainmenu();
        
    }
    else
    {
            cout<<"YOur Wallet has Rupees  "<<wallet_balance<<endl;
        cout<<"1. add to wallet"<<endl;
            cout<<"2. Main menu"<<endl;
        string c2;
        cin>>c2;
        if(c2=="1")
            addbalance();
        else
            ob.mainmenu();
    }
    
}

void moneymanager::addbalance(){
    cout<<"Enter amount in rupees"<<endl;
    int n;
    cin>>n;
    cout<<"rupees  "<<n<<"  has added to your account"<<endl;
    added_balance=added_balance+n;
    wallet_balance=wallet_balance+n;
    cout<<"your total balance is rupees  "<<wallet_balance<<endl;
    cout<<"1. previous menu"<<endl;
    cout<<"2. Main menu"<<endl;
    string c;
    cin>>c;
    if(c=="1")
        ob.Wallet();
    else
        ob.mainmenu();
}







