#include <iostream>
using namespace std;

int main()
{
    double myMoney = 3.50;
    double friendMoney = 8;
    double coffeeCost = 5;
    cout << "coffee cost " << coffeeCost << endl;
    cout << "my Money $" << myMoney;
    cout << "Friend's money $" << friendMoney;
    while (myMoney < coffeeCost and friendMoney < coffeeCost)
    {
        cout<<"getting a loan";
        myMoney += 1;
        friendMoney += 1;
    }
}
