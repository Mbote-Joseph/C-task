#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    double ary1[5]={5,-10,-4,4};
    double ary2[5]={0};

    int i;
    for(i=0;i<5;i++){
        ary2[i]=ary1[4-i]*-2;
    }
    cout<<ary2[3];
    cout<<endl;
    
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1