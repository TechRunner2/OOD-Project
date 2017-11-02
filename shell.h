#include <iostream>
#include <string>
#include "product.h"
#include "provider.h"

using namespace std;

Product laptop("Chromebook", 100, "Google", "101", "Cheap Laptop", 10);
Provider Google("Google", "Chromebook", "California");

class shell {
private:
  string input;
  int loged_in;
  int li = 0;

public:
  void logedin() {
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
      logedin();
    }
    if (input == "buy") {

    } else {
      cout << "Command not recognized." << endl;
      logedin();
    }
  }
  void list() { cout << "Products:\n" << endl; }
};

class Buy {
public:
  void buyItem(string item) {
    item.
    cout << item << endl; }
};
