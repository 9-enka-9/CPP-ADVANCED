#include<bits/stdc++.h>
using namespace std;

vector<char> convert_number(long long n){
    vector<char> v(64);
    fill(v.begin(), v.end(), '0');
    int index=63;
    while (n and index>=0){
        v[index]=(char)(n%2+'0');
        n/=2;
        index--;
    }
    return v;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
