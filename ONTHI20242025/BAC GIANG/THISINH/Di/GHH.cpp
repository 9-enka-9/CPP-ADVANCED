#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n)
{
    ll s = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            s+=i;
            if(i != n/i)
            {
                s+=(n/i);
            }
        }

    }
    return 2 * n <= s;

}
int main()
{
    freopen("GHH.INP", "r", stdin);
    freopen("GHH.OUT", "w", stdout);
    int n;
    cin >> n;
    ll a[n];
    for(int i =0; i  < n; i++)
    {
        cin >> a[i];
        if(check(a[i]))
            cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
