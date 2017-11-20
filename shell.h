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
    else if (input == "help") {
      cout << "exit: exit program\nhelp: list commands\nlist: list products "
              "avaliable\nbuy [Product name]: buys product\nbalance: Check balance\n"
           << endl;
      if (admin == true) {
        cout << "admin menu" << endl;
      }
    }
    else if (input == "buy") {
      cin >> product;
      Buy b;
      bool pass = b.buyItem(product, balance) == true;
      if(pass == true){
        balance -= b.boughtItem(product);
        cout << "Thank you for your purchase." << endl;
      }else if(pass == false){
        cout << "Balance not sufficient" << endl;
      }
      else{
        cout << "Something did not go as planned please check spelling." << endl;
      }
    }
    else if (input == "list"){
      laptop.getInfo();
      chromebook.getInfo();
      eggs.getInfo();
    }
    else if ((input == "admin") && (admin == true)) {
      cout << "nothing yet" << endl;
    }
    else if (input == "addMoney"){
      balance += 600;
    }
    else if (input == "balance"){
      cout << "Balance is: " << balance << endl;
    }
    else {
      cout << "Command not recognized.('help')" << endl;
    }
  }
  }
};
