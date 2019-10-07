#include <iostream>
using namespace std;

int medianCheck(int x, int y, int z);

int main()
{
    cout << medianCheck(2, 1, 3) << endl;
    return 0;
}

int medianCheck(int x, int y, int z)
{
    if ((x >= y && x <= z) || (x >= z && x <= y))
    {
        return x;
    }
    else if ((y >= x && y <= z) || (y >= z && y <= x))
    {
        return y;
    }
    else
    {
        return z;
    }
}
