
#include <iostream>
using namespace std;


// int fb(int s, int l);
// int fb(int s, int l){
//     int r;
//     while (s>0){
//         r=l%s;
//         l=s;
//         s=r;
//     }
//     return l;
// }

// int main(){
//     cout<<fb(56,24);
// }

// int foo(int a);
// int main(){
//     cout<<foo(4);
// }
// int foo(int n){
//     if (n==1)
//         return 1;
//     else 
//         return n*foo(n-1);
// }

int foo(int a[]);
int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout << "main : "<<sizeof(a)<<endl;
    // int b[] = {1, 2, 3, 4, 5};
    cout<<-a[4];
    foo(a);
    return 0;
}
int foo(int a[]){
    cout<<"foo : "<<sizeof(a);
    return 0;
}