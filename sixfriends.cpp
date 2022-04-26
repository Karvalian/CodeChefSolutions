#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define vt vector
#define ll long long
#define ld long double
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mp make_pair
#define FOR(i, n) for(int i=0;i<n;i++)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x*3>=y*2){
            cout << y*2 << endl;
        }else if(x*3<=y*2){
            cout << x*3 << endl;
        }
    }
}


