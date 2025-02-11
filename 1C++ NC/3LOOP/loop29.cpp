#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin>>n;
	long long s=0;
	for (int i=1;i<=n;i++){
		int x;
		cin>>x;
		if (x%2==0) s+=x;
	}
	cout<<s;
}
