#include<bits/stdc++.h>
using namespace std;

bool chua6(int n){
    while (n!=0){
    	if (n%10==6){
    		return true;
		}
		n/=10;
	}
	return false;
}

bool tongchan(int n){
    int s=0;
    while (n!=0){
    	s+=n%10;
    	n/=10;
	}
	return s%2==0;
}

bool chanle(int n){
    int c1=0,c2=0;
    while (n!=0){
    	if (n%2==0) c2++;
    	else c1++;
    	n/=10;
	}
	return c1>c2;
}

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(chua6(i) && tongchan(i) && chanle(i)){
            cout << i << " ";
        }
    }
}

