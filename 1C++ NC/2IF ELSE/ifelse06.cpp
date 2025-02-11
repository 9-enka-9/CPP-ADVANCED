#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	//1
	if (n%2==0){
		cout<<"YES";
	} else{
		cout<<"NO";
	}
	cout<<endl;
	//2
	if (n%3==0 && n%5==0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	cout<<endl;
	//3
	if (n%3==0 && n%7!=0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	cout<<endl;
	//4
	if (n%3==0 or n%7==0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	cout<<endl;
	//5
	if (n>30 and n<50){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	cout<<endl;
	//6
	if (n>=30 and (n%2==0 or n%3==0 or n%5==0)){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	cout<<endl;
	//7
	if ((n>=10 and n<=99) and (n%10==2 or n%10==3 or n%10==5 or n%10==7)){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	cout<<endl;
	//8
	if (n<=100 and n%23==0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	cout<<endl;
	//9
	if (n<10 or n>20){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	cout<<endl;
	//10
	if (n%10%3==0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}
