#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			int c=0;
			while (n%i==0){
				c++;
				n/=i;
			}
//			cout<<c<<" ";
			if (c<2) return false;
		}
	}
	if (n!=1) return false;
	else return true;
}

int main (){
	int a,b; cin>>a>>b;
	for (int i=a;i<=b;i++){
//		cout<<i<<" "<<check(i)<<"";
		if (check(i)) cout<<i<<" ";
//		cout<<endl;
	}
}
