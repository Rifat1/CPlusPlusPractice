#include <iostream>
using namespace std;

bool isComposite(int n);

int main(){
    cout<<isComposite(4);
    return 0;
}

bool isComposite(int n){
    int count=2;
    int numFactors=0;
    while (!(count>n)){
        if(n%count==0){
            numFactors+=1;
        }
        count++;
    }
    if (numFactors>=2){
        return true;
    }else
    {
        return false;
    }
    
}
