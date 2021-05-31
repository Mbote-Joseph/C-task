#include <iostream>
using namespace std;

int main() 
{
    int x[5], i, count =0;

    cout << "Enter any five Values : "<<endl;
    for(i=0;i<5;i++){
        cin>>x[i];
    }

    for(i=0;i<5;i++){
        if(x[i]<0){
            count ++;
        }
    }

    cout<<"Number of negative values in the array is : "<<count<<endl;
    return 0;
}
