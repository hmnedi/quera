#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define F_OR(i, a, b) for (int i=(a); i<(b); i++)
using namespace std;

void sort_ghammosi (string a[], int n){
for (int i=1;i<n;i++){
        // based on bubble sort
        int bubbleMove = n-i;
        int changeCnt = 0;
        for (int j=0;j<bubbleMove;j++){
            if (a[j][0] > a[j+1][0]) {
                string tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                changeCnt++;
            }
            else if (a[j][0] == a[j+1][0]){
                if (a[j][1] > a[j+1][1]){
                    string tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                    changeCnt++;
                }
            }
        }
        if (changeCnt==0) break;

    }
}

void sort_aplhabet (string a[], int n){
        // based on bubble sort again
        for (int i=1;i<n;i++){
            int bubbleMove = n-i;
            int changeCnt = 0;
            for (int j=0;j<bubbleMove;j++){
                if (toupper(a[j][0]) > toupper(a[j+1][0])) {
                    string tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                    changeCnt++;
                }
            }
            if (changeCnt==0) break;
        }
}

int main(){
cin.tie(0);
    string s[1000];
    s[0] = "";

    int n=0;
    while (s[n-1] != "0") {
        cin >> s[n];
        n++;
    }
    n--;

    sort_ghammosi(s, n);
    sort_aplhabet(s, n);

    for(int i=0; i<n; i++) cout << s[i] << " ";

}
