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

long long maxSubarraySum(vi arr, int n){
        
        long long sum=0,max_sum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>=max_sum){
                max_sum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        // Your code here
        return max_sum;
        
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        



    }

    return 0;
}