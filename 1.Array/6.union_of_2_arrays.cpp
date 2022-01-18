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

int doUnion(int a[], int n, int b[], int m)  {
        //code here
                unordered_set<int> s;
    	    
    	//we insert all the elements of first array in set.
    	for(int i = 0;i<n;i++)
    	   s.insert(a[i]);
    	    
    	 //we insert all the elements of second array in set.
    	 //Set does not contain duplicates.
    	 for(int i = 0;i<m;i++)
    	    s.insert(b[i]);
    	    
    	  //returning the size of set which is total number of elements in set.
    	  return s.size() ;
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