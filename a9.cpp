#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int x=21;
    switch (x%15)
    {
    case 1: case 2 :case 3:
        x=x+7;
        break;
    case 6:
        x=x-7;
    case 4: case 5 :
        x=x+3;
        break;
    
    default:
        x=x-3;
        break;
    }
    cout << x;
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1