#include<iostream>

using namespace std ;
void change (int n)
{
    n=n*n;
    cout<<"value of function "<<n<<endl;

}

int main(){
    int n;
    n=n*n;
    cout<<"Enter value :";
    cin>>n;
    change (n);
    cout<<" Value in main :"<<n<<endl;


    return 0;
}
