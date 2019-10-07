#include <iostream>
using namespace std;

bool leapYear(int year);

int main(){
    int y=1900;
    cout<<leapYear(y);
}

bool leapYear(int year){
    if((year%400)==0 ){
        return true;
    }else if ((year%100)==0){
        return false;

    }else if((year%4)==0){
        return true;
    }else {
        return false;
    }
}
