#include<iostream>

using namespace std;

int main (){
    int quantity,price;
    cout<<quantity<<endl;
    cin>>quantity;
    cout<<price<<endl;
    cin>>price;
    price=quantity*100;
    if(price>>100)
    {
        cout<<(quantity*10)/100;
    }
    else
        cout<<(quantity*0);





return 0;
}
