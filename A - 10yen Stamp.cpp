#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    int z = y - x;
    if(x > y){
        cout << 0;
    }
    else{
        if(z % 10 == 0) {
            cout << (y - x) / 10;
        }
        else
            cout << z / 10 + 1;
    }
    return 0;
}
