#include <iostream>
using namespace std;


int facttorial(int number);

int main()
{
    cout<<facttorial(5);



    return 0;
}

int facttorial(int number){
    int fact=1;
    while(number>0){
        fact=fact*number;
        number-=1;
    }
    return fact;
}

// factorial(number):
// 	let factorial = 1
// 	while number > 0:
// 		factorial = factorial * number
// 		number = number - 1