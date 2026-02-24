#include <iostream>
using namespace std;

int fbnc(int n){
    if(n<=0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    else{
        return fbnc(n-1)+fbnc(n-2);
    }

}

int main(){

    int n;
    cout<<"Enter the term you want to find in the series: ";
    cin>>n;
    cout<<fbnc(n);
    
    return 0;
}