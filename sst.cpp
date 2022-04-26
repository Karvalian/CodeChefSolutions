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
        int a, b;
        cin >> a >> b;
        int c = a*10;
        int d = b*10;
        if((c)/100>(d)/200){
            cout << "FIRST" << endl;


        }else if((c)/100<(d)/200){
            cout << "SECOND" << endl;
        }else if(c/100==(d)/200){
            cout << "ANY" << endl;
        }
    }
}


