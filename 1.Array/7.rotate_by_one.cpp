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

void rotate(vi arr, int n)
{
    int temp=arr[0],curr;
    for(int i=1;i<n;i++){
        curr=arr[i];
        arr[i]=temp;
        temp=curr;
        
        
    }
    arr[0]=temp;
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