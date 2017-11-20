#include <iostream>
#include <string>
#include "product.h"
#include "provider.h"
using namespace std;

//Products
Computer laptop("Asus", 500, "Asus", "110", "A laptop", 10, "intel", 16, 1024);
Computer chromebook("Chromebook", 350, "Google", "101", "A cheap chromebook",10, "Arm" , 4, 60);
Product eggs("eggs", 1.50, "Farms", "121", "A case of eggs", 100);

//Providers
Provider Google("Google", "Chromebook", "California, USA");
Provider Asus("Asus", "laptop", "N/A");
Provider Farm("Farm", "eggs", "N/A");

double profit{.4};

class Buy {
private:
  string product;
public:
  bool buyItem(string item, double balance) {
    if ((item == "laptop") && (balance-laptop.getPrice() >= 0)){
      laptop.decQuantity(1);
      Asus.incMoney(laptop.getPrice()*profit);
      if(laptop.getQuantity() < 5){
        laptop.restock();
        cout << "laptops restocked" << endl;
      }
      return true;
    }
    if ((item == "chromebook") && (balance-chromebook.getPrice() >= 0)) {
      chromebook.decQuantity(1);
      Google.incMoney(chromebook.getPrice()*profit);
      if(chromebook.getQuantity() < 5){
        chromebook.restock();
        cout << "laptops restocked";
      }
      return true;
    }
    if ((item == "eggs") && (balance-eggs.getPrice() >= 0)){
      eggs.decQuantity(1);
      Farm.incMoney(eggs.getPrice()*profit);
      if(eggs.getQuantity() < 5){
        eggs.restock();
        cout << "Eggs restocked";
      }
      return true;
    }
    else{
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
    if(item == "eggs"){
      return eggs.getPrice();
    }
  }
};
