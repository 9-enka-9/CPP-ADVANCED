#include<bits/stdc++.h>
using namespace std;

int ucln(int n, int m){
	while (m!=0){
		int t=n%m;
		n=m;
		m=t;
	}
	return n;
}


int main(){
	int a,b; cin>>a>>b;
	for (int i=a;i<=b;i++){
		for (int j=i+1;j<=b;j++){
			int x=ucln(i,j);
//			cout<<"("<<i<<","<<j<<") "<<x<<endl;
			if (x==1){
				cout<<"("<<i<<","<<j<<")\n";
			}
		}
	}
}
