#include <cstdlib>
#include <iostream>
#include <cmath>
/* variant ¹ 14, student of group 110, name: Vasiliy Potapenko Kostyantinovich */

/* //Task ¹3, task text: Create a block diagram 
of the algorithm 
and a program according to the task..*/

using namespace std;

int main()
{    
        
 double m,n;
 int i;
    cout << "Type m=";
    cin >> m; 
    cout << endl;
    for(i=100;i<=1000;i+=100)
    {
        if((i*i)%5==0)n=(double)(i*i)/m;
            cout<<i<<" "<<n<<endl;
    }
    system("pause"); 
}

