#include <iostream>
using namespace std;

bool equalProd(int a, int b, int c, int d);

int main(){
    cout<<equalProd(1,4,2,2);
    return 0;
}

bool equalProd(int a, int b, int c, int d){
    if((a*b==c*d)||(a*c==b*d)||(a*d==b*c)){
        return true;
    }else{
        return false;
    }
}
