#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// https://codeforces.com/contest/1744/problem/C
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int c;
        char current;
        string tl;
        cin >> c >> current >> tl;

        if (current == 'g') {
            cout << 0 << endl;
        }else{
            int curr_max = 0;
            int dist;
            vector<int> greens;
            vector<int>::iterator up;

            for (int i=0; i<tl.size(); i++){ // Get greens indexes
                if (tl[i] == 'g')
                    greens.push_back(i);
            }

            for (int i=0; i<tl.size(); i++){ // Get distances
                if (tl[i] == current){
                    up = upper_bound(greens.begin(), greens.end(), i);

                    if(up != greens.end())
                        dist = *up - i;
                    else{
                        dist = greens[0] + tl.size() - i;
                    }

                    curr_max = max(curr_max, dist);
                    // cout << "After update: " << dist << endl;
                }
            }

            cout << curr_max << endl;
        }

    }

    return 0;
}
