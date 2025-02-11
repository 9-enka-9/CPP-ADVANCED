#include<bits/stdc++.h>
using namespace std;

//ham kiem tra xem 1 s? có nhi?u ch? s? ch?n hon l? hay ko?
bool chanle(int n){
    int c1=0,c2=0;
    while (n!=0){
    	if (n%10%2==0) c2++;
    	else c1++;
    	n/=10;
	}
	return c2>c1;
}

//Hàm ki?m tra t?ng c?a 1 s? có ph?i có nhi?u ch? s? ch?n hon l? ko?
bool check(int n){
    //Tính t?ng ch? s? c?a
    //G?i hàm chanle và truy?n t?ng vào d? check xem t?ng có
    //th?a mãn hay không, n?u có tr? v? true, ngu?c l?i tr? 
    //v? false
    int s=0;
    while (n!=0){
    	s+=n%10;
    	n/=10;
	}
	return chanle(s);
}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(check(i)){
            cout << i << " ";
        }
    }
}

