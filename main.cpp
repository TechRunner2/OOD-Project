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
#include "location.h"
#include "product.h"
#include "providers.h"
#include "shell.h"

using namespace std; //Setting namespace to std so that std:: is not needed
void start(){
    string input;
    login ln;
    shell sh;
    printf("Enter help for list of commands: ");
    cin >> input;
    if(input == "help" || input == "Help" || input == "HELP"){
        cout << "login: Login to an existing account\nadduser: Create a new user and password\n\n";
    }
    if(input == "login" || input == "Login" || input == "LOGIN"){
        int loged_in = ln.begin();
        if(loged_in == 1){
            sh.logedin();

        }
    }
    if(input == "adduser"){
        ln.adduser();
    }
    else{
        cout << "Command not recognized\n";
        sh.logedin();
    }
}

int main(){
    start();
    return 0; //Ends Program
}

