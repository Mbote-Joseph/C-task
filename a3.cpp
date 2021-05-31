#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int v[]={6,7,9,2,99,0,2,122,7}, n[10],i, j=0;

    for(i=0; i<8 && v[i]; i++){
        if(i%2==0){
            n[j++]=v[i];
        }
    }
    cout <<n[j-1];
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1