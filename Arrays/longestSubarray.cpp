#include<iostream>
using namespace std;

int longestSubArray(int arr[], int n, int k)
{
    int maxLen = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += arr[j];
            if(sum == k)
            {
                maxLen = max(maxLen,j-i+1);
            }
        }
    }
    return maxLen;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int k;
    cin >> k;

    cout << longestSubArray(arr,n,k) << endl;
}