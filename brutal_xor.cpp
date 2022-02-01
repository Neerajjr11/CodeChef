#include <bits/stdc++.h>
using namespace std;


int xorOfArray(int arr[], int n)
{
    int xor_arr = 0;

    for (int i = 0; i < n; i++) {


        xor_arr = xor_arr ^ arr[i];
    }


    return xor_arr;
}


int main()
{
#ifndef Online_Judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    int i;
    cin >> t;
    while (t--)
    {
        int arr[100];
        int n;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            arr[i] = i;
        }
        arr[i + 1] = i + 1;

        cout << xorOfArray(arr, n) << endl;
    }

    return 0;
}