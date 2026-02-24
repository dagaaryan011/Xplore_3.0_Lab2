#include<iostream>
using namespace std;

int main()
{
    int num1,num2,result;
    char choice;
    cout<<"\nCalculator menu";
    cout<<"\n\n\nEnter A for addition, B for Subtraction, C for Multiplication, D for Division, E for exit";
    cout<<"\n\nEnter values of num1 and num2 : 5 ";
    cin>>num1>>num2;
    cout<<"\n\nEnter the choices A/B/C/D/E : ";
    cin>>choice;

    switch(choice)
    {
        case 'A':
        result=num1+num2;
        break;
        case 'B':
        result=num1-num2;
        break;
        case 'C':
        result=num1*num2;
        break;
        case 'D':
        result=num1/num2;
        break;
        default:
        cout<<"\n User has exited the calculator";
    
    }
   
        cout<<"Final value of result is "<<result;
return 0;
}