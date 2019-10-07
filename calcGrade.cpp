#include <iostream>
using namespace std;

double calcGrade(double a1, double a2, double a3, double a4, double m1, double m2, double fin);

int main(){
    cout<<calcGrade(7.0/10,8.0/10,9.0/10,7.0/10,70,80,70)<<endl;
}

double calcGrade(double a1, double a2, double a3, double a4, double m1, double m2, double fin){
    double assignments=((a1+a2+a3+a4)/4)*20;
    // double assignmentPerc=assignments*20;
    double bestMid;
    fin=fin*0.5;
    if(m1>=m2){
        bestMid= m1*0.3;
    }
    else{
        bestMid= m2*0.3;
    }
    

    return (assignments+bestMid+fin);

}


// 15.5+24+35