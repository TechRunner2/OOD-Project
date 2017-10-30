#include <iostream>
#include <string>
#include <stdio.h>
#include "purchase.h"

using namespace std;

purchase p;
login ln;
class shell{
private:
    string input;
    int loged_in;
    int li = 0;
public:
    void logedin(){
       if(li == 0){
       cout << "Welcome" << endl; 
       li = 1;
       }
       cout << "$: ";
       cin >> input;
       if(input == "exit"){
           exit(1);
       }
       if(input == "help"){
           cout << "exit: exit program\nhelp: list commands\nlist: list products avaliable\nbuy: buy product" << endl;
           logedin();
       }
       if(input == "buy"){
        int item_num;
        cout << "Enter item #: ";
        cin >> item_num;
        p.buy(item_num);

       }
       else{
            cout << "Command not recognized." << endl;
           logedin();
       }

    }
    void list(){
        cout << "Products:\n" <<endl;
    }

};

class Buy{

};