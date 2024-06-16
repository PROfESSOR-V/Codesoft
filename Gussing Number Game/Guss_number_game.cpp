#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    cout<<"\n\t\t\tWelcome babe to Guess_The_Number game!"<<endl;
    cout << "Dear guess a number between 1 and 100. You'll have limited choices based on the level you choose; easy contain 10, medium contain 7, difficult contain 5. Good Luck DEAR !!"<<endl;
    while (true) {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy level !\t";
        cout << "2 for medium level !\t";
        cout << "3 for difficult level !\t";
        cout << "0 for exit !\n" << endl;
        int c;
        cout << "Enter the no : ";
        cin >> c;
        srand(time(0));
        int r = 1 + (rand() % 100);
        int p;
        if (c == 1) {
            cout<<"\nCongratulation you get 10 attempts, enter a no. between 1 to 100";
            int x = 10;
            for (int i=1;i<=10;i++) {
                cout<<"\nEnter the no. : ";
                cin>>p;
                if(p==r){
                    cout<<"Great! You won, "<<p<< " is the real number"<<endl;
                    cout<<"\t\t\t Have a mice day! Thanku for playing..."<<endl;
                    cout<<"Wanna to play again ?? \n\n"<<endl;
                    break;
                }
                else {
                    cout<<"Opps!,"<<p<<" Sorry it's wrong!!\n";
                    if(p>r){cout<<"May be it's smaller than you choose!!"<<endl;}
                    else{cout<<"May be it's bigger than you choose!!\n"<<endl;}
                    x--;
                    cout<<"Warning !! "<<x<<" attemps remains."<<endl;
                    if(x==0) {
                        cout<<"You Lose!!, real no was "<<r<<"!!\n\n";
                        cout << "Wanna to play again ?? \n\n";
                    }
                }
            }
        }
        else if (c==2) {
            cout<<"\nCongratulation you get 7 attempts, Enter a no. b/w 1 to 100.";
            int x=7;
            for (int i=1;i<=7;i++) {
                cout<<"\n\n Enter the no. : ";
                cin>>p;
                if(p==r){
                    cout<<"Great! You won, "<<p<<" is the real no."<<endl;
                    cout<<"\t\t\t Have a mice day! Thanku for playing..."<<endl;
                    cout<<"Wanna to play again ?? \n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Opps!,"<<p<<" Sorry it's wrong!!\n";
                    if(p>r){cout<<"May be it's smaller than you choose!!"<<endl;}
                    else{cout<<"May be it's bigger than you choose!!\n"<<endl;}
                    x--;
                    cout<<"Warning !! "<<x<<" attemps remains."<<endl;
                    if(x==0) {
                        cout<<"You Lose!!, real no. was "<<r<<"!!\n\n";
                        cout << "Wanna to play again ?? \n\n";
                    }
                }
            }
        }
        else if(c==3){
            cout<<"\nCongratulation you get 5 attempts, enter a no. b/w 1 to 100.";
            int x=5;
            for(int i=1;i<=5;i++){
                cout<<"\n\nEnter the no. : ";
                cin>>p;
                if(p==r){
                    cout<<"Great! You won, "<<p<<" is the real no."<<endl;
                    cout<<"\t\t\t Have a mice day! Thanku for playing..."<<endl;
                    cout<<"Wanna to play again ?? \n\n"<<endl;
                    break;
                }
                else {
                    cout<<"Opps!,"<<p<<" Sorry it's wrong!!\n";
                    if(p>r){cout<<"May be it's smaller than you choose!!"<<endl;}
                    else{cout<<"May be it's bigger than you choose!!\n"<<endl;}
                    x--;
                    cout<<"Warning !! "<<x<<" attemps remains."<<endl;
                    if(x==0) {
                        cout<<"You Lose!!, real no. was "<<r<<"!!\n\n";
                        cout << "Wanna to play again ?? \n\n";
                    }
                }
            }
        }
        else if(c==0){
            exit(0);
        }
        else{
            cout<<"Wrong choice entered, please enter a valid choice to play the game !!"<<endl;
        }
    }
    return 0;
}
