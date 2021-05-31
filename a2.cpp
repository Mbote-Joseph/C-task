#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int x=8,y,z=5;
    if(x>=8 && x<=10){
        y=x+ --z;
    }else{
        y =++z;
    }
    cout << y<<endl;
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1