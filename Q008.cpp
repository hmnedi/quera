// 2021-06-16

#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
	int n;
	string t;
	cin >> n >> t;

	vector<string> s;
	while(n--){
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
	}

	sort(t.begin(), t.end());
    t.erase(unique(t.begin(), t.end()), t.end());

	for(int i=0;i<s.size();i++){
        sort(s[i].begin(), s[i].end());
        s[i].erase(unique(s[i].begin(), s[i].end()), s[i].end());

        int cnt = 0;
        for(int j=0;j<s[i].size();j++){
            if (s[i][j] == t[j]) {
                cnt++;
            }
        }
        if (cnt==t.size()){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }


	}


}
