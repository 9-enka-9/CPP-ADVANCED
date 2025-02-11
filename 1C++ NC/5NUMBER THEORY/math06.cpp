#include<bits/stdc++.h>
using namespace std;

//Hàm ki?m tra s? nguyên t?
bool nt(int n){
    if (n<2) return false;
    for (int i=2;i*i<=n;i++){
    	if (n%i==0) return false;
	}
	return true;
}
//Hàm t?ng ch? s? nguyên t? và các ch? s? là s? nguyên t?, check luôn 2 yêu c?u này trong cùng 1 hàm vì nó d?u tách t?ng ch? s?
bool csnt(int n){
    int s=0;
    while (n){
    	if (n%10!=2 and n%10!=3 and n%10!=5 and n%10!=7) return false;
    	s+=n%10;
    	n/=10;
	}
	return nt(s);
}

int main(){
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)){
            ++dem;
        }
    }
    cout << dem << endl;
}

