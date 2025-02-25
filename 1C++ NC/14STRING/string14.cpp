#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    map<string, int> mp;
    int mi=1e5+5,ma=0;
    stringstream ss(s);
    string t;
    while(ss>>t){
        mp[t]++;
        ma = max(ma, mp[t]);
        mi = min(mi, mp[t]);
    }
    for (map<string, int>::reverse_iterator it=mp.rbegin(); it!=mp.rend(); it++){
        if ((*it).second == ma){
            cout<<(*it).first<<" "<<ma<<endl;
            break;
        }
    }
    for (map<string, int>::reverse_iterator it=mp.rbegin(); it!=mp.rend(); it++){
        if ((*it).second == mi){
            cout<<(*it).first<<" "<<mi<<endl;
            break;
        }
    }
}
