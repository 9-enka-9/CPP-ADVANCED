#include<bits/stdc++.h>
using namespace std;

bool so_dep(int n){
    int c1=0, c2=0;
    while (n!=0){
    	if (n%2==0) c2++;
    	else c1++;
    	n/=10;
	}
	return c1==c2;
}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(so_dep(i)){
            cout << i << " ";
        }
    }
    return 0;
}

