#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr, int n)
{
   for (int i = 0; i < n - 1; i++)
   {
      bool swapped = false; // for optimization if array already sorted for O(n)
      for (int j = 0; j < n - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            swap(arr[j], arr[j + 1]);
            swapped = true;
         }
      }
      if (swapped == false)
         // already sorted
         break;
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
   bubbleSort(arr, n);
   cout << "The sorted array is: ";
   printArray(arr, n);
   return 0;
}