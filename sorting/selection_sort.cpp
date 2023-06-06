#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {3, 1, 5, 2, 4};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}