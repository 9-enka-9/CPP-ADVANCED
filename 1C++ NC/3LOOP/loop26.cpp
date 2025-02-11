#include<bits/stdc++.h>
using namespace std;

int main () {
	int a,b,n;
	cin>>a>>b>>n;
	bool check=false;
	for (int i=0;i<=n/a;i++){
		if ((n-a*i)%b==0){
			check=true;
			break;
		}
	}
	if (check) cout<<"YES";
	else cout<<"NO";
}
