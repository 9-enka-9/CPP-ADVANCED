#include<bits/stdc++.h>
using namespace std;

bool so_tang(int n){
	int r=n%10;
	n/=10;
    while (n){
    	if (n%10>=r){
    		return false;
		}		
		r=n%10;
		n/=10;
	}
	return true;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(so_tang(i)){
            cout << i << " ";
        }
    }
    return 0;
}

