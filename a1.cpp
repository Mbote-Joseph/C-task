#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int a=5, b=3;
    a *=b+5;
    a-=b-8;
    a/=b;

    cout <<a<<endl;
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1