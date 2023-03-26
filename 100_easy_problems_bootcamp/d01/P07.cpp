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
  string word, res = ""; cin >> word;
  int length = word.length();
  char cc;

  for(int i = 0; i < length; i++){
    cc = word[i];

    // Transform the letter to lowercase if needed
    if(int(cc) < 97)  cc += 32;


    // Ignore if it's a vowel
    if(cc == 'a' || cc == 'e' || cc == 'i' || cc == 'o' || cc == 'u' || cc == 'y') continue;

    // Add "." before any consonant
    res += ".";
    res += cc;
  }

  cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    if(multi)cin>>t;
    while(t--)solve();
    return 0;
}

