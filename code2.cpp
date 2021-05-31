#include <iostream>
#include<math.h>

using namespace std;

int main() 
{
    int a=16, b=3;
    a=sqrt(b+5)/3;
    a=pow(a, 1/2);
    a=b/a;
    cout << "a ="<<a<<endl;
    return 0;
}