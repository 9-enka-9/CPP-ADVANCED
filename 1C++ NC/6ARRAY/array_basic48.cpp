#include<bits/stdc++.h>
using namespace std;

int maxIncreasing(int a[], int n){
	int size=1;
	int maxsize=1;
	for (int i=0;i<n-1;i++){
		if (a[i+1]>a[i]){
//			cout<<size<<" * "<<a[i]<<" "<<a[i+1]<<" & ";
			size++;
		} else {
			if (size>maxsize)
				maxsize=size;
			size=1;
		}
	}
	return maxsize;
}

int main(){
	int t; cin>>t;
	for (int tc=0;tc<t;tc++){
		int n; cin>>n;
		int a[n+1]; 
		for (int i=0;i<n;i++) cin>>a[i];
		a[n]=-1; n++;
		
		cout<<"Test #"<<tc+1<<" :"<<endl;
		int m=maxIncreasing(a,n);
		cout<<m<<endl;
		int size=1;
		for (int i=0;i<n-1;i++){
			if (a[i+1]>a[i]) {
				size++;
//				cout<<a[i+1]<<" "<<a[i]<<" & ";
			}
			else {
//				cout<<size<<" * ";
				if (size==m){
					for (int j=i-m+1;j<i+1;j++){
						cout<<a[j]<<" ";
					}
					cout<<endl;
				}
				size=1;
			}
		}
	}
}
