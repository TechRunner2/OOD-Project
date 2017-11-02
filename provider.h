#include <string>
using namespace std;
// Providers of items
class Provider {
private:
  string company;
  string product;
  string address;
  double money{0};
public:
  Provider(string name, string items, string addr) {
    company = name;
    product = items;
    address = addr;
  }
  //Sets
  void setCompany(string name) { company = name; }
  void setProducts(string products_n) { product = products_n; }
  void setAddress(string add) { address = add; }
  void incMoney(double add) { money += add; }
  void decMoney(double sub) { money -= sub; }

  //Gets
  string getCompany() { return company; }
  string getProducts() { return product; }
  string getAddress() { return address; }
  double getMoney() { return money;}
};
