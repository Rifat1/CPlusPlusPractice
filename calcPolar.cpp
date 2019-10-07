#include <iostream>
using namespace std;
#include <math.h>

void calcPolar(double x, double y, double &r, double &theta);

int main()
{
    double r = 0;
    double theta = 0;
    calcPolar(1, -2, r, theta);
    cout << r << endl;
    cout << theta;
    return 0;
}

void calcPolar(double x, double y, double &r, double &theta)
{

    r = sqrt(pow(x, 2) + pow(y, 2));
    if ((x<0 && y<0)||(x<0 && y>0)){
        theta = atan(y / x) + (4 * atan(1));
    }  
    else if(y<0 && x>0){
        theta = atan(y / x) + ((4 * atan(1)) *2);
    }else{
        theta=atan(y/x);
    }

    // theta = atan(-2 / 1)+((4 * atan(1))*2);

    // // theta=theta*(3.14/180);
    // theta = theta + 3.14;
}
