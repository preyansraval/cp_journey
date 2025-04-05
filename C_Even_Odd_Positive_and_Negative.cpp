#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int nums[N];
    int even = 0, odd = 0, pos = 0, neg = 0;
    for(int i = 0;i < N;i++) {
        cin >> nums[i];
    }

    for(int i = 0;i < N;i++) {
        if(nums[i] > 0) {
            pos++;
        }
        else if(nums[i] < 0) {
            neg++;
        }

        if(nums[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    return 0;
}