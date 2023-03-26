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
  ll A, min_perimeter; cin >> A;

  for(ll i = 1; i <= sqrt(A); i++){
    if(A % i == 0){
      ll second_divisor = A / i, current_perimeter = 2 * (i + second_divisor);
      // cout << i << " " << second_divisor << endl;
      if(i == 1) min_perimeter = current_perimeter;
      else {
        min_perimeter = min(min_perimeter, current_perimeter);
      }
    }
  }

  cout << min_perimeter << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

