#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define F_OR(i, a, b) for (int i=(a); i<(b); i++)
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){
        a[i] = i+1;
    }

    int cnt=0;
    bool isgo = false;
    for (int i=0; i<n*ceil(log2(n)); i++){
        if (a[i%n] && isgo){
            a[i%n] = 0;
            cnt++;
            isgo = false;
        } else if (a[i%n] && !isgo){
            isgo = true;
        }
    }

    for(int i=0;i<n;i++){
        if (a[i]) cout << a[i] << endl;
    }

}
