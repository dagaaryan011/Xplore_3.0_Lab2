#include<iostream>
using namespace std;

int main(){
    int fact=1;
    int i=1;
    int n;
    cout<<"Enter number ";
    cin>>n;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    cout<<"fact of "<<n<< " "<<fact;
}