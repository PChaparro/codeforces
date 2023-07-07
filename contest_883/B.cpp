#include<iostream>
using namespace std;

// useful
#define ll long long
#define umap unordered_map
bool multi = true;

void solve(){
  // Receive the board
  char board[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin >> board[i][j];
    }
  }

  // Check if a player won
  char players[3] = {'X', 'O', '+'};

  for(int i = 0; i < 3; i++){
    char current_player = players[i];

    bool vertical_win =
      board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[2][0] == current_player ||
      board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[2][1] == current_player ||
      board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[2][2] == current_player;

    bool horizontal_win =
      board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][2] == current_player ||
      board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][2] == current_player ||
      board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][2] == current_player;

    bool diagonal_win =
      board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == current_player||
      board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == current_player;

    if(vertical_win || horizontal_win || diagonal_win){
      cout << current_player << endl;
      return;
    }
  }

  cout << "DRAW" << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if (multi)cin>>t;
    while(t--)solve();
    return 0;
}
