#include<bits/stdc++.h>
using namespace std;

void somu(int n,int p)
{
	int dem=0;
	while (p<=n)
	{
		dem +=(n/p);
		p=p*p; 
	}
	cout << dem; 
}

int main()
{
	int n, p;
	cin>>n;
	cin>>p;
	somu(n,p);
	return 0;
}
