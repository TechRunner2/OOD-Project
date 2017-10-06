#include <iostream> //Input stream for cout and cin
#include <stdio.h> //Used to allow for use of printf
#include <string> //Needed to use strings
//#include "login.h"
#include <fstream> //allows for access of files

using namespace std; //Setting namespace to std so that std:: is not needed

int main(){
    printf("Moch Purchasing application starting"); //Print to the console that the application is starting
    ifstream infile; //sets the input file stream to be accessed through infile
    infile.open("users.txt"); //opens the users.txt which contains the unsernames and passwords in plain text as a concept
    if (infile.fail()){ //If file fails to open return error and close application
        cerr << "Error in opening file" << endl;
        exit(1);
    }

}

class users{ //User class for both admins and Customers
public:
    string username;
    string password;
    bool admin;

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

class location{ //Location class for locations of storage facilities
    string city;
    string state; 

    void setCity(string city_n){
        city = city_n;
    }
    string getCity(){
        return city;
    }

    void setState(string state_n){
        state = state_n;
    }
    string getState(){
        return state;
    }
};

class providers{ //Providers of items
    string company;
    string product;

    void setCompany(string name_n){
        company = name_n;
    }
    string getCompany(){
        return company;
    }

    void setProducts(string products_n){
        product = products_n;
    }
    string getProducts(){
        return product;
    }

};

class product{ //products to be sold
    string name;
    double price;
    int quantity;
    string provider;
    string serialNumber;

    void setName(string name_n){
        name = name_n;
    }
    string getName(){
        return name;
    }

    void setPrice(double price_n){
        price = price_n;
    }
    double getPrice(){
        return price;
    }

    void setQuantity(int quantity_n){
        quantity = quantity_n;
    }
    int getQuantity(){
        return quantity;
    }

    void setProvider(string provider_n){
        provider = provider_n;
    }
    string getProvider(){
        return provider;
    }
    
};


void login(){
string user;
string password;
printf("Enter Username: ");
cin >> user;
printf("Enter Password: ");

}

