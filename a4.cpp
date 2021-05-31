#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int x[8]={7,6,5,4,3,2,1,0};
    double p,f=0.0;
    for(int i=0; i<8; i++){
        p=i%3;
        f +=pow(x[i],p);
    }
    cout <<f<<endl;
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1