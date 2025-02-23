#include <bits/stdc++.h>
using namespace std; 
string str; 
vector<int> vt ;
int main() 
{
	freopen("BAI4.INP", "r", stdin);
	freopen("BAI4.OUT", "w", stdout);
    cin >> str; 
    int k=str.size();
    for (int i=0; i<k; i++) 
    {
        if (str[i]==str[0]) vt.push_back(i);
    }
    cout << vt.size() << " ";
    int n=1; 
    reverse(vt.begin(), vt.end());
    while ((vt.size()>1) && (n<str.size()) ) 
    {
        int dem=0; 
        for (int i=0;i<vt.size();i++){
            int entry=vt[i];
            if (entry<k-n) { 
                if (str[entry+n]==str[n]) dem++; 
                else vt.erase(vt.begin()); 
            } else{
                vt.erase(vt.begin());
                i--;
            } 
    	}
        cout << dem << " ";
        n++; if (dem==1) break; 
    }
    for (int i=n; i<str.size(); i++) 
        cout << 1 << ' '; 
    return 0;
}
