#include<iostream>
using namespace std;
int main()
{
    float km,cost,avg,fees,tolls,result;
    cout<<"Enter your total driven km per day : ";
    cin>>km;
    cout<<"Enter per liter petrol cost : ";
    cin>>cost;
    cout<<"Enter average km per liter :";
    cin>>avg;
    cout<<"parking fees per day : ";
    cin>>fees;
    cout<<"tolls per day :" ;
    cin>>tolls;
    result=((km/avg)*cost)+fees+tolls;
    cout<<"your toal cost per day"<<result;
    return 0;









}
