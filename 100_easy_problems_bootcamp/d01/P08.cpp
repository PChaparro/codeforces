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
  int n, L, a, cs, ct, diff, ps = 0, pt = 0, res = 0; cin >> n >> L >> a;
  pii customers[n], curr;


  // Receive
  for(int i = 0; i < n; i++){
    cin >> cs >> ct;
    curr =  make_pair(cs, ct);
    customers[i] = curr;
  }

  // Calc
  for(int i = 0; i < n; i++){
    curr = customers[i];
    diff = abs((ps + pt) - curr.first);
    // cout << "Customer: " << curr.first + curr.second << endl;
    // cout << diff << endl;
    if(diff >= a) res += floor(diff / a);

    // Prepare the next iteration
    ps = curr.first;
    pt = curr.second;
  }

  // Cacl the last segment
  diff = abs((ps + pt) - (L));
  // cout << diff << endl;
  if(diff >= a) res += floor(diff / a);
  cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

