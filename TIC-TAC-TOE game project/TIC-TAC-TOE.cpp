// TIC-TAC-TOE Game code by Vipul Agarwal.
#include <iostream>
using namespace std;
const int size = 3;
char leaderboard[size][size];
char cP;
void initializegame() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            leaderboard[i][j] = ' ';
        }
    }
}
void getData() {
    cout << "Current leaderboard:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << leaderboard[i][j];
            if (j < size - 1) cout << " | ";        }
        cout << endl;
        if (i < size - 1) cout << "--|---|--" << endl; }
}
bool checkValidity(int a, int b) { return a >= 0 && a < size && b >= 0 && b < size && leaderboard[a][b] == ' '; }
void updatingleaderboard(int a, int b) {
    if (checkValidity(a, b)) {
        leaderboard[a][b] = cP;
    } else {cout << "Invalid move. Try again." << endl; }
}
bool ifWon() {
    for (int i=0;i<size;++i) {
        if(leaderboard[i][0]==cP && leaderboard[i][1]==cP && leaderboard[i][2]==cP) return true;
        if(leaderboard[0][i]==cP && leaderboard[1][i]==cP && leaderboard[2][i]==cP) return true;    }
    if (leaderboard[0][0]==cP && leaderboard[1][1]==cP && leaderboard[2][2]==cP) return true;
    if (leaderboard[0][2]==cP && leaderboard[1][1]==cP && leaderboard[2][0]==cP) return true;
    return false;
}
bool ifDraw() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (leaderboard[i][j] == ' ') return false;
        }
    }
    return true;
}
void switchPlayer() {  cP = (cP == 'X') ? 'O' : 'X'; }
void startMenuGame() {
    initializegame();
    cP = 'X';
    bool win = false, draw = false;
    while (!win && !draw) {
        getData();
        int a, b;
        cout << "Player " << cP << ", Enter your data (row  column): ";
        cin >> a >> b;
        a--; b--; 
        if(checkValidity(a, b)) {
            updatingleaderboard(a, b);
            win = ifWon();
            if(win){
                getData();
                cout<<"Player "<<cP<<" wins!"<<endl;
            }else{
                draw=ifDraw();
                if(draw){
                    getData();
                    cout<<"The game is a draw! No one Win this Game."<<endl;
                }else{switchPlayer();}
            }
        } 
        else { cout<<"Wrong Entry. Please fill again." << endl; }
    }
}
int main() {
    char playAgain;
    do{
        startMenuGame();
        cout<<"Do you want to play again? (y/n): ";
        cin>>playAgain;
    } while(playAgain=='y' || playAgain=='Y');
    return 0;
}
