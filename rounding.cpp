#include <iostream>
using namespace std;

int rounding(double n);

int main()
{
    cout << rounding(1.5) << endl;

    // return 0;
}

int rounding(double n)
{   
    double remainder = n - (int)(n);
    cout << remainder << endl;
    if (remainder >= 0.5)
    {
        return (int)n + 1;
    }
    else if (remainder <= -0.5)
    {
        return (int)n - 1;
    }

    else if (remainder < 0.5 || remainder > -0.5)
    {
        return int(n);
    }
}