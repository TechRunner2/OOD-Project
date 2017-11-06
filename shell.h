#include <iostream>
#include <string>
#include "purchase.h"
using namespace std;

class shell {
private:
  string input;
  int loged_in;
  int li = 0;
  string product;
  double balance{0};

public:
  void logedin(bool admin) {
    while (true){
    if (li == 0) {
      cout << "Welcome" << endl;
      li = 1;
    }
    cout << "$: ";
    cin >> input;
    if (input == "exit") {
      exit(1);
    }
    if (input == "help") {
      cout << "exit: exit program\nhelp: list commands\nlist: list products "
              "avaliable\nbuy: buy product"
           << endl;
      if (admin == true) {
        cout << "admin menu" << endl;
      }
    }
    if (input == "buy") {
      string product;
      cout << "Enter Product Name: ";
      cin >> product;
      Buy b;
      b.buyItem(product);
      cout << "Thank you for your purchase." << endl;
    }
    if ((input == "admin") && (admin == true)) {
      cout << "nothing yet" << endl;
    } else {
      cout << "Command not recognized." << endl;
    }
  }
  void list() { cout << "Products:\n" << endl; }
};
