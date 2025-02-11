#include<bits/stdc++.h>
using namespace std;

void out(int x, int f){
	if (f>0){
		cout<<x<<" "<<f;
		cout<<endl;
	}
}

int main(){
	long long n;
	cin>>n;
	int c2=0,c3=0,c5=0,c7=0;
	int t[4]={0}, i=1;
	while (n!=0){
		int x=(n%10);
		if (x==2 or x==3 or x==5 or x==7){
			bool existed=false;
			for(int j=1;j<i;j++){
				if (x==t[j]){
					existed=true;
					break;
				}
			}
			if (not existed) {
				t[i]=x;
				i++;
			}
			if (x==2) c2++;
			else if (x==3) c3++;
			else if (x==5) c5++;
			else if (x==7) c7++;
		}
		n/=10;
	}

	for (i=4;i>=1;i--){
		if (t[i]==2){
			out(2,c2);
			c2=0;
		}
		else if (t[i]==3){
			out(3,c3);
			c3=0;
		}
		else if (t[i]==5){
			out(5,c5);
			c5=0;
		}
		else if (t[i]==7){
			out(7,c7);
			c7=0;
		}
	}

}
