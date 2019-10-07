#include<iostream>
using namespace std;

bool sameLetter(char letter1, char letter2);

int main(){
    bool isTrue =sameLetter('A','A');
    if(isTrue){
        cout<<"yeay!!!";
    }else {
        cout<< "boo!";
    }
}

bool sameLetter(char letter1, char letter2){
    bool returnVal=false;
    if (letter1==letter2){
        returnVal=true;
    }else if ((letter1-letter2)==32){
        returnVal=true;
    }
    else if ((letter2 - letter1) == 32){
        returnVal=true;
    }
    return returnVal;
}