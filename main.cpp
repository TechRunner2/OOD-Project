/*
Authors: Brandon Behar, Wade Kelly-Higgs, Joseph
Class: CISC 3321 01
University: UMHB
*/

#include <iostream> //Input stream for cout and cin
#include <stdio.h> //Used to allow for use of printf
#include <string> //Needed to use strings
#include <fstream> //allows for access of files

//User Header files
#include "login.h"
#include "product.h"
#include "providers.h"
#include "shell.h"

using namespace std; //Setting namespace to std so that std:: is not needed

int main(){
    Product laptop("Chromebook", 100, "Google", "101", "Cheap Laptop", 10);
    string input;
    login ln;
    shell sh;
    bool loged_in = ln.begin();
    if(loged_in == true){
    sh.logedin();
    }
    else{
        ln.begin();
    }

    return 0; //Ends Program
}

