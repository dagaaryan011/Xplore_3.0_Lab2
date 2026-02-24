#include <iostream>
using namespace std;
#define MAX 100

class Stack
{
    private:
    int top;
    int arr[MAX];
    public:
    Stack()
    {
        top=-1;
    }
    void push(int v)
    {
        if(top==MAX-1)
        {
            cout<<"Stack is full (Stack Overflow)"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top]=v;
            cout<<v<<" Pushed on the stack"<<endl;
            return;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty (Stack underflow)"<<endl;
            return;
        }
        else
        {
            cout<<arr[top]<<endl;
            top--;
            return;
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<"Stack elements are:";
        for(int i=top; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
        return;
    }
};
int main() 
{
    Stack s1;
    int p,ch;
    do
    {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch (ch)
        {
            case 1: cout<<"\n Enter element to be pushed: ";
                    cin>>p;
                    s1.push(p);
                    break;
            case 2: s1.pop();
                    break;
            case 3: s1.display();
                    break;
            case 4: cout<<"Exiting program."<<endl;
                    break;
            default: cout<<"Enter valid option."<<endl;
            
        }
    }
    while (ch!=4);
    return 0;
}
