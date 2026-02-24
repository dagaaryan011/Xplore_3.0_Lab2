#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter the number: ";
    cin>>N;
    int f=1;

    for(int i=N;i>=1;i--){
        f=f*i;
        
    }
    cout<<f<<endl;

    
    return 0;
}
