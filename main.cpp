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
#include "shell.h" //Shell header file
using namespace std; //Setting namespace to std so that std:: is not needed

int main(){
    shell sh; //Initalize Shell Class
    sh.begin();
    return 0; //Ends Program
}