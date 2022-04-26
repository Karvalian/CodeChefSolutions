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
        int n;
        cin >> n;
        if((n*10)/100>100){
            cout << (n*10)/100 << endl;
        }else if((n*10)/100<=100){
            cout << 100 << endl;
        }
    }
}


