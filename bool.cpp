#include <iostream>
using namespace std;

bool trueFunc(int a, int b, int c, int d);
bool isSmallest(int a, int b, int c, int d);

int main(){
    cout<<trueFunc(1,-5,3,9)<<endl;
    cout << isSmallest(1, -5, 3, 9);

    return 0;
}

bool trueFunc(int a, int b, int c, int d){
    if (a < 0 || b < 0 || c < 0 || d < 0){
        return true;
    }
}
bool isSmallest(int a, int b, int c, int d){
    if (a<b && a<c && a<d){
        return true;
    }
}
