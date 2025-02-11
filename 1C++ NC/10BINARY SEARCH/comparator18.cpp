#include<bits/stdc++.h>
using namespace std;

long long lastpos(int a[], int n,int l, int x){
	int r=n-1;
	long long res=-1;
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]==x){
			res=m;
			l=m+1;
		} else if(a[m]>x) r=m-1;
		else l=m+1;
	}
	return res;
}

long long firstpos(int a[], int n,int l, int x){
	int r=n-1;
	long long res=-1;
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]==x){
			res=m;
			r=m-1;
		} else if(a[m]>x) r=m-1;
		else l=m+1;
	}
	return res;
}

int main(){
	int n,k; cin>>n>>k;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	
	long long c=0;
	for (int i=0;i<n-1;i++){
//		cout<<firstpos(a,n,i+1,a[i]+k)<<" "<<lastpos(a,n,i+1,a[i]+k)<<endl;
		long long begin=firstpos(a,n,i+1,a[i]+k);
		if (begin!=-1) c+=(lastpos(a,n,i+1,a[i]+k)-begin+1);
	}
	cout<<c;
}
