#include<iostream>
using namespace std;
int main (){
    int num1,num2;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;

    if(num1%2==0){
        cout<<"1st number is even"<<endl;
    }
    else{
        cout<<"1st number is odd"<<endl;
    }
    if(num2%2==0){
        cout<<"2nd number is even"<<endl;
    }
    else {
        cout<<"2nd number is odd"<<endl;
    }
    if(num1>num2){
        cout<<num1<<" is maximum number"<<endl;
    }
    else {
        cout<<num2<<" is maximum number";
    }



return 0;

}
