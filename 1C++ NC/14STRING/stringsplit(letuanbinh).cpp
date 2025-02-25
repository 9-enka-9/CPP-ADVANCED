#include<bits/stdc++.h>
using namespace std;

vector<string> split(const string& haystack, const string& needle){
    vector<string> res;
    int startPos=0;
    int foundPos;
    while ((foundPos= haystack.find(needle, startPos)) != string::npos){
        int cnt = foundPos-startPos;
        string token = haystack.substr(startPos, cnt);
        if (!token.empty()){
            res.push_back(token);
        }
        startPos = foundPos + needle.size();
    }
    string lastToken = haystack.substr(startPos);
    if (!lastToken.empty()) res.push_back(lastToken);
    return res;
}

int main(){
    string s; getline(cin,s);
    string del = "--";
    vector<string> v=split(s,del);
    for (auto x:v){
        cout<<x<<" ";
    }
}
