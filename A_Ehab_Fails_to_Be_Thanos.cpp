#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void reverse(vector<ll>& a, int l, int r) {
    while(l < r) {
        ll temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }
}

bool isValid(vector<ll>& a, int n) {
    ll sum1 = 0, sum2 = 0;
    for(int i = 0, j = n; i < n && j < 2*n;i++, j++) {
        sum1 += a[i];
        sum2 += a[j];
    }

    return sum1 != sum2;
}

void print(vector<ll>& a) {
    for(int i = 0;i < a.size();i++)
        cout << a[i] << " ";
}

int main() {
    int n;
    cin >> n;
    vector<ll> a(2*n, 0);
    for(auto& i : a)
        cin >> i;
    
    sort(a.begin(), a.end());

    if(isValid(a, n)) {
        print(a);   
    }
    else {
        cout << -1;
    }
}