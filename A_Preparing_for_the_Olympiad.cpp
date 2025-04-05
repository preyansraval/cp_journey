#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i = 0;i < n;i++)
            cin >> a[i];
        for(int i = 0;i < n;i++)
            cin >> b[i];
        
        int l = 0, r = 1;
        int suma = 0, sumb = 0;
        while(l < n && r < n) {
            if(a[l] > b[r]) {
                suma += a[l];
                sumb += b[r];
            }
            l++;
            r++;
        }
        suma = suma + a[l];
        cout << suma - sumb << endl;
    }
}