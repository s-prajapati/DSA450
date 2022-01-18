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

int getMinDiff(int arr[], int n, int k) {
    
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int maxi,mini;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]>=k){
            
                // maximum element will be either (cur_elem + k) or (last_elem - k)
                maxi=max(arr[i]+k,arr[n-1]-k);
                // minimum element will be either (next_elem - k) or (first_elem + k)
                mini=min(arr[0]+k,arr[i+1]-k);
                ans=min(ans,maxi-mini);
            }
        }
        
        return ans;
           
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