#include <iostream>
using namespace std;

string topSong(int year);

int main()
{
    cout << topSong(2010);
    return 0;
}

string topSong(int year)
{
    if (year >= 1959 && year <= 1969)
    {
        return "The Twist";
    }
    else if (year >= 1970 && year <= 1979)
    {
        return "You Light Up My Life";
    }
    else if (year >= 1980 && year <= 1989)
    {
        return "Physical";
    }
    else if (year >= 1990 && year <= 1999)
    {
        return "How Do I Live";
    }
    else if (year >= 2000 && year <= 2009)
    {
        return "We Belong Together";
    }
    else if (year >= 2010 && year <= 2019)
    {
        return "Despacito";
    }
}