#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k = n;
    int m = n;
    while(n >= 10){
        n = n / 10;
    }
    int c, sum=0;
    while(m > 0){
        c = m%10;
        sum = sum + c;
        m = m /10;
    }
    int f = sum -(k%10 + n);
    cout << k + (( (k % 10 ) * 100)  + n*10 + f) + ((k%10*10 + n + f*100));
    return 0;
}
