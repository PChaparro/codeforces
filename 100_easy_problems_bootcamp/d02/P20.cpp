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
  int n, x, fn, sn; cin >> n >> x;
  uset<int> divisors;

  for(int i = 1; i <= sqrt(x); i++){
    if(x % i == 0){
      fn = i;
      sn = x / i;

      if(fn <= n && sn <= n){
        divisors.insert(fn);
        divisors.insert(sn);
      }
    }
  }

  cout << divisors.size() << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

