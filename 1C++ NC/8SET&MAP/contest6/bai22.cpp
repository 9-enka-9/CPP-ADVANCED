#include<bits/stdc++.h>
using namespace std;

void left(vector<vector<int>> &v){
	int tmp=v[0][0];
	v[0][0]=v[1][0];
	v[1][0]=v[1][1];
	v[1][1]=v[0][1];
	v[0][1]=tmp;
}

void right(vector<vector<int>> &v){
	int tmp=v[0][1];
	v[0][1]=v[1][1];
	v[1][1]=v[1][2];
	v[1][2]=v[0][2];
	v[0][2]=tmp;
}

int main(){
	vector<vector<int>> v;
	for (int i=0;i<2;i++){
		vector<int> x;
		for (int j=0;j<3;j++) {
			int tmp; cin>>tmp;
			x.push_back(tmp);
		}
		v.push_back(x);
	}
	int n; cin>>n;
	for (int i=1;i<=n;i++){
		char x; cin>>x;
		if (x=='L') left(v);
		else right(v);
	}
	for (auto x:v){
		cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
	}
}
