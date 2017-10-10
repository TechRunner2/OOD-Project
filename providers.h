#include <iostream>
#include <string>

using namespace std;
//Providers of items
class providers{ 
private:
    string company;
    string product;

public:
    void setCompany(string name_n){
        company = name_n;
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