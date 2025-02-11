#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

int main(){
	int n;
	vector<int> nt;
	vector<int> knt; 
	while(cin >> n){
		if (isPrime(n)) nt.push_back(n);
		else knt.push_back(n);		
	}
	for (auto it=nt.rbegin(); it!=nt.rend();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	for (auto x:knt){
		cout<<x<<" ";
	}
}
