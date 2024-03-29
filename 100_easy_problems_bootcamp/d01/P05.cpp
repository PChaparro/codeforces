#include<bits/stdc++.h>
using namespace std;

// debug util
#ifdef DEBUG
	#define deb(a) cerr << #a << "= " << a << endl
	#define deb2(a,b) cerr << a << " : " << b << endl;
	#define deb3(a,b,c) cerr << a << " , " << b << " , " << b << endl;
#else
	#define de(a)
	#define de2(a,b)
	#define de3(a,b,c)
#endif

// useful
#define ll long long
#define lld long double
#define umap unordered_map
typedef pair<int,int> pii;

bool multi=false;

void solve(){
  string players; cin >> players;
  int length = players.length(), current_streak = 1;
  bool is_dangerous = false;

  for(int i = 1; i < length; i++){
    if(players[i] == players[i - 1]) current_streak++;
    else current_streak = 1;

    if(current_streak == 7) {
      is_dangerous = true;
      break;
    }
  }

  is_dangerous ? cout << "YES" : cout << "NO";
  cout << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

