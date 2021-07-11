//
//  stockstatus.cpp
//  OOMproject.cpp
//
//  Created by depp  on 07/07/21.
//
#include "stockstatus.hpp"
#include<iostream>
using namespace std;

void stockstatus::setInt(int x){
    base_stock_value=x;
}
int stockstatus::getInt(){
    srand(static_cast<unsigned int>(time(0)));
    current_stock_value = base_stock_value+rand()%100;
    k= current_stock_value;
    return current_stock_value;
}
void stockstatus::stockstatus1(){
    p[0]="Reliace Industries";
    p[1]="Tata Consultancy Services";
    p[2]="Infosys";
    p[3]="State Bank of India";
    p[4]="ICICI Bank";
    p[5]="Gold";
    setInt(2564);
    cout<<"1. Reliace Industries ..."<<getInt()<<"/-"<<endl;
    a[0]=k;
    setInt(4321);
    cout<<"2. Tata Consultancy Services ..."<<getInt()<<"/-"<<endl;
    a[1]=k;
    setInt(5973);
    cout<<"3. Infosys ..."<<getInt()<<"/-"<<endl;
    a[2]=k;
    setInt(6792);
    cout<<"4. State Bank of India ..."<<getInt()<<"/-"<<endl;
    a[3]=k;
    setInt(7298);
    cout<<"5. ICICI Bank ..."<<getInt()<<"/-"<<endl;
    a[4]=k;
    setInt(5475);
    cout<<"6. Gold ..."<<getInt()<<"/-"<<endl;
    a[5]=k;
    cout<<"########################################"<<endl;
   
   
}

