#include <bits/stdc++.h>
using namespace std;

void solve(string s, string s1, string s2) {
    int i = 0, j = 0, k = 0;
    int n1 = s.length(), n2 = s1.length(), n3 = s2.length();
    bool forw = false, back = false;

    while(i < n1 && j < n2) {
        if(s[i] == s1[j])
            j++;
        i++;
    }

    while(i < n1 && k < n3) {
        if(s[i] == s2[k])
            k++;
        i++;
    }

    if(i == n1 && j == n2 && k == n3)
        forw = true;
    
    reverse(s.begin(), s.end());
    i = 0, j = 0, k = 0;

    while(i < n1 && j < n2) {
        if(s[i] == s1[j])
            j++;
        i++;
    }

    while(i < n1 && k < n3) {
        if(s[i] == s2[k])
            k++;
        i++;
    }

    if(i == n1 && j == n2 && k == n3)
        back = true;

    
    if(forw && back)
        cout << "both" << "\n";
    else if(forw)
        cout << "forward" << "\n";
    else if(back)
        cout << "backward" << "\n";
    else
        cout << "fantasy" << "\n";
}

int main() {
    string s, a, b;
    cin >> s;
    cin >> a;
    cin >> b;

    solve(s, a, b);
    return 0;
}