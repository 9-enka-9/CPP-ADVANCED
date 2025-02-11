#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin>>n;
	int m=(n-1)*2, s=1;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cout<<" ";
		}
		for (int j=1;j<=s;j++){
			cout<<"* ";
		}
		m-=2;
		s+=2;
		cout<<endl;
	}
}
