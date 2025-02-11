#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("MACHDNA.INP", "r", stdin);
    freopen("MACHDNA.OUT", "w", stdout);
    map<char, char> mp;
    mp.insert({{'A','T'}, {'T', 'A'}, {'G', 'C'}, {'C', 'G'}});
    string s; cin>>s;
    int n=s.size();
    int so=0;
    for (int i=0;i<n;i++){
        if (s[i]>='0' and s[i]<='9'){
            while (s[i]>='0' and s[i]<='9'){
                so*=10;
                so+=(s[i]-'0');
                i++;
            }
            i--;
        } else {
            while (so>0){
                cout<<mp[s[i]];
                so--;
            }
        }
    }
}
