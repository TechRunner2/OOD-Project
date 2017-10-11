#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
//products to be sold
class product{ 
private:
    string name;
    double price;
    int quantity;
    string provider;
    string serialNumber;
    string description;

public:
    void setName(string name_n){
        name = name_n;
    }
    string getName(){
        return name;
    }

    void setPrice(double price_n){
        price = price_n;
    }
    double getPrice(){
        return price;
    }

    void setQuantity(int quantity_n){
        quantity = quantity_n;
    }
    int getQuantity(){
        return quantity;
    }

    void setProvider(string provider_n){
        provider = provider_n;
    }
    string getProvider(){
        return provider;
    }

    void setDescription(){
        cout << "Enter the Description of the Poduct Below";
        getline(cin, description);
    }
    string getDescription(){
        return description;
    }
    
    void getInfo(){
        cout << "Product: " << name << "\nPrice: " << price << "\nDescription" << description <<"\nProvider: " << provider;
    }
};