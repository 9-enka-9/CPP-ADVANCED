#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	int year, week, day;
	year = n/365;
	n=n%365;
	week = n/7;
	n=n%7;
	day = n;
	cout<<year<<" "<<week<<" "<<day;
}
