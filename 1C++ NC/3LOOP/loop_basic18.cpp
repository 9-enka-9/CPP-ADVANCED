#include<bits/stdc++.h>
using namespace std;

int main (){
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	int tm=0;
	for (int x=a;x<=n;x++){
		for (int y=b;y<=n;y++){
			for (int z=c;z<=n;z++){
				if (x+y+z==n){
					tm++;
				}
			}
		}
	}
	cout<<tm;
}
