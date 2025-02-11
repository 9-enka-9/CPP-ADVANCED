#include<bits/stdc++.h>
using namespace std;

//Ki?m tra t?t c? các ch? s? c?a n là s? nguyên t?
bool csnt(int n){
	while (n){
		if (n%10!=2 and n%10!=3 and n%10!=5 and n%10!=7){
			return false;
		}
		n/=10;
	}
	return true;
}

bool nt(int n){
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			return false;
		}
	}
	return n>=2;
}

int main(){
    int a, b; cin >> a >> b;
    int c=0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)){
            c++;
        }
    }
    cout<<c;
}

