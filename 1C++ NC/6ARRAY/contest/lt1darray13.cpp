#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[50005], n=1;
	while (cin>>a[n]){
		n++;
	}
	for (int i=n-1;i>=1;i--){
		cout<<a[i]<<" ";
	}
}
