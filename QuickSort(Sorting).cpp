/*
Time complexity  Analysis : best-O(nlogn)  Average-O(nlogn)  Worst-O(n^2)
 The worst case occurs when the partition process always picks greatest or smallest element as pivot. 
 If we consider above partition strategy where last element is always picked as pivot,
 the worst case would occur when the array is already sorted in increasing or decreasing order
Space complexity : O (N)

The default implementation is not stable. However any sorting algorithm can be made stable by considering indexes as comparison parameter.
*/

int partition (int arr[], int low, int high)
{
    int i=low-1,j=low;
    int pi=arr[high];
    while(j<high)
    {
        if(arr[j]< pi)
         {
             i++;
             swap(arr[i],arr[j]);
         }
        j++;
    }
    int temp=pi;
    while(high-1 > i)
    {
        arr[high]=arr[high-1];
        high--;
    }
    arr[i+1]=pi;
  return i+1;
}
