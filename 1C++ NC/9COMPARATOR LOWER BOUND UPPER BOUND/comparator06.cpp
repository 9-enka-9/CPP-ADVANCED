#include<bits/stdc++.h>
using namespace std;

int cnt(int n){
	int c=0;
	while (n){
		if (n%10%2!=0) c++;
		n/=10;
	}
	return c;
}

bool cmp(int x, int y){
	if (cnt(x)!=cnt(y))
		return cnt(x)>cnt(y);
	else return x<y;
}


int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n, cmp);
	for (int i=0;i<n;i++) cout<<a[i]<<" ";
}
