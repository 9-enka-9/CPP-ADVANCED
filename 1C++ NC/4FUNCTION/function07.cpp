#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
    int s=0;
    while (n!=0){
    	s+=n%10;
    	n/=10;
	}
	if (s%10==8) return true;
	return false;
}

int main(){
    long long x; cin >> x;
    if(check(x) == true){
        cout << "28tech\n";
    }
    else{
        cout << "29tech\n";
    }
    return 0;
}

