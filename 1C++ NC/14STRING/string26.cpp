#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    string res=""; res+=s[0];
    int maxl=1, n=s.size();
    for (int i=0;i<n;i++){
        if (s[i]==s[i+1]){
            int start = i;
            while (s[i]==s[i+1]) i++;
            if (i-start+1>maxl){
                res = s.substr(start,i+1);
                maxl=i-start+1;
            } else if (maxl == i-start+1  and s[start]>res[0]){
                res = s.substr(start, i+1);
            }
        } else if (maxl==1){
            if (res[0]<s[i]){
                res="";
                res+=s[i];
            }
        }
    }
    cout<<res;
}
