#include <iostream>
using namespace std;

bool equalPair(int a, int b, int c, int d);

int main(){
    cout<<equalPair(2,1,1,5);
    return 0;
}

bool equalPair(int a, int b, int c, int d){
    if((a==b ||a==c||a==d)||(b==c||b==d)||(c==d)){
        return true;
    }else{
        return false;
    }
}
