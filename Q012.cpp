#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define F_OR(i, a, b) for (int i=(a); i<(b); i++) //F_OR(i, 1, 10)
using namespace std;
int main(){
cin.tie(0);
    int n; // only god knows what's wrong with inputs in c++
    vector<string> s;
    cin >> n;
    cin.ignore(); // so it does not get effected by the getline(cin, s)

    F_OR(i, 0, n) {
        string tmp;
        getline(cin, tmp);
        int hold = -1;
        F_OR (j, 0, tmp.size()) {
            if (tmp[j] == ' ') {
                hold = j+1;
            }
            if (j == hold || !j){
                tmp[j] = toupper(tmp[j]);
            } else {
                tmp[j] = tolower(tmp[j]);
            }
        }
        s.pb(tmp);
    }

    for (auto i: s){
        cout << i << endl;
    }
}
