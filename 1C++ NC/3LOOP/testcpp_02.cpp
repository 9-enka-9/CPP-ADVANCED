#include<bits/stdc++.h>
using namespace std;


bool check(int n){
	int c=0, t=n;
	while (t!=0){
		c++;
		t/=10;
	}
	t=n;
	if (c%2==0){
		return false;
	} else {
		int mid;
		for (int i=1;i<=c/2+1;i++){
			mid=t%10;
			t/=10;
		}
		while (n!=0){
			if (mid<n%10){
				return false;
			}
			n/=10;
		}
		return true;
	}
}

int main () {
	int a,b;
	cin>>a>>b;
	int c=0;
//	cout<<check(121);
	for (int i=a;i<=b;i++){
		if (check(i)) {
			c++;
			cout<<i<<" ";
		}
	}
	if (c==0){
		cout<<"28tech";
	}
}
