#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, s; cin>>m>>s;
    if (m*9<s or (s==0 and m>1)){
        cout<<"NOT FOUND";
    } else {
        vector<char> v;
        int n = s/9;
        for (int i=0;i<n;i++) v.push_back('9');
        if (s%9!=0) v.push_back((s%9)+'0');
        n=v.size();
        cout<<n<<endl;
        int last = n-1;
        for (int i=0;i<m-n+1;i++) v.push_back('0');
        for (int i=0;i<m;i++) cout<<v[i];
        cout<<endl;
        if (v[m-1]=='0'){
            v[last] --;
            v[m-1] ++;
        } cout<<v[m-1];
        for (int i=m-1; i>=0; i--) cout<<v[i];
    }
}
