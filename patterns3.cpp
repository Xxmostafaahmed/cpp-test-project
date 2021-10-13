#include <iostream>

using namespace std;

int main (){

    int n;
    cin>>n;
    for (int i=1,k=0;i<=n;i++,k=0)
    {
        for (int s=1;s<=(n-i);s++)
        {
            cout<<" ";
        }
        while(k!=(2*i-1))
            //jb tak k 0 nahi hota tab tak k ki value looo
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    }



return 0;
}
