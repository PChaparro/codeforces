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

// Globals
bool multi=false;
array<bool, int(pow(10, 7))> sieve;

void solve(){
  int n, cn; cin >> n;
  sieve.fill(true);
  vector<int> primes;


  // Calc the sieve
  for(int i = 1; i <= n - 1; i++){
    if(sieve[i] == false) continue;
    cn = i + 1;
    primes.push_back(cn);

    for(int j = cn * 2; j <= n; j += cn){
      sieve[j - 1] = false;
      // cout << "J: " << j << " J - 1: " << j - 1 << endl;
    }
  }

  // Answer
  cout << primes.size() << endl;

  for(int i = 0; i < primes.size(); i++){
    cout << primes[i];
    i == primes.size() -1 ? cout << endl : cout << " ";
  }

}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

