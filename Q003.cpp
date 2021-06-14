// 2020-07-16

#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int a, b, x;
    cin >> a >> b >> x;
    vector<int> alist, blist;
    for(int i=1;i<=a;i++) {
        if (a%i == 0) alist.pb(i);
    }
    for(int i=1;i<=b;i++) {
        if (b%i == 0) blist.pb(i);
    }
    int ans=0;
    for(int i=0;i<alist.size();i++){
        for(int j=0;j<blist.size();j++){
            if (alist[i] + blist[j] <= x) ans++;
        }
    }
    cout << ans;

}
