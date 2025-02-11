#include<bits/stdc++.h>
using namespace std;

void my_swap(int &a, int &b){
    int t=a;
    a=b;
    b=t;
}

int main(){
    int x, y; cin >> x >> y;
    my_swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}

