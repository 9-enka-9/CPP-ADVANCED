#include<bits/stdc++.h>
using namespace std;

int main(){
	string can[10] = {"CANH", "TAN", "NHAM", "QUY", "GIAP", "AT", "BINH", "DINH", "MAU", "KY"};
	string chi[12]={"TY", "SUU", "DAN", "MAO", "THIN", "TI", "NGO", "MUI", "THAN", "DAU", "TUAT", "HOI"};
	int n;
	cin>>n;
	cout<<can[n%10]<<" "<<chi[(n+8)%12];
}
