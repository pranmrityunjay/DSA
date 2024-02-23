#include <bits/stdc++.h>
using namespace std;
bool find(int *arr, int start, int end, int key)
{
    int mid = (start + end) / 2;
    if (start > end)
    {
        return false;
    }
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] > key)
    {
        
        return find(arr, start, mid-1, key);
    }
    else
    {
        
        return find(arr, mid+1, end, key);
    }
}
int main()
{
    int arr[] = {2, 4, 6, 10, 15, 30, 31, 45, 56, 60};
    int start = 0;
    int end = 9;
    int key = 10 ;
    
    bool ans = find(arr, start, end, key);
    cout << ans << endl;
}