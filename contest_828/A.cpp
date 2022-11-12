#include <iostream>
#include <map>
#include <vector>

using namespace std;

// https://codeforces.com/contest/1744/problem/A
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, ai;
        bool possible = true;
        string s;
        map<int, vector<int>> reps;

        cin >> n;
        for(int i=0; i<n; i++){
            cin >> ai;
            reps[ai].push_back(i); // Save the index on the map
        }

        cin >> s;

        // Validate
        map<int, vector<int>>::iterator it;

        for(it = reps.begin(); it != reps.end(); it++){
            if(it -> second.size() == 1) continue;
            char expected = s[it -> second[0]];

            for(int i=1; i < it -> second.size(); i++){
                if(s[it -> second[i]] != expected){
                    possible = false;
                    break;
                }
            }

            if(!possible) break;
        }

        possible ? cout << "YES" << endl : cout << "NO" << endl;

    }

    return 0;
}
