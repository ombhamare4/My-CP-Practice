#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n)
{
    int sum = 0;
    int ladoo[n];
	if (n == 1) {
        return 1;
    }
    for (int i = 0; i < n; i++)
        ladoo[i] = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] > arr[i]) {
            ladoo[i + 1] = ladoo[i] + 1;
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]
            && ladoo[i] <= ladoo[i + 1]) {
            ladoo[i] = ladoo[i + 1] + 1;
        }
        sum += ladoo[i];
    }
 
    sum += ladoo[n - 1];
    return sum;
}
int main()
{
    int arr[] = {3,3,3,3,4 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << count(arr, N);
    return 0;
}