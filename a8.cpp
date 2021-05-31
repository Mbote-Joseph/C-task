#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int i= 1;

    while(i<10){
        i +=3;
    }
    cout << pow(2,i)<<endl;
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1