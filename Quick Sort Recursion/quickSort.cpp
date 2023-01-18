#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int s, int e)
{
   int pivot = arr[s];
   int cnt = 0;
   for (int i = s + 1; i <= e; i++)
   {
      if (arr[i] <= pivot)
      {
         cnt++;
      }
   }
   // place pivot ar right position
   int pivotIndex = s + cnt;
   swap(arr[s], arr[pivotIndex]);
   // maintain smaller and larger elements ie left and right part of the pivot
   int i = s, j = e;
   while (i < pivotIndex && j > pivotIndex)
   {
      if (arr[i] <= pivot)
      {
         i++;
      }
      else if (arr[j] > pivot)
      {
         j--;
      }
      else
      {
         swap(arr[i++], arr[j--]);
      }
   }
   return pivotIndex;
}
void quickSort(vector<int> &arr, int s, int e)
{
   if (s >= e)
      return;
   // partition
   int p = partition(arr, s, e);
   // left part
   quickSort(arr, s, p - 1);
   // right part
   quickSort(arr, p + 1, e);
}
// Function to PRINT THE ARRAY
void printArray(vector<int> &arr, int n)
{
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;
}
// Main function
int main()
{
   vector<int> arr;
   cout << " Enter the array elements : ";
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int x;
      cout << "Enter the element " << i + 1 << " : ";
      cin >> x;
      arr.push_back(x);
   }
   cout << " Before Sorting: \n";
   printArray(arr, n);
   quickSort(arr, 0, n - 1);
   cout << " After Sorting: \n";
   printArray(arr, n);
}

// CODE STUDIO:  https://www.codingninjas.com/codestudio/problems/quick-sort_983625?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_15