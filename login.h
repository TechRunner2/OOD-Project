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
    bool allownew;
    int usernumber;
public:
    int begin(){
        bool pass;
        cout << "Enter Username: ";
        cin >> user;
        if(user == "new"){
            useradd();
        }
        cout << "Enter Password: ";
        cin >> password;
        for(int x = 0; x < sizeof(usernames)/sizeof(usernames[0]); x++){
            if(user == usernames[x]){
                if(password == passwords[x]){
                    return true;
                }
                else{
                    pass = false;
                }
            }
            else{pass = false;}
        }
        if(pass == false){
           cout << "Username or Password does not match\n";
           return 0;
        }
    }

    void useradd(){
        cout << "Enter New Username: ";
        cin >> newuser;
        for(int x = 0; x < sizeof(usernames)/sizeof(usernames[0]); x++){
            if(newuser == usernames[x]){
                cout << "Account already in use.\n";
                allownew = false;
                useradd();
            } 
            else{
                bool allownew = true;
                usernumber = x;
            }
            if(allownew == true){
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
