#include <iostream>
using namespace std;

bool letterCompare(char first, char second); 

int main(){
    cout<<letterCompare('W','w')<<endl;
}

bool letterCompare(char first, char second){
    
    if ((first<65)||(first>90 && first<97)||(first>122)){
        return false;
    }else if ((second<65)||(second>90 && second<97)||(second>122)){
        return false;
    }
    else if (first - second == 0 || first - second == 32 || first - second == -32)
    {
        return true;
    }else{
        return false;
    }
    
}
