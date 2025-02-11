#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, pair<double, double>> mp;
    string s;
    while (cin>>s){
        double tc,d;
        cin>>tc>>d;
        mp[s].first+=(d*tc);
        mp[s].second+=tc;
    }
    for (auto it=mp.rbegin(); it!=mp.rend(); it++){
        cout<<(*it).first<<" : ";
        cout<<fixed<<setprecision(2)<<((*it).second.first/(*it).second.second)<<endl;
    }
}
