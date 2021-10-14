#include<iostream>

using namespace std;
int main (){
    int n;
    cin>>n;

     cout<<"Enter a number"<<endl;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int lergest=0;
    int smallest =0;
    for (int i=1; i<10;i++)
    {
        cout<<a[i];
    }
    if (a[n]>lergest)
    {
        cout<<"lergest"<<endl;
    }
    else if (a[n]<smallest)
    {
        cout<<"smallest"<<endl;
    }




return 0;
}
