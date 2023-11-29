#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float m,h,bmi;
    cout<<"enter your mass in kg :";
    cin>>m;
    cout<<"enter your height in meter :";
    cin>>h;
    bmi=m/pow(h,2);
    cout<<"your bmi is "<<bmi;
    return 0;
}
