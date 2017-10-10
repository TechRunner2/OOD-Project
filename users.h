#include <string>
#include <iostream>
using namespace std;

class Users{ //User class for both admins and Customers
private:
    string username;
    string password;
    bool admin;

public:
    void setUsername(string username_n){
        username = username_n;
    }
    string getUsername(){
        return username;
    }

    void setPassword(string password_n);
    string getPassword(){
        return password;
    }

    void setAdmin(bool admin_n){
        admin = admin_n;
    }
    bool getAdmin(){
        return admin;
    }
};