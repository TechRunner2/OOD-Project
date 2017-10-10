#include <iostream>
#include <string>
using namespace std;

class product{ //products to be sold
private:
    string name;
    double price;
    int quantity;
    string provider;
    string serialNumber;

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
    
};