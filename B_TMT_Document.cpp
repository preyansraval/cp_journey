#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> M, T;
        for(int i = 0;i < n;i++) {
            if(s[i] == 'T')
                T.push_back(i);
            else
                M.push_back(i);
        }

        bool ans = true;
        if(T.size() != 2 * M.size())
            ans = false;
        else {
            int x = M.size();
            for(int i = 0;i < x;i++) {
                if(!(T[i] < M[i] && M[i] < T[i+x])) {
                    ans = false;
                    break;
                }
            }
        }

        if(ans)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}