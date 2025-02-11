#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    //code here
    int lat=0, t=n;
    while (n){
    	lat=lat*10+n%10;
    	n/=10;
	}
	return lat==t;
}

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(palindrome(i)){
            cout << i << " ";
        }
    }
}

