#include <bits/stdc++.h>
using namespace std;

vector<int> maxAndMin(vector<int> v){
    vector<int> ans={*max_element(v.begin(),v.end()),*min_element(v.begin(),v.end())};
    return  ans;
}