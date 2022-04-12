#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    string m = s;
    reverse(s.begin(), s.end());
    if(s == m){
        cout << "Yes" << endl;
    }else{
        ll cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '0'){
                cnt++;
            }else{
                break;
            }
        }
        while(cnt--){
        	m.insert(0,"0");
        }
        string x = m;
        reverse(x.begin(), x.end());
        if(x == m){
           cout << "Yes";
        }else{
        	cout << "No";
        }
    }

}
