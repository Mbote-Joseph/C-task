#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int x=1,y=3,z=1,d;
    z=++x>x &&(y &&10%3-pow(y,4)/3.0);

    switch(z+2){
        case 0:
            d=x++;
            cout<<"Dont Rotate\n";
            break;
        case 1:
            d=y--;
            cout<<"Rotate CW \n";
            break;
        case 2:
            d=sqrt(pow(x,2)+pow(y,2));
            cout<<"Direction is :"<<d<<endl;
        default:
            d=-999;
            cout<<"Undefined \n";
            break;

    }

    cout << "Direction is : "<<d<<endl;
    cout<<"x= "<<x<<", y="<<y;
    return 0;
}
