

#include<iostream>
using namespace std;


int sum(int a, int b);

int main(){
    int a, b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
   
    int total_sum = sum(a, b);
    cout<<"sum is "<<total_sum<<endl;
    return 0;
}

int sum(int a, int b){
    return a + b;
}
