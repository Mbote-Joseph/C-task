#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int x[10], i, n=10, temp;
    cout<<"Enter 10 Values :"<<endl;
    for(i=0; i<10;i++){
        cin>>x[i];
    }

    temp=x[n-1];
    for(i=n-2;i>=0;i--){
        x[i+1]=x[i];
    }
    x[0]=temp;
    cout<<"The modified array is :\n"<<endl;
    for(i=0; i<=n-1;i++){
        cout<<x[i] <<" ";
    }

    return 0;
}


// $ g++ -o a1 a1.cpp
// $ ./a1