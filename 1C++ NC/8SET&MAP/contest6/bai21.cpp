#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++)
		if (n%i==0) return false;
	return true;
}

int main(){
	int n; cin>>n;
	vector<vector<int>> v;
	for (int i=1;i<=n;i++){
		int a,b,c; cin>>a>>b>>c;
		if (isPrime(a+b+c)){
			vector<int>	x(3);
			x[0]=a;x[1]=b;x[2]=c;
			v.push_back(x);			
		}
	} 
	if (v.size()>0)
		for (auto it=v.rbegin();it!=v.rend();it++){
			cout<<(*it)[0]<<" "<<(*it)[1]<<" "<<(*it)[2]<<endl;
		}
	else cout<<"28tech";
}
