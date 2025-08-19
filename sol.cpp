#include <bits/stdc++.h>
#include<cmath>
#include <cstdio> 
#define endl '\n'
#define int long long
 
using namespace std;
 

string valid[] = {"Swimming", "Running", "Football"};
int c = 0; 
vector<string> v;


void recur(int day, int n, string str) {
    if (day > n) {
        for (int i = 0; i < v.size(); i++) 
        {
            cout << v[i];
            if (i != v.size()-1) cout<<" ";
        }
        cout<<endl;
        c++;
        return;
    }

    for (int i = 0; i < 3; i++) {
        if (valid[i] != str)
        { 
            v.push_back(valid[i]);
            recur(day+1, n, valid[i]);
            v.pop_back();
        }
    }
}

void Solve() 
{
    int n;
    cin >> n;
    //here i sent empty string bc there is no prev day 
    recur(1, n, ""); 
  
    cout << "the count is: " << c << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
// 	int t;
// 	cin>>t;
// 	while(t--)
    Solve();
	return 0;
}
