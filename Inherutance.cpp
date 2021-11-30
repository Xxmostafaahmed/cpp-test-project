#include<iostream>

#include<string>


using namespace std;
class laptop
    {
    public :
        laptop()
        {
            cout<<"Base class called"<<endl;

        }
        string name;
        float price ;

    };
    class gaminglaptop
        {

        public :
            gaminglaptop ()
            {
                cout<<"Derive class called"<<endl;

            }
            string name;
            int vram;
        };



int main (){
    int gaminglaptop ;
    cout<<"Base class called" <<" "<<"Derive class called"<<endl;




return 0;
}
