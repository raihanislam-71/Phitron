#include <bits/stdc++.h>
using namespace std;

vector<int> v;
void insert(int arr[] , int n)
{
    v.clear();
    for(int i=0; i<n; i++)
    {
        v.push_back(arr[i]);
    }
}
    
int getFourthLargest(int arr[], int n)
{
    insert(arr , n);
    sort(v.begin(), v.end(), greater<int>());
    if(v.size() < 4)
    {
        return INT_MIN;
    }
    else
    {
        return v[3];
    }
}