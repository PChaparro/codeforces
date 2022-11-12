#include <iostream>
#include <vector>
#include <cmath>

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
        int curr_max = 0;
        char current;
        string tl;

        cin >> c >> current >> tl;

        for(int i=0; i<tl.size(); i++){
            if(tl[i] == current){ // Eval distance
                int ng = tl.find('g', i) - i;
                // cout << "Before update: " << ng << endl;

                if (ng < 0){
                    ng = tl.find('g') + tl.size() - i;
                }

                // cout << "After update " << ng << endl;
                curr_max = max(curr_max, ng);
            }
        }

        cout << curr_max << endl;

    }

    return 0;
}
