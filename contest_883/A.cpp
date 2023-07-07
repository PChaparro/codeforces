#include<iostream>
using namespace std;

// useful
#define ll long long
#define umap unordered_map
bool multi = true;

void solve(){
  int n, h, l;
  int res = 0;
  cin >> n;

  int hs[n], ls[n];

  for(int i = 0; i < n; i++){
    cin >> h >> l;
    if (h > l) res++;
  }


  cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if (multi)cin>>t;
    while(t--)solve();
    return 0;
}
