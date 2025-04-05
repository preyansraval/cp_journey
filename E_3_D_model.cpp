#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1(3);
    vector<int> v2(3);

    for(auto & i : v1)
        cin >> i;
    
    for(auto & i : v2)
        cin >> i;
    
    int count = 0;
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 3;j++) {
            if(v1[i] == v2[j]) 
                count++;
        }
    }

    if(count >= 2)
        cout << 4 << "\n";
    else
        cout << 6 << "\n";
}