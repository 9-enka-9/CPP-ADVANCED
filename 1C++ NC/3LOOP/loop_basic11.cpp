#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int hoa=0, th=0, so=0,db=0;
	for (int i=0;i<n;i++){
		char c;
		cin>>c;
		if ('a'<=c and c<='z'){
			th++;
		} else if ('A'<=c and c<='Z'){
			hoa++;
		} else if ('0'<=c and c<='9'){
			so++;
		} else {
			db++;
		}
	}
	cout<<th<<" "<<hoa<<" "<<so<<" "<<db;
}
