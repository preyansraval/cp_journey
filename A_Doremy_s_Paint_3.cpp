#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(auto& i : a)
            cin >> i;
        
        map<int, int> freq;
        for(int i = 0;i < n;i++)
            freq[a[i]]++;
        
        if(freq.size() == 1) {
            cout << "Yes\n";
        }
        else if(freq.size() == 2) {
            int a = freq.begin()->second;
            int b = freq.rbegin()->second;
            if(a == b-1 || b == a-1 || b == a)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "No\n";

    }
    return 0;
}