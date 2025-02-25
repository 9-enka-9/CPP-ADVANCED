#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    map<char, int > mp;
    int n=s.size();
    int mi=INT_MAX, ma= INT_MIN;
    char mic, mac;
    for (int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for (map<char, int>::iterator it=mp.begin(); it!=mp.end(); it++){
        if ((*it).second<=mi){
            mi=(*it).second;
            mic=(*it).first;
        }
        if ((*it).second>=ma) {
            ma=(*it).second;
            mac=(*it).first;
        }
    }
    cout<<mac<<" "<<ma<<endl;
    cout<<mic<<" "<<mi;
}
