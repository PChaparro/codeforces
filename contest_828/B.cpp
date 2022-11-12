#include <iostream>

using namespace std;

// https://codeforces.com/contest/1744/problem/B
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long int csum = 0;
        int n, q, ni, nodd, neven, qt, qx;
        nodd = neven = 0;
        cin >> n >> q;

        while(n--){ // Receive and "separate"
            cin >> ni;
            ni % 2 == 0 ? neven++ : nodd++;
            csum += ni;
        }

        // cout << "\nEven " << neven << " Odd" << nodd << endl;

        while(q--){
            cin >> qt >> qx;

            if(qt == 0){ // Affect evens
                csum += neven * qx;
                if (qx % 2 != 0){
                    nodd += neven;
                    neven = 0;
                }
            }
            else{ // Affect odds
                csum += nodd * qx;
                if(qx % 2 != 0){
                    neven += nodd;
                    nodd = 0;
                }
            }

            cout << csum << endl;
        }

    }

    return 0;
}
