#include<iostream>
using namespace std;

class Game {
    private:
    int score=0;

    public:
    void setScore(){
        score++;
        cout<<"Score is increased according to the game"<<endl;
    }
    int ViewScore(){
        return score;
    }
};

int main(){
    Game g1;
    int choice;

    while(true){
        cout<<"Game Menu:"<<endl;
        cout<<"1.Play Game"<<endl<<"2.View Score"<<endl<<"3.Exit"<<endl;
        cout<<"Choose number according to the action: ";
        cin>>choice;
        if(choice==1){
            cout<<"Playing Game"<<endl;
            cout<<"Game ended"<<endl;
            g1.setScore();
        }
        else if(choice==2){
            cout<<"Score is: "<<g1.ViewScore()<<endl;
        }
        else{
            cout<<"Game has ended";
            break;
        }
    }
    return 0;
}