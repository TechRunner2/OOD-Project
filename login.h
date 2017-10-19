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
        cout << "Enter Password: ";
        cin >> password;
        for(int x = 0; x < sizeof(usernames)/sizeof(usernames[0]); x++){
            if(user == usernames[x]){
                if(password == passwords[x]){
                    return 1;
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

    void adduser(){
        cout << "Enter New Username: ";
        cin >> newuser;
        for(int x = 0; x < sizeof(usernames)/sizeof(usernames[0]); x++){
           if(newuser == usernames[x]){
               cout << "Account already in use.\n";
               allownew = false;
               adduser();
           } 
           else{
               allownew = true;
               usernumber = x;
           }

        }
        if(allownew == true){
            newUser(newuser, usernumber); 
            newPassword(newuser, usernumber);
        }
        begin();
    }
    void newUser(string user, int x){
       x++;
       usernames[x] = user; 
    } 
    void newPassword(string user, int x){
        x++;
        cout << "Enter New password for: " << user;
        cin >> newpassword;
        passwords[x] = newpassword;
    }

};
