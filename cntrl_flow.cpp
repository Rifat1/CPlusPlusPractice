#include <iostream>
using namespace std;

double x =getNumberFromUser();
if(isnan(x)){
    cout<<'the user did not enter a number\n'
    x=0.0;
} else{
    cout<< 'the user entered '<<x<<end1;
}
double y=3*x+1;
int main(){
    double myMoney=3.5;
    double coffeePrice=7;
    if (myMoney>=coffeePrice){
        buyCoffee();
    }else{
        makeCoffee();
    }
    return 0;
}
