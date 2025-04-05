#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int maxMembers(string arr[], int k, int n) {
    string memberOne = arr[0];
    for(int i = 1;i < n;i++) {
        for(int j = 0;j < k;j++) {
            if(arr[i] != "" && arr[i][j] != memberOne[j]) {
                arr[i] = "";
            }
        }
    }
    int count = 1;
    for(int i = 1;i < n;i++) {
        if(arr[i] != "") {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    int n;
    int k;
    cin >> t;
    while(t-- > 0) {
        int k;
        cin >> n >> k;
        string arr[n];
        for(int i = 0;i < n;i++) {
            cin >> arr[i];
        }
        cout << maxMembers(arr, k, n) << endl;
    }
    return 0;
}