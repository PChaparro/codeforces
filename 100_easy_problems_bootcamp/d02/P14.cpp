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
#define uset unordered_set
typedef pair<int,int> pii;

bool multi=false;

void solve(){
  int divisors[12] = {4, 7, 44, 47, 74, 444, 447, 474, 477, 777, 774, 744};
  int n; cin >> n;
  bool flag = false;

  for(int i = 0; i < 12; i++){
    if(n % divisors[i] == 0){
      flag = true;
      break;
    }
  }

  flag == true ? cout << "YES" : cout << "NO";
  cout << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

