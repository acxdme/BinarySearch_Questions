/*
Time complexity  Analysis : best-O(nlogn)  Average-O(nlogn)  Worst-O(n^2)
Space complexity : O (N)
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
