#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,4,-1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   // 1st we sort the given array using cyclic sort.

   int i=0;
   while(i<n)
   {
    int correctidx=arr[i]-1;
    if(arr[i]<=0) i++; // for negative no.
    else if (arr[i]>n || arr[i]==i+1 || arr[i]==arr[correctidx]) i++; // ele > size (7>4), 3==2+1, 3==3 i++
    else swap(arr[i],arr[correctidx]);
   }
    // our array is sorted 
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
   cout<<endl<<endl;

   
   for(int i=0; i<n; i++)
   {
    if(arr[i]==i+1) continue; // skip and move forward. // this is imp. please revise this.
    else
    cout<<i+1;
    break;
   }

}

// 1 2 0 
// 1 2 0 

// 3


// 3 4 -1 1 
// 1 -1 3 4 

// 2