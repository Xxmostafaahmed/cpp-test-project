#include<iostream>
#include<string>

using namespace std;

class laptop
{
    string name ;
    float price ;
    public :
    laptop ()
    {
        name = "windows";
        price = 100.0;
    }
    void show ()
    {
        cout <<"name" <<"windows"<<"price"<<"100.0"<<endl;
    }

};



int main (){
    laptop lap ;
    laptop show ;
    cout <<"name" <<"windows" <<" "<<"price"<<100.0 <<" "<<endl;





return 0;
}
