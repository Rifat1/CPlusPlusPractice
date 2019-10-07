#include <iostream>
using namespace std;

int factorialCalc(int n);

int main()
{
    cout << factorialCalc(0) << endl;
    return 0;
}

int factorialCalc(int n)
{
    int factorial = 1;
    while (n > 0)
    {
        factorial = factorial * n;
        n--;
    }
    return factorial;
}
