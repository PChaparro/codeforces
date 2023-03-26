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
  int N; cin >> N;
  int numbers[N];

  for(int i = N - 1; i >= 0; i--){
    cin >> numbers[i];
  }

  for(int i=0; i < N; i++){
    cout << numbers[i];
    i == N - 1 ? cout << endl : cout << " ";
  }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}
