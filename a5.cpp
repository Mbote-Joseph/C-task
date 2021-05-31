#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int a[6]={6,8,9}, i, m=5;
    for(i=0; i<6; i++){
        if(i%2==0){
            a[m]= a[i] -m;

        }else{
            a[m]=a[i]+m;

        }
        m--;
    }
    cout << a[4]<<endl;
    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1