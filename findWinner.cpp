#include <iostream>
using namespace std;

int findWinner(char p1, char p2);

int main(){
    cout<<findWinner('r','s');
}

int findWinner(char p1, char p2){
    if ((p1 != 'r' || p1 != 's' || p1 != 'p') || (p2 != 'r' || p2 != 's' || p2 != 'p')){
        return -1;
    }else if (((p1=='r')&&(p2=='s'))||((p1=='p')&&(p2=='r'))||((p1=='s')&&(p2=='p'))){
        return 1;

    }
    
}
