#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
   int mid = (s + e) / 2;

   int len1 = mid - s + 1;
   int len2 = e - mid;
   int *first = new int[len1];
   int *second = new int[len2];

   // copy values of both parts in first and second then merge two sorted arrays
   int mainArrayIndex = s;
   for (int i = 0; i < len1; i++)
   {
      first[i] = arr[mainArrayIndex++];
   }
   mainArrayIndex = mid + 1;
   for (int i = 0; i < len2; i++)
   {
      second[i] = arr[mainArrayIndex++];
   }

   // merge two sorted arrays
   int index1 = 0, index2 = 0;
   mainArrayIndex = s;
   while (index1 < len1 && index2 < len2)
   {
      if (first[index1] < second[index2])
      {
         arr[mainArrayIndex++] = first[index1++];
      }
      else
      {
         arr[mainArrayIndex++] = second[index2++];
      }
   }
   while (index1 < len1)
   {
      arr[mainArrayIndex++] = first[index1++];
   }
   while (index2 < len2)
   {
      arr[mainArrayIndex++] = second[index2++];
   }

   delete[] first;
   delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
   if (s >= e)
      return;

   int mid = s + (e - s) / 2;
   // left part
   mergeSort(arr, s, mid);
   // right part
   mergeSort(arr, mid + 1, e);

   // merge
   merge(arr, s, e);
}

int main()
{
   int arr[] = {2, 5, 1, 6, 9, 1, 5, 8, 7, 3};
   int n = 10;
   cout << "BEFORE SORTING: ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
   cout << "AFTER SORTING: ";
   mergeSort(arr, 0, n - 1);
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
   return 0;
}
/*
CODE STUDIO QUESTION: https://www.codingninjas.com/codestudio/problems/merge-sort_920442?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_14

void merge( vector<int>&arr, int s, int e){
   int mid = (s+e)/2;

   int len1= mid-s+1;
   int len2    = e-mid;
   int *first = new int[len1];
   int *second = new int[len2];

//copy values of both parts in first and second then merge two sorted arrays
   int mainArrayIndex = s;
   for(int i=0;i<len1;i++){
      first[i]=arr[mainArrayIndex++];
   }
   mainArrayIndex = mid+1;
   for(int i=0;i<len2;i++){
      second[i]=arr[mainArrayIndex++];
   }

   //merge two sorted arrays
   int index1=0,index2=0;
   mainArrayIndex=s;
   while(index1<len1&&index2<len2){
      if(first[index1]<second[index2]){
         arr[mainArrayIndex++]=first[index1++];
      }
      else{
         arr[mainArrayIndex++]=second[index2++];
      }
   }
   while(index1<len1){
      arr[mainArrayIndex++]=first[index1++];
   }
   while(index2<len2){
      arr[mainArrayIndex++]=second[index2++];
   }

   delete [] first;
   delete [] second;
}

void solve(vector<int>&arr, int s, int e){
   if(s>=e)return;

   int mid = s+(e-s)/2;
   //left part
   solve(arr,s,mid);
   //right part
   solve(arr,mid+1,e);

   //merge
   merge(arr,s,e);
}
void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    solve(arr,0,n-1);
}*/