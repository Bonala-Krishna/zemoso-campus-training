#include <iostream>

#include "sort.h"

using namespace std;

int main()
{
  int n;
  cin >>n; //take number of elements in array
  long arr[n];
  
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    }
   mergeSort(arr,0,n-1);
  
  for(int i=0;i<n;i++) 
  {
   cout<<arr[i]<<' ';
   }
  return 0;
 }
