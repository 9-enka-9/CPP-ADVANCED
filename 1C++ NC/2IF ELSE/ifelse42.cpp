#include<bits/stdc++.h>
using namespace std;

int main() {
	double w,h;
	cin>>w>>h;
	h/=100;
	double bmi=w/(h*h);
	if (bmi>=40) cout<<"Extreme obesity";
	else if (bmi>=35) cout<<"Obesity 2";
	else if (bmi>=30) cout<<"Obesity 1";
	else if (bmi>=25) cout<<"Over weight";
	else if (bmi>=18.5) cout<<"Normal";
	else cout<<"Under weight";
}
