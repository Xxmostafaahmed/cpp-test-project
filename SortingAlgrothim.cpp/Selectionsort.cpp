#include<iostream>

using namespace std;

int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >>arr[i];

    }
    //using two for loop
    //1st loop run from n-1
    //second loop run from i+1
    for ( int i=0; i<n-1; i++)
    {
        for ( int j=i+1; j<n; j++)
        {
            if ( arr[j]<arr[i])
            {
                int swap=arr[j];
                arr[j]=arr[i];

            }
        }
    }


    for ( int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";


    }cout<<endl;






return 0;
}
