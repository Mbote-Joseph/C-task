#include <iostream>
using namespace std;

int main() 
{
    int x[5], i, maximum, minimum;

    cout << "Enter five numbers :"<<endl;
    for(i=0; i<5;i++){
        cin>>x[i];
    }
    int max(x[0]);
    int min(x[0]);
    for(i=0;i<5;i++){
        if(x[i]>max)
        max=x[i];

        if(x[i]<min)
        min= x[i];
    }
    cout<<"Maximum :"<<max<<endl;
    cout<<"Minimum :"<<min<<endl;
    return 0;
}
