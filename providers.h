#include <iostream>
#include <string>

using namespace std;
//Providers of items
class Providers{ 
private:
    string company;
    string product;
    string address;

public:
    Providers(string name, string items, string addr){
        company = name;
        product = items;
        address = addr;
    }
    void setCompany(string name){
        company = name;
    }
    string getCompany(){
        return company;
    }

    void setProducts(string products_n){
        product = products_n;
    }
    string getProducts(){
        return product;
    }

};