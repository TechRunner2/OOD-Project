/*
Authors: Brandon Behar, Wade Kelly-Higgs, Joseph
Class: CISC 3321 01
University: UMHB
*/
#include <iostream>
#include <string>
#include "login.h"
#include "shell.h"
using namespace std; // Setting namespace to std so that std:: is not needed
int main() {
  login ln;
  shell sh;
  bool loged_in = ln.begin();
  if (loged_in == true) {
    sh.logedin();
  } else {
    ln.begin();
  }
  return 0; // Ends Program
}
