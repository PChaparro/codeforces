#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// useful
#define ll long long
#define umap unordered_map
bool multi = true;

void solve(){
  int n, m, h, cp;
  cin >> n >> m >> h;

  // Receive the "ai predictions"
  vector<vector<int>> predictions;

  for(int i = 0; i < n; i++){
    vector<int> cpp;

    for(int j = 0; j < m; j++){
      cin >> cp;
      cpp.push_back(cp);
    }

    sort(cpp.begin(), cpp.end());
    predictions.push_back(cpp);
  }

  // Calc the points and predictions fe participant
  int rudolf_points, rudolf_penality, cp_points, cp_penality, cp_time;
  int res = 1;

  for(int i = 0; i < n; i++){
    cp_points = 0;
    cp_time = 0;
    cp_penality = 0;

    for(int j = 0; j < m; j++){
        if (cp_time + predictions[i][j] <= h) {
          cp_points++;
          cp_penality += cp_time + predictions[i][j];
          cp_time += predictions[i][j];
        }else{
          break;
        }
    }

    // cout << "Points " << cp_points << " penality " << cp_penality << " time " << cp_time << endl;

    // Save rudolf ponts
    if(i == 0){
      rudolf_points = cp_points;
      rudolf_penality = cp_penality;
    }else if(
             cp_points > rudolf_points ||
             cp_points == rudolf_points && cp_penality < rudolf_penality
             ){
      res++;
    }
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
