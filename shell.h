#include <iostream>
#include <string>
#include "product.h"
#include "provider.h"
using namespace std;

class shell {
private:
  string input;
  int loged_in;
  int li = 0;
  bool admin;
public:
  void logedin(bool admin) {
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
      if(admin == true){ cout << "admin menu" << endl;}
      logedin(admin);
    }
    if (input == "buy") {
    } else {
    if (input == "admin" && admin == true){
      cout << "nothing yet" << endl;
    }
      cout << "Command not recognized." << endl;
      logedin(admin);
    }
  }
  void list() { cout << "Products:\n" << endl; }
};

class Buy {
public:
  void buyItem(string item) {
    item.
    cout << item << endl; }
    sh.logedin(admin);

};
