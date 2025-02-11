#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t>>n;
	if (t>0 and t<=12 and n>0){
		switch (t){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				cout<<31;
				break;
			case 4: case 6: case 9: case 11:
				cout<<30;
				break;
			default:
				if (n%400==0 or (n%4==0 and n%100!=0)){
					cout<<29;
				} else {
					cout<<28;
				}
		}
	} else {
		cout<<"INVALID";
	}
}
