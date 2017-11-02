#include <string>
using namespace std;
// Providers of items
class Provider {
private:
  string company;
  string product;
  string address;
public:
  Provider(string name, string items, string addr) {
    company = name;
    product = items;
    address = addr;
  }
  void setCompany(string name) { company = name; }
  string getCompany() { return company; }
  void setProducts(string products_n) { product = products_n; }
  string getProducts() { return product; }

  string getAddress() { return address; }
  void setAddress(string add) { address = add; }
};
