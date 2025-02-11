#include<bits/stdc++.h>
using namespace std;

bool p[(int)(1e7+5)];

void sang(){
	fill(p,p+(int)1e7+5,true);
	for (int i=2;i*i<=1e7;i++){
		if (p[i]){
			for (int j=i*i;j<=1e7;j+=i){
				p[j]=false;
			}
		}
	}
}

bool maxend(int n){
	int t=n%10, m=n%10;
	while (n){
		m=max(n%10,m);
		n/=10;
	}
	return t==m;
}

int main(){
	sang();
	int n; cin>>n;
	int c=0;
	for (int i=2;i<=n;i++){
		if (p[i] and maxend(i)){
			c++;
			cout<<i<<" ";
		}
	}
	cout<<endl<<c;
}
