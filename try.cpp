#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
    cout<<"Enter Number : ";
    cin>>n;
    int fact=1;
    for(int i=2;i<=n;i++)
    { fact*=i;}
    cout<<"Factorial is : "<<fact;
    return 0;
}