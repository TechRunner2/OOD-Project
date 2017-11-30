#include "shell.h"
#include <iostream>
#include <string>
using namespace std;

string usernames[] = {"wade", "Brandon", "Joseph", "test"};
string passwords[] = {"test", "test", "test", "test"};
string admins[] = {"false", "false", "true", "test"};

class login {
private:
  string user;
  string password;
  bool admin{false};
  bool pass{false};

public:
  void begin() {
    while (true){
    cout << "Enter Username: ";
    cin >> user;
    cout << "Enter Password: ";
    cin >> password;
    for (int x = 0; x < sizeof(usernames) / sizeof(usernames[0]); x++) {
      if ((user == usernames[x]) && (password == passwords[x])) {
        pass = true;
        if(admins[x] == "true") { admin = true; }
        break;
      }
    }
    if (pass == false) {
      cout << "Username or Password does not match\n" << endl;
    }
    if (pass == true) {
      shell sh;
      sh.logedin(admin);
    }
  }
  }
};
