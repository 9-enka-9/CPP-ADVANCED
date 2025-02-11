#include<bits/stdc++.h>
using namespace std;

int main() {
	long long m,n;
	cin>>n>>m;
	// tim so nho nhat de leo len cau thang n buoc
	if (m>n){
		cout<<-1;
	} else {
		long long step=n/2;
		if (n%2!=0) step=n/2+1;
		if (step%m!=0){
			step = step/m*m + m;
		}
		cout<<step;
	}
	
}
