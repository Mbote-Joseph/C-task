#include <iostream>
using namespace std;

int main() 
{
    int i=0;
    while (i<12){
        if(i<=4){
            i+=5;
            continue;
        }
        else if (i<=7)
        {
            i= i+4;
        }else if (i=10)
        {
           i=i+3;
        }else{
            i=4;
            break;
        }
        ++i;
        
        
    }
    cout << i<<endl;
    return 0;
}
