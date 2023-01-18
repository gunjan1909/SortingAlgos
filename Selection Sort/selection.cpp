#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr, int n)
{
   for (int i = 0; i < n - 1; i++)
   {
      int min = i;
      for (int j = i + 1; j < n; j++)
      {
         if (arr[j] < arr[min])
            min = j;
      }
      // in-built swap function
      swap(arr[i], arr[min]);
   }
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
   selectionSort(arr, n);
   cout << "The sorted array is: ";
   printArray(arr, n);
   return 0;
}