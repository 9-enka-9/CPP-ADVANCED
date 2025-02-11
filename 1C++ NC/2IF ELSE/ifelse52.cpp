#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long s=(28*27/2)*(long long)(n/28);
	for (int i=1;i<=n%28;i++){
		s+=i%28;
	}
	cout<<s;
}
