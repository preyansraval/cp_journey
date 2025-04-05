#include <bits/stdc++.h>
using namespace std;

bool canMakeNonDecreasing(vector<int> a) {
    int n = a.size();
    long long min_possible = a[0];  // The first element sets the initial "minimum" constraint
    
    for (int i = 1; i < n; i++) {
        // We want a[i] to be >= min_possible for the sequence to remain non-decreasing
        if (a[i] < min_possible) {
            return false; // If a[i] is less than the current possible minimum, it's impossible
        }
        
        // Update the minimum possible value for the next element
        min_possible = min(min_possible, a[i]);
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (canMakeNonDecreasing(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
