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
  string s1, s2; cin >> s1 >> s2;
  int c1, c2, length = s1.length(), res = -2;

  for(int i = 0; i < length; i++){
    c1 = int(s1[i]);
    c2 = int(s2[i]);

    // If the letter is uppercase change to the equivalent
    // lowercase letter
    if(c1 < 97) c1 += 32;
    if(c2 < 97) c2 += 32;

    // Compare each position
    if(c1 > c2){
      res = 1;
      break;
    }else if(c2 > c1){
      res = -1;
      break;
    }
  }

  if(res == -2) res = 0;
  cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

