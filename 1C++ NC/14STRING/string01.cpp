#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    int digit=0, alpha=0, spe=0, l=s.size();
    for (int i=0;i<l;i++){
        if (isdigit(s[i])) digit++;
        else if (isalpha(s[i])) alpha++;
        else spe++;
    }
    cout<<alpha<<" "<<digit<<" "<<spe;
}
