#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >>  a;
    cin >> b;

    if(a % b == 0 || b % a == 0)
        cout << "Multiples";
    else
        cout << "No Multiples"; 
    return 0;
}