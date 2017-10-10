#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "shell.h"

using namespace std;

string usernames[] = {"wade","Brandon","Joseph"};
string passwords[] = {"test","test","test"};

shell sh;

class login{
private:
    string user;
    string password;
    string newuser;
    string newpassword;
public:
    void begin(){
        cout << "Enter Username: ";
        cin >> user;
        for(int x = 0; x < sizeof(usernames)/sizeof(usernames[0]); x++){
            if(user == usernames[x]){
                cout << "Enter Password: ";
                cin >> password;
                if(password == passwords[x]){
                    cout << "Access Granted";
                    sh.logedin();
                }
                else
                cout << "Username or Password does not match";
            }
        }
    }

    void adduser(){
        cout << "Enter New Username: ";
        cin >> newuser;
        for(int x = 0; x < sizeof(usernames)/sizeof(usernames[0]); x++){
            if(newuser == usernames[x]){
                break;
            }
            else{
                for(int x = 0; x < sizeof(usernames)/sizeof(usernames[0]); x++){
                   newUser(newuser); 
                   newPassword(newuser, x);

                }
            }
        }
    }
    void newUser(string user){
       usernames[x+1] = user; 
    } 
    void newPassword(string user, int x){
        cout << "Enter New password for " << user;
        cin >> newpassword;
        passwords[x] = newpassword;
    }

};
