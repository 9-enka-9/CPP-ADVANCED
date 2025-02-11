#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int bang=1;bang<=n;bang++){
		for (int i=1;i<=10;i++){
			cout<<bang<<" x "<<i<<" = "<<bang*i<<endl;
		}
		cout<<endl;
	}
}
