#include "shell.h"
#include <iostream>
#include <string>
using namespace std;

string usernames[] = {"wade", "Brandon", "Joseph"};
string passwords[] = {"test", "test", "test"};
string admins[] = {"false", "false", "true"};

class login {
private:
  string user;
  string password;
  string newuser;
  string newpassword;
  bool allownew;
  int usernumber;
  bool admin{false};
  bool pass{false};

public:
  void begin() {
    cout << "Enter Username: ";
    cin >> user;
    if (user == "new") {
      useradd();
    }
    cout << "Enter Password: ";
    cin >> password;
    for (int x = 0; x < sizeof(usernames) / sizeof(usernames[0]); x++) {
      if (user == usernames[x]) {
        if (password == passwords[x]) {
          pass = true;
          break;
        } else {
          pass = false;
        }
      }
    }
    if (pass == false) {
      cout << "Username or Password does not match\n";
      begin();
    }
    if (pass == true) {
      shell sh;
      sh.logedin();
    }
  }

  void useradd() {
    cout << "Enter New Username: ";
    cin >> newuser;
    for (int x = 0; x < sizeof(usernames) / sizeof(usernames[0]); x++) {
      if (newuser == usernames[x]) {
        cout << "Account already in use.\n";
        allownew = false;
        useradd();
      } else {
        bool allownew = true;
        usernumber = x;
      }
      if (allownew == true) {
        int y = ++x;
        usernames[y] = newuser;
        cout << "Enter New password for " << newuser << ":";
        cin >> newpassword;
        passwords[y] = newpassword;
      }
    }

    begin();
  }
};
