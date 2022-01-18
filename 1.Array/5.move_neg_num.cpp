#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define vi vector<long long>
#define pii pair<int,int>
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
#define mod 1e9+7

void solve(vector<int> &v){
    int n=v.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            if(i!=j)swap(v[i],v[j]);
            j++;
        }
    }
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        vi v={-12, 11, -13, -5, 6, -7, 5, -3, -6};
        solve(v);
        for(auto &x:v){
            cout<<x<<" ";
        }



    }

    return 0;
}