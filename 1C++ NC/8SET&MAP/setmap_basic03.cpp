#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    set<char> se;
    for (int i=0;i<n;i++){
        char x; cin>>x;
        se.insert(x);
    }
    cout<<se.size()<<endl;
    set<char>::iterator it=se.begin();
    set<char>::reverse_iterator rit=se.rbegin();
    cout<<*rit<<" "<<*it<<" ";
    it++; rit++;
    cout<<*rit<<" "<<*it;
}
