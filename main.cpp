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

    void setUsername(string username);
    string getUsername();

    void setPassword(string password);
    string getPassword(string password);

    void setAdmin(bool admin);
    bool getAdmin();
};

class location{ //Location class for locations of storage facilities
    string city;
    string state; 

    void setCity(string city);
    string getCity();

    void setState(string state);
    string getState();
};

class providers{ //Providers of items
    string company;
    string product;

    void setCompany(string name);
    string getCompany();

    void setProducts(string products);
    string getProducts();

};

class product{ //products to be sold
    string name;
    double price;
    int quantity;
    string provider;
    string serialNumber;

    void setName(string name);
    string getName();

    void setPrice(double price);
    double getPrice();

    void setQuantity(int quantity);
    int getQuantity();

    void setProvider(string provider);
    string getProvider();
    
};


void login(){
string user;
string password;
printf("Enter Username: ");
cin >> user;
printf("Enter Password: ");
string users[][] = {{brandon, test},{wade,test}};
for(size_t bx = 0; bx < width; bx += users[][])
for(size_t by = 0; by < height; by += block_height){

}
}

