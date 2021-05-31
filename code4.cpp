#include<math.h>
#include <iostream>
using namespace std;

int main() 
{
    double x;
    int y, z=5;

    for(y=z; y<=5; y++){
        x= ++y + z++ %3;
    }
    cout << "x= "<<x<<endl;;
    return 0;
}
