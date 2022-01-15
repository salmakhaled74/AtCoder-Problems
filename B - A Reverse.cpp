#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    string s;
    cin >> s;
    while(l < r) {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
    cout << s;
    return 0;
}

