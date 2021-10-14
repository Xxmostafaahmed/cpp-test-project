#include <iostream>
using namespace std;
int main()
{
    int i,sum=0;
    for (i = 1; i <= 10; i++)
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of first 10 natural numbers: "<<sum << endl;
return 0;
}
