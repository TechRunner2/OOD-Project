#include <iostream>
#include <string>
using namespace std;
// products to be sold
class Product {
private:
  string name;
  double price;
  int quantity;
  string provider;
  string serialNumber;
  string description;
  int maxQuantity{10};

public:
  Product(string pname, double oprice, string provide, string number,
          string descr, int quant)
      : name(pname) {
    if (oprice > 0) {
      price = oprice;
    }
    provider = provide;
    serialNumber = number;
    description = descr;
    quantity = quant;
  }
  // Sets
  void setName(string name_n) { name = name_n; }
  void setPrice(double price_n) { price = price_n; }
  void setQuantity(int quantity_n) { quantity = quantity_n; }
  void decQuantity(int red) { quantity -= red; }
  void incQuantity(int inc) { quantity += inc; }
  void setProvider(string provider_n) { provider = provider_n; }
  void setDescription() {
    cout << "Enter the Description of the Poduct Below";
    getline(cin, description);
  }
  void incMax(int inc) { maxQuantity += inc; }
  void restock() {
    if (quantity < maxQuantity) {
      int order = maxQuantity - quantity;
      quantity += order;
    }
  }

  // Gets
  string getName() { return name; }
  double getPrice() { return price; }
  int getQuantity() { return quantity; }
  string getProvider() { return provider; }
  string getDescription() { return description; }
  void getInfo() {
    cout << "Product: " << name << "\nPrice: " << price << "\nDescription"
         << description << "\nProvider: " << provider;
  }
};
