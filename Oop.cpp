#include<iostream>

#include<string>
using namespace std;

class laptop

{

    string name ;
    string nrand  ;
    string processor ;
    float price ;
    void getdata ()
    {
        cin>>"name";
        cin>>"brand ";
        cin>>"processor";
        cin>>"price";
    }

    void showdata ()
    {
        cout<<"mane"<<"brand"<<"processor"<<"price";
    }

    void startup ()
    {
        cout<<"laptop"<<"mane"<<"has started";
    }

    void shurtdown ()
    {
        cout<<"laptop"<<"mane"<<"shurtdown";
    }


int main ()
{
     laptop 1;
    laptop 1,getdata ();
    laptop 1,getshow ();
    laptop 1,stargtup ();
    laptop 1,shutdown ();

}



return 0;
}:
