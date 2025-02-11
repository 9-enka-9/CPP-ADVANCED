#include<bits/stdc++.h>
using namespace std;

// n dong va khong biet bao nhieu phan tu cua tung dong
int main() {
	int n;
	cin>>n;
	vector<int> a[n+1];
	for (int i=0;i<n;i++) {
		int m; cin>>m;
		for (int j=1; j<=m; j++){
			int x; cin>>x;
			a[i].push_back(x);
		}
	}
	
	for (int i=0;i<n;i++){
		for(int j=0; j<a[i].size();j++){
			cout<<a[i][j]<<" ";
		}
		 cout<<endl;
	}
}


//OK
//void nhap(int n, int m, int a[][100]) {
//	for (int i=1; i<=n; i++) {
//		for (int j=1; j<=m; j++) {
//			cin>>a[i][j];
//		}
//	}
//}
//
//int main() {
//	int n,m;
//	cin>>n>>m;
//	int a[n+1][100]; //n hang, m cot
//	nhap(n,m,a);
//	for (int i=1; i<=n; i++) {
//		for (int j=1; j<=m; j++) {
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}


//WRONG phan nhap
//void nhap(int n, int m, int a[][]) {
//	for (int i=1; i<=n; i++) {
//		for (int j=1; j<=m; j++) {
//			cin>>a[i][j];
//		}
//	}
//}
//
//int main() {
//	int n,m;
//	cin>>n>>m;
//	int a[n+1][m+1]; //n hang, m cot
//	nhap(m,n,a);
//	for (int i=1; i<=n; i++) {
//		for (int j=1; j<=m; j++) {
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}



