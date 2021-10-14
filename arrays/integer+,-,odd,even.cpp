#include<iostream>

using namespace std;


int main (){
    int n;
    cin>>n;
    int a[n]={10};
    int even =0;
    int odd =0;
    int positive =0;
    int negate =0;
    int zero =0;
    for (int i=0; i<10; i++)
    {
        cin>>a[i];
        cout<<"Enter a number"<<endl;
    }
    for (int i=0; i<10; i++)
    {
        cout<<a[i]<<endl;
    }
    if (n%2)
    {
        cout<<even<<endl;

    }
    else
    {
        cout<<odd<<endl;

    }
    if (a[n]>0)
    {
        cout<<positive<<endl;
    }
    else if (a[n]<0)
    {
        cout<<negate<<endl;
    }
    else
    {
        zero;
    }
    cout<<even<<odd<<positive<<negate<<zero<<endl;






return 0;
}
