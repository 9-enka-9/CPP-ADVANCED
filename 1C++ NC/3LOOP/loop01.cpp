#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long s=0;
//	cout<< (n*(2+(n-1)))/2;
	for (int i=1;i<=n;i++){
		s+=i;
	}
	cout<<s;
}
