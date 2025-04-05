#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p;
    cin >> p;
    vector<int> p1(p);
    for(auto& i : p1)
        cin >> i;
    
    int q;
    cin >> q;
    vector<int> p2(q);
    for(auto& i : p2)
        cin >> i;
    
    set<int> res;
    for(int i = 0;i < p;i++)
        res.insert(p1[i]);
    
    for(int i = 0;i < q;i++)
        res.insert(p2[i]);
    
    if(res.size() == n)
        cout << "I become the guy." <<"\n";
    else
        cout << "Oh, my keyboard!" << "\n";
    
    return 0;
}