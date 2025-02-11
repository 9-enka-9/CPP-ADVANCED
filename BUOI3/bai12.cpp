#include<bits/stdc++.h>
using namespace std;

int main(){
	//remember case 000001937834 -> 7
	
	long long n;
	cin>>n;
	int count;
	while (n!=0) {
		n/=10;
		count++;
	}
	cout<<count;
}
