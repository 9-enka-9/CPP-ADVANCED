#include<bits/stdc++.h>
using namespace std;

int main(){
	int m; cin >> m;
	vector<int> v(m);
	for(int i = 0; i < m; i++) cin >> v[i];
	int n; cin >> n;
	while(n--){
	    int tt;
	    cin >> tt;
	    if(tt == 1){
			int index,x;
			cin>>index>>x;
			v.insert(v.begin()+index, x);
	    } else {
			int index; cin>>index;
			v.erase(v.begin()+index);
	    }
	}
	
	if (v.empty()) cout<<"EMPTY";
	else 
		for (vector<int>::iterator it=v.begin(); it!=v.end(); it++){
			cout<<*it<<" ";
		}
}
