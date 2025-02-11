#include<bits/stdc++.h>
using namespace std;
int l=-1, r=-1;
int a[int(1e6)+5];

void lat(int a[]){
	r--;
//	cout<<l<<" "<<r;
	for (int i=l;i<=(l+r)/2;i++){
		int t=a[i];
		a[i]=a[r-i+l];
		a[r-i+l]=t;
	}
}

int main(){
	int n; cin>>n;
	bool stop=false, stop2=false;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (i>0 and a[i-1]>a[i] and not stop){
			stop=true;
			l=i-1;
		} 
		if (not stop2 and l!=-1 and a[i]>a[i-1]){
			r=i;
			stop2=true;
		} 
	}
	if (stop and r==-1) r=n;
	if (l==-1 or l==r){
		cout<<"29tech";
		return 0;
	} else {
		lat(a);
//		cout<<endl;
		for (int i=1;i<n;i++){
//			cout<<a[i]<<" "<<b[i]<<" ";
			if (a[i]<=a[i-1]){
				cout<<"29tech";
				return 0;
			}
//			cout<<endl;
		}
		cout<<"28tech";
	}
}
