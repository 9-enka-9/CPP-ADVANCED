#include<bits/stdc++.h>
using namespace std;

vector<char> convert_number(long long n){
	vector<char> res;
	while (n){
		int t=n%16;
		if (t<=9) res.insert(res.begin(), (char)('0'+t));
		else res.insert(res.begin(), (char)('a'+t-10));
		n/=16;
	}
	return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> res = convert_number(n);
        for(char x : res){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}

