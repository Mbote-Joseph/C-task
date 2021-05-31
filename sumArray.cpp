#include <iostream>
using namespace std;

int main() 
{
    int x[5], i, sum=0,count=0, average;
    cout<<"Enter five Values :"<<endl;
    for(i=0; i<5;i++){
        cin>>x[i];
    }

    for(i=0; i<5; i++){
        sum = sum +x[i];
    }

    average=(sum)/(5);

    cout<<"The sum is : "<<sum<<endl;
    cout<<"The average is : "<<average<<endl;

    return 0;
}