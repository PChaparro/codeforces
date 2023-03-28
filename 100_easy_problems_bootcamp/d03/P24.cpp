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
  int n, aux; cin >> n;
  int ns[n];

  for(int i = 0; i < n; i++){
    cin >> ns[i];
  }

  // Bubble sort
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i; j++){
      if(ns[j] > ns[j + 1]){
        // Swap
        aux = ns[j + 1];
        ns[j + 1] = ns[j];
        ns[j] = aux;
      }
    }

    // After each iteration, print the array
    for(int j = 0; j < n; j++){
      cout << ns[j];
      j != n - 1 ? cout << " " : cout << endl;
    }
  }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

