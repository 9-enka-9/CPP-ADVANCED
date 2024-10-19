#include<bits/stdc++.h>
using namespace std;

char lower(char x){
	if (x>='a' and x<='z') return x;
	else return x-'A'+'a';
}

int main(){
	int n; cin>>n;
	char a[n+5];
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		if (a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u' or a[i]=='A' or a[i]=='E' or a[i]=='I' or a[i]=='O' or a[i]=='U')
			cout<<lower(a[i])<<" ";
	}

	cout<<endl;
	for (int i=n;i>=1;i--){
		if ( not (a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u' or a[i]=='A' or a[i]=='E' or a[i]=='I' or a[i]=='O' or a[i]=='U'))
			cout<<lower(a[i])<<" ";		
	}

}
