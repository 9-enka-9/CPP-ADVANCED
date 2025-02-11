#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	char c;
	cin.get(c);
	if ('A'<=c and c<='Z'){
		cout<<"UPPER";
	} else if ('a'<=c and c<='z'){
		cout<<"LOWER";
	} else if ('0'<=c and c<='9'){
		cout<<"DIGIT";
	} else {
		cout<<"SPECIAL";
	}
}
