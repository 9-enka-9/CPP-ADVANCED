#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	if (m>n) {
		cout<<-1;
		return 0;
	} else{
		int moves = n/2;
		int du = moves%m;
		if (du==0 and n%2==0);
		else if (du==0 and n%2!=0) {
			moves+=m;
		} else {
			moves+=(m-du);
		}
		cout<<moves;
	}
}
