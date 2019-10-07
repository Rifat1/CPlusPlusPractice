#include <iostream>
using namespace std;

int digitSum(int n);

int main(){
    cout<<digitSum(1234)<<endl;
    cout<<digitSum(321);
}

int digitSum(int n){
    int sum=0;
    int remainder;
    while(n>0){
        remainder = n % 10;
        n=n/10;
        sum=sum+remainder;
    }
    return sum;
}