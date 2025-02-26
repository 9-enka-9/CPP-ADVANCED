#include<bits/stdc++.h>
using namespace std;

void ns(string s){
    stringstream ss(s);
    string t;
    while(getline(ss,t,'/')){
        cout<<stoi(t);
    }
    cout<<endl;
}

string email(vector<string> v){
    int n=v.size();
    string t=v[n-2];
    for (int i=0;i<n-2; i++){
        t+=v[i][0];
    }
    return t;
}

int main(){
    int n; cin>>n;
    vector<string> v;
    map<string,int> mails;
    string s;
    cin.ignore();
    for (int i=0;i<n;i++){
        getline(cin, s);
        v.push_back(s);
    }
    for (int i=0;i<n;i++){
        vector<string> elem;
        int l=v[i].size();
        for (int j=0; j<l;j++){
            v[i][j]=tolower(v[i][j]);
        }
        stringstream selem(v[i]);
        string t;
        while (selem>>t){
            elem.push_back(t);
        }
        l=elem.size();
        string pre=email(elem);
        mails[pre]++;
        if (mails[pre]==1){
            string mail = pre + "@xyz.edu.vn";
            cout<<mail<<endl;
        } else {
            string mail = pre + to_string(mails[pre]) + "@xyz.edu.vn";
            cout<<mail<<endl;
        }
        ns(elem[l-1]);
    }
}
