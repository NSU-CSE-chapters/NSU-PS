#include <iostream>

#include <bits/stdc++.h>
// #define int long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = arr[n - 1] * n - sum;

    cout << ans << endl;

    return 0;
}