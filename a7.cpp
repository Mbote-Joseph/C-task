#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int i=1, x=7;
    for(i=2; i<25;i +=4){
        if(i%3==0){
            continue;
        }
        // continue;
        x=x++ >6 && pow(++x, 1/3);
    }
    cout <<i<<endl;
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1