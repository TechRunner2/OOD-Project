#include <string>
#include <iostream>

using namespace std;
class purchase{
private:
    int itemnumber;
    string oders;

public:
    void buy(int item_num){
        cout << item_num << endl;
    }
};