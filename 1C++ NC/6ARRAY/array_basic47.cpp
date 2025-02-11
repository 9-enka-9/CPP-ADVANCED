#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
bool prime[MAX];

void sang(){
	prime[1]=prime[0]=true;
	for (int i=2;i*i<=MAX;i++)
		if (not prime[i])
			for (int j=i*i;j<MAX;j+=i)
				prime[j]=true;
}

int main(){
	sang();
	int n; cin>>n;
	int a[n];
	long long prefix[n+1];
	prefix[0]=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		prefix[i+1]=prefix[i]+a[i];
	} 
	
	long long s=0;
	int  le=0, ri=0, length=0;
	for (int l=0;l<n;l++){
		if (not prime[a[l]]){
			for (int r=l+1;r<n;r++){
				if (prime[a[r]]) {
					long long t=prefix[r]-prefix[l];
					int size=r-l;
					if (size>length){
						length=size;
						le=l; ri=r-1;
						s=t;
					} else if (size==length){
						if (t>s){
							length=size;
							le=l; ri=r-1;
							s=t;
						}
					}
					l=r-1;
					break;
				}
				if (r==n-1) l=n-2;
			}
		}
	}
	
	if (s==0 and not prime[a[0]]){
		cout<<n<<endl;
		for (int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	} else if (s==0 and prime[a[0]]) cout<<"NOT FOUND";
	else {
		cout<<length<<endl;
		for (int i=le;i<ri+1;i++){
			cout<<a[i]<<" ";
		}
	}
}
