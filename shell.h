#include <iostream>
#include <string>
#include <stdio.h>
#include "login.h"

using namespace std;
class shell{
login ln;
private:
    string input;
    int loged_in;
public:
    void begin(){
        printf("Enter help for list of commands: ");
        cin >> input;
        if(input == "help" || input == "Help" || input == "HELP"){
            cout << "login: Login to an existing account\nadduser: Create a new user and password";
        }
        if(input == "login" || input == "Login" || input == "LOGIN"){
            ln.begin();
        }
        if(input == "adduser"){
            ln.adduser();
        }
    }
    void logedin(){

    }

};