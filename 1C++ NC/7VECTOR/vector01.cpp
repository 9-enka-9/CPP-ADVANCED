#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int n; cin>>n;
	for(int i = 0; i < n; i++){
	    int tt; cin >> tt;
	    if(tt == 1){
	    	int x;
	    	cin>>x;
	        v.push_back(x);
	    }
	    else if(tt == 2){
	        if (v.size()>0){
	        	v.pop_back();
			}
	    }
	}
	if (v.size()==0) cout<<"EMPTY";
	else {
		vector<int>::iterator it;
		for (it=v.begin();it!=v.end();it++){
			cout<<*it<<" ";
		}
	}	
}
