#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2; getline(cin,s1);
    getline(cin,s2);
    set<char> se1,se2;
    int n1=s1.size(), n2=s2.size();
    for (int i=0;i<n1;i++){
        se1.insert(s1[i]);
    }
    for (int i=0;i<n2;i++){
        se2.insert(s2[i]);
    }

    set<char> uni,inter;
    for (set<char>::iterator it=se1.begin(); it!=se1.end(); it++){
        if (se2.find((*it))!=se2.end()) inter.insert((*it));
    }

    uni.insert(se1.begin(), se1.end());
    uni.insert(se2.begin(), se2.end());

    for (set<char>::iterator it=inter.begin(); it!=inter.end(); it++){
        cout<<(*it);
    }
    cout<<endl;
    for (set<char>::iterator it=uni.begin(); it!=uni.end(); it++){
        cout<<(*it);
    }

}
