#include <iostream>
using namespace std;

int main() 
{
    int x[5], i, sum=0;

    cout << "Enter five numbers: "<<endl;
    for(i=0; i<5;i++){
        cin>>x[i];
    }

    
    
    cout<<"Original Values :"<<endl;
    for(i=0;i<5;i++){
        cout<<x[i]<<" ";
    }
    cout<<"\n"<<endl;

    for(i=0; i<5;i++){
        if(x[i]>0){
            x[i]=(x[i]*(-1));
        }
    }
    cout<<"values in the array : "<<endl;
    for(i=0;i<5;i++){
        cout<<x[i]<<" ";
    }

    return 0;
}
