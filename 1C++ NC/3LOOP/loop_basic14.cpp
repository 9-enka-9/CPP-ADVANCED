#include<bits/stdc++.h>
using namespace std;

int main (){
	int a,b;
	cin>>a>>b;
	bool flag=false;
	for (int i=min(a,b);i<=max(a,b);i++){
		if (i%2==0 or i%3==0 or i%5==0){
			cout<<i<<" ";
			flag=true;
		}
	}
	if (not flag) cout<<"28tech";
}
