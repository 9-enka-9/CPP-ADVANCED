#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return false;
	}
	return true;
}

vector<int> prime_list(vector<int> v){
	vector<int> res;
    vector<int>::iterator it;
    for (it=v.begin();it!=v.end();it++){
    	if (isPrime(*it)){
    		res.push_back(*it);
		}
	}
	return res;
}

void nhap(vector<int> &v){
	int n; cin>>n;
	for (int i=0;i<=n-1;i++){
		int x;
		cin>>x;
		v.push_back(x);		
	}

}

void in(vector<int> v){
	for (int x:v){
		cout<<x<<" ";
	}
}

int main(){
    vector<int> v;
    nhap(v); // Hàm nh?p vi?t ntn?
    vector<int> res = prime_list(v);
    in(res);
}
