#include<iostream>
using namespace std;

//Butterfly pattern
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

int main()
{
    int n = 5;

    // cout<<"Enter number of lines: ";
    // cin>>n;

    //Top
    for(int i = 0; i < n; i++)
    {
        //star
        for(int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }

        //spaces
        for(int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";
        }

        //star
        for(int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //Bottom
    for(int i = 0; i < n; i++)
    {
        //star
        for(int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        
        //spaces
        for(int j = 0; j < i; j++)
        {
            cout<<"  ";
        }

        //star
        for(int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}