#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    map<string, string> mp;
    for (int i=0;i<n;i++){
        string s1, s2;
        cin.ignore();
        getline(cin, s1);
        cin>>s2;
        mp[s2]=s1;
    }

//    for (auto& it:mp){
//        cout<<it.first<<" "<<it.second<<endl;
//    }

    int q; cin>>q;
    for (int i=0;i<q;i++){
        string s1, s2;
        int amount;
        cin>>s1>>s2>>amount;
//        cout<<s1<<" "<<s2<<" "<<amount<<endl;
        if (mp.count(s1)!=0 and mp.count(s2)!=0){
            cout<<mp[s1]<<" send "<<amount<<" bitcoin to "<<mp[s2]<<endl;
        } else if (mp.count(s1)==0 and mp.count(s2)==0){
            cout<<"Unknown wallet send "<<amount<<" bitcoin to Unknown wallet";
        } else if (mp.count(s1)==0){
            cout<<"Unknown wallet send "<<amount<<" bitcoin to "<<mp[s2];
        } else {
            cout<<mp[s1]<<" send "<<amount<<" bitcoin to Unknown wallet";
        }
        cout<<endl;
    }
}
