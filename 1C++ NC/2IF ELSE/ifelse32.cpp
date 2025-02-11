#include<bits/stdc++.h>
using namespace std;

int main(){
	int k2, k3, k5, k6;
	cin>>k2>>k3>>k5>>k6;
	int k256 = min({k2,k5,k6});
	k2-=k256;
	int k32 = min({k3,k2});
	cout<<256ll*k256+k32*32ll;
}
