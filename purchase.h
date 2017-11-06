#include <iostream>
#include <string>
#include "product.h"
#include "provider.h"
using namespace std;

//Products
Product laptop("Asus", 500, "Asus", "110", "A laptop", 10);
Product chromebook("Chromebook", 350, "Google", "101", "A cheap chromebook",10);

//Providers
Provider Google("Google", "Chromebook", "California, USA");
class Buy {
private:
  string product;
public:
  Buy(){}
  void buyItem(string item) {
    if (item == "laptop") {
      laptop.decQuantity(1);
      if(laptop.getQuantity() < 5){
        laptop.restock();
        cout << "laptops restocked" << endl;
      }
    }
    if (item == "chromebook") {
      chromebook.decQuantity(1);
      if(chromebook.getQuantity() < 5){
        chromebook.restock();
        cout << "laptops restocked";
      }
    }
  }
};
