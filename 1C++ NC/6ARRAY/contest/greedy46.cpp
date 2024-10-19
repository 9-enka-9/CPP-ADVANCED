#include<bits/stdc++.h>
using namespace std;
#define ll long long
int s[6]={0};

void update(int n){
	for (ll i=2;i<=5;i++){
		if ((i==2 or i==5) and n%i==0){
			while (n%i==0){
				s[i]++;
				n/=i;
			}
			continue;
		}
		while (n%i==0) n/=i;
	}
}

int main(){
	int n; cin>>n;
	int a[n+5];
	for (int i=1;i<=n;i++){
		cin>>a[i];
		update(a[i]);
	} 
	cout<<min(s[2],s[5]);
}

