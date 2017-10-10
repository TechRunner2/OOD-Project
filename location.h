#include <string>
#include <iostream>

using namespace std;

class location{ //Location class for locations of storage facilities
private:
    string city;
    string state; 

public:
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