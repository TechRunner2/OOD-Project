#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

using namespace std;

string usernames[] = {"wade","Brandon","Joseph"};
string passwords[] = {"test","test","test"};


class login{
private:
    string user;
    string password;
    string newuser;
    string newpassword;
public:
    int begin(){
        cout << "Enter Username: ";
        cin >> user;
        for(int x = 0; x < sizeof(usernames)/sizeof(usernames[0]); x++){
            cout << "Enter Password: ";
            cin >> password;
            if(user == usernames[x]){
                if(password == passwords[x]){
                    cout << "Access Granted\n";
                    return 1;
                }
                else{
                cout << "Username or Password does not match\n";
                return 0;
                }
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
                   newUser(newuser, x); 
                   newPassword(newuser, x);

                }
            }
        }
    }
    void newUser(string user, int x){
       usernames[x+1] = user; 
    } 
    void newPassword(string user, int x){
        cout << "Enter New password for " << user;
        cin >> newpassword;
        passwords[x] = newpassword;
    }

};
