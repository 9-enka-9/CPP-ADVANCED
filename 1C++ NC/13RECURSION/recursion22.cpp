#include<bits/stdc++.h>
using namespace std;

int n;
void right(int a[],int i){
    cout<<a[i]<<" ";
    if (i<n-1) right(a,i+1);
}

void left(int a[], int i){
    cout<<a[i]<<" ";
    if (i>0) left(a,i-1);
}

int main(){
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++) cin>>a[i];

    right(a,0);
    cout<<endl;
    left(a,n-1);
}
