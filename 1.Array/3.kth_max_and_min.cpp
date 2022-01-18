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


int solve(vector<int> v,int k){
    priority_queue<int> maxh;
    for(auto x:v){
        maxh.push(x);
        
        if(maxh.size()>k){
            maxh.pop();
            
        }
    } 
    return maxh.top();
}

int32_t main(){
    vi v={4,7,19,2,1,6};
    cout<<solve(v,4);
    return 0;
}