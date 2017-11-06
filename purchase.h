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
Provider Asus("Asus", "laptop", "N/A");

class Buy {
private:
  string product;
public:
  bool buyItem(string item, double balance) {
    if ((item == "laptop") && (balance-laptop.getPrice() >= 0)){
      laptop.decQuantity(1);
      Asus.incMoney(laptop.getPrice()-100);
      if(laptop.getQuantity() < 5){
        laptop.restock();
        cout << "laptops restocked" << endl;
      }
      return true;
    }
    if ((item == "chromebook") && (balance-chromebook.getPrice())) {
      chromebook.decQuantity(1);
      Google.incMoney(chromebook.getPrice()-100);
      if(chromebook.getQuantity() < 5){
        chromebook.restock();
        cout << "laptops restocked";
      }
      return true;
    }else{
      return false;
    }
  }
  double boughtItem(string item){
    if(item == "laptop"){
      return laptop.getPrice();
    }
    if(item == "chromebook"){
      return chromebook.getPrice();
    }
  }
};
