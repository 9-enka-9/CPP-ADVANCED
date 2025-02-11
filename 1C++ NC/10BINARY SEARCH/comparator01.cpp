#include<bits/stdc++.h>
using namespace std;

int cntchan(int n){
	int c=0;
	while (n){
		if (n%10%2==0) c++;
		n/=10;
	}
	return c;
}

int cntle(int n){
	int c=0;
	while (n){
		if (n%10%2!=0) c++;
		n/=10;
	}
	return c;
}

bool cmp1(int a, int b){
	int ta=cntchan(a), tb=cntchan(b);
	if (ta!=tb) return ta<tb;
	else return a<b;
}

bool cmp2(int a, int b){
	int ta=cntle(a), tb=cntle(b);
	return ta<tb;
}

int main(){
	int n; cin>>n;
	int a[n], b[n];
	for (int i=0;i<n;i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	
	sort(a, a+n, cmp1);
	for (int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
	stable_sort(b, b+n, cmp2);
	for (int i=0;i<n;i++) cout<<b[i]<<" ";	
}
