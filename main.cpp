#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    int x;
    cout<<"Enter a guess: ";
    cin>>x;
    int guess = (rand()%50)+1;
    if(x==guess){
        cout<<"You win";
    }else{
        cout<<"You lose";
    }
}