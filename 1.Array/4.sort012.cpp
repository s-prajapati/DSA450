#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)c0++;
        else if(a[i]==1)c1++;
        else c2++;
    }
    for(int i=0;i<n;i++){
        if(i<c0)a[i]=0;
        else if(i>=c0 && i<c1+c0)a[i]=1;
        else a[i]=2;
    }
    
}