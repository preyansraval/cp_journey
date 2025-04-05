#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    map<char, int> freq;
    for(int i = 0;i < n;i++) {
        freq[s[i]]++;
    }

    string left;
    int oddCount = 0;
    for(auto i : freq) {
        if(i.second % 2 != 0)
            oddCount++;

        if(oddCount > 1) {
            cout << "NO SOLUTION";
            return 0;
        }
    }
    
    char extra = '~';
    for(auto i : freq) {
        for(int j = 0;j< i.second/2;j++) {
            left.push_back(i.first);
        }

        if(i.second % 2)
            extra = i.first;
    }
    string right = left;
    reverse(right.begin(), right.end());

    if(extra != '~')
        cout << left + extra + right;
    else
        cout << left + right;
    return 0;
}