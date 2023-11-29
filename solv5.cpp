#include<iostream>
using namespace std;

int main(){

int prdct;
int num_sell;
cout<<"enter the product number : ";
cin>>prdct;
cout<<"enter product quantity number : ";
cin>>num_sell;
float total;
if(prdct ==1){
  total=200.75*num_sell;
}

else if(prdct == 2){
    total=345.50*num_sell;
}

else if(prdct == 3){
    total=775.75*num_sell;
}

else if(prdct == 4){
    total=400.35*num_sell;
}

else if(prdct == 5){
    total=1200.75*num_sell;
}

cout<<"Total amount is: "<<total<<endl;
    return 0;
}





