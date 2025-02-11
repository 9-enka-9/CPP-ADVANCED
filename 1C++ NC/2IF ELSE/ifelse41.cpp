#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int c=0, sum=0;
	for (int i=0;i<n;i++){
		char kitu;
		cin>>kitu;
		if (('a'<=kitu and kitu<='z') or ('A'<=kitu and kitu<='Z')) c++;
		if ('0'<=kitu and kitu<='9') sum+=kitu-'0';
	}
	cout<<c<<endl<<sum;
}
