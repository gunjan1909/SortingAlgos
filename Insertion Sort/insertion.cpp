#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr, int n)
{
}

void printArray(vector<int> arr, int size)
{
   for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
   cout << endl;
}
int main()
{
   int n;
   cout << "Enter the number of elements in the array: ";
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cout << "Enter the element " << i + 1 << ": ";
      cin >> arr[i];
   }
   insertionSort(arr, n);
   cout << "The sorted array is: ";
   printArray(arr, n);
   return 0;
}