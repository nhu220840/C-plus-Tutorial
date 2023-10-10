#include<bits/stdc++.h>
using namespace std;
long long merge(int a[], int l, int mid ,int r)
{
    vector<int>x(a+l,a+mid+1);
    vector<int>y(a+mid+1,a+r+1);
    int i = 0, j = 0;
    long long dem = 0;
    while(i < x.size() && j < y.size())
    {
        if(x[i] <= y[j])
        {
            a[l] = x[i];
            l++;i++;
        }
        else
        {
            dem+= (x.size()-i);
            a[l] = y[j];
            l++;j++;
        }
    }
    while(i < x.size())
    {
        a[l] = x[i];
        l++;i++;
    }
    while(j < y.size())
    {
        a[l] = y[j];
        l++;j++;
    }
    return dem;
}
long long mergeSort(int a[], int l, int r)
{
    long long dem = 0;
    if(l < r)
    {
        int mid = (l+r)/2;
        dem+= mergeSort(a,l,mid);
        dem+= mergeSort(a,mid+1,r);
        dem+= merge(a,l,mid,r);
    }
    return dem;
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << mergeSort(a,0,n-1);
    return 0;
}