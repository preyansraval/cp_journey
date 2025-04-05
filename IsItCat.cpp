#include <iostream>
using namespace std;

bool isCat(string s, int size) {
    if(s[0] != 'm' && s[0] != 'M')  {
        return false;
    }
    for(int i = 0;i < size-1;i++) {
        if(s[i] != s[i+1]) {
            if((s[i] == 'm' || s[i] == 'M') && !(s[i+1] == 'e' || s[i+1] == 'E')){
                return false;
            }   
            else if((s[i] == 'e' || s[i] == 'E') && !(s[i+1] == 'o' || s[i+1] == 'O')) {
                return false;
            }  
            else if((s[i] == 'o' || s[i] == 'O') && !(s[i+1] == 'w' || s[i+1] == 'W'))  {
                return false;
            }
            else if((s[i] == 'w' || s[i] == 'W') && !(s[i+1] == 'w' || s[i+1] == 'W'))  {
                return false;
            }
        }
        if(s[size-1] != 'w' && s[size-1] != 'W') {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int i;
    for(i = 0;i < n;i++) {
        int size;
        string s;
        cin >> size;
        cin >> s;
        if(isCat(s, size)) {
            cout << "YES";
        }  
        else {
            cout << "NO";
        }
    }
    return 0;
}