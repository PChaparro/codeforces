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
  string sum; cin >> sum;
  int cn, length = sum.length();
  vector<int> numbers;

  for(int i = 0; i < length; i += 2){
    cn = sum[i] - '0';
    numbers.push_back(cn);
  }

  sort(numbers.begin(), numbers.end());

  for(int i = 0; i < numbers.size(); i++){
    cout << numbers[i];
    i != numbers.size() - 1 ? cout << '+' : cout << endl;
  }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

