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
  int n, n2; cin >> n;
  n2 = n % 2 == 0 ? n / 2 : (n / 2) -1;

  // First line
  n % 2 == 0 ? cout << n2 : cout << n2  + 1;
  cout << endl;

  // Second line
  for(int i = 0; i < n2; i++){
    cout << 2;
    if(i != n2 - 1) cout << " ";
  }

   n % 2 == 0 ? cout << endl : cout << " " << 3 << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

