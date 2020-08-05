/*
 -------Time complexity Analysis of HeapSort---------
   O(nlogn)
 It' default implementation is not stable.
*/
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int m, int n)
{
   int largest=m;
   int left=2*m+1;
   int right=2*m+2;
   
   if( left< n and arr[left] > arr[largest])
    largest=left;
    
   if( right<n and arr[right] > arr[largest])
    largest=right;
   if(largest!=m )
   {
       swap(arr[largest],arr[m]);
       
       heapify (arr,largest,n);
    }
   
}


void heapsort(int arr[], int b)
{
   for(int i=b/2-1;i>=0;i--)
     heapify(arr,i,b);
    for(int j=b-1;j>0;j--)
    {
        swap(arr[0],arr[j]);
        
        heapify(arr,0,j);
    }

}

int main()
{
   int arr[]={6,5,7,4,9,8,3};
   int n=arr.size();
   heapsort(arr,n);
   
 }
