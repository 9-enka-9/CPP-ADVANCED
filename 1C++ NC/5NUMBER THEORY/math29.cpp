#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	int t=0, tmp=n,s=0;
	bool contain6=false;
	while (tmp){
		t=t*10+tmp%10;
		s+=tmp%10;
		if (tmp%10==6) contain6=true;
		tmp/=10;
	}
	return t==n and s%10==8 and contain6;
	
}

int main(){
	int a,b; cin>>a>>b;
	for (int i=a;i<=b;i++){
		if (check(i)) cout<<i<<" ";
	}
}
