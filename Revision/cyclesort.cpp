// // cyclic sort -: 

// This staement is *******false******* becoz (we use cyclic sort to sort the array) also why they not sorted duplicate,
// or missing or beyond ele present from array'size. so, this is false... 
// [ In cyclic sort you must know ********* all ele.s are present in b/w (1-n) ********
// cyclic sort always sorted all ele present from 1 to n not present any duplicate ele or missing ele or beyond array'size
// means n=6 so all ele present b/w 1 to 6. In b/w 1 to 6 not any duplicate ele.s are present not any missing ele
// Also not any out of range ele are present like 7 if 7 is present so they didn't sort the array and give segmentation fault.
// It sort but not print. ]





// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={4,3,6,5,1,7,2,9,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // cyclic sort
//     int i=0; // starting ele
//     while(i<n) // i=idx, n=array's size
//     {
//        int correctidx=arr[i]-1;// correctpostion (ele = 5 , correctidx = 4)
//        if(i==correctidx) i++;
//        else swap(arr[i],arr[correctidx]);
//     }
//       for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// //  4 3 6 5 1 7 2 9 8 
// //  1 2 3 4 5 6 7 8 9 


// practice -:

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={4,2,3,1,5,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // cyclic sort - we always apply cyclic sort on array'1st ele

//     int i=0;
//     while(i<n)
//     {
//     int correctidx=arr[i]; // becox ele.s starts from 0
//     if(i==correctidx) i++;
//     else
//     swap(arr[i], arr[correctidx]);
//     } 
//      for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


// Ques.1-: Missing number -: 

//  Method-1: By taking sum
// we find sum of the array and sum from 0 to n
// and sum from 0 to n - array's sum


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={9,6,4,2,3,5,7,0,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     // 1st find sum from 0 to n => 
   
//    int sum=n*(n+1)/2;
//    cout<<sum;
//    cout<<endl;

//    //2nd find array's sum
//    int s=0;
//    for(int i=0; i<n;i++)
//    {
//      s+=arr[i];
//    }
//    cout<<s;
//    cout<<endl;

//    int missing=sum-s;
//    cout<<missing;
// }
// // 9 6 4 2 3 5 7 0 1 
// // 45
// // 37
// // 8


// Method.2 :- 
// 1 no is missing and at that no any other no is present

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[]={9,6,4,2,3,5,7,0,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // for(int i=0; i<n; i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;

//     // array store in vector
//     vector<int>v(arr,arr+n);
//      for(int i=0; i<n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort(v.begin(), v.end());
//      for(int i=0; i<n; i++)
//     {
//         cout<<v[i]<<" ";
//     }

//    vector<int>v1(n+1,false);
//    for(int i=0; i<n; i++)
//    {
//     int ele=arr[i];
//     v1[ele]=true;
//    }

//    cout<<endl;

//    for(int i=0; i<n; i++)
//    {
//     if(v1[i]==false)
//     cout<<i;
//    }
// }


// practice same ques -:

// q-: we have to find missing ele in an array

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[]={4,2,3,8,8,6,0,1,5,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(arr,arr+n);
//     for(int i=0; i<n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     vector<int>v1(n+1,false);
//     for(int i=0; i<n; i++)
//     {
//         int ele=v[i]; // ele me sara array ki value store ho gyi hai
//         v1[ele]=true; 
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(v1[i]==false)
//         cout<<i;
//     }

   
// }


// find duplicate ele in the given array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={3,1,9,9,5,7,6,8,4,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int i=0;
//     while(i<n)
//     {
//         int correctidx=arr[i];
//         if(arr[i]==arr[correctidx])
//         {
//             cout<<arr[i];
//             break;
//         }
//         else
//         swap(arr[i],arr[correctidx]);
//     }
// }



// find the only one duplicate ele present in an array ele stats from 1 to n.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={4,2,3,6,1,5,7,9,8,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // we find correctidx of array'1st ele.
//     // by using while loop
//     int i=0; 
//     while(i<n)
//     {
//         int correctidx=arr[i];
//         if(arr[i]==arr[correctidx])
//         {
//             cout<<arr[i];
//             break;
//         }
//         else swap(arr[i],arr[correctidx]);
//     }
// }
// // 4 2 3 6 1 5 7 9 8 8 
// // 8



// we have an array with size n+1 means we have an ele n=6 than size n+1
// means (n=6)(n is our last idx) 5+1 (array'size)
//  0 1 2 3 4 5   idx = 0 to n,n=5      5+1 = array's size or length 
//  1,2,3,3,4,6
// only one ele is duplicate find the ele. And also ele present from 1 to n means no. present b/w 1 to 6.

// Ques . 1 -: Find the duplicate ele from the given array in linear T.C. O(n) and constant S.C. O(1)
// Method - 1 -> By using cyclic sort which is already done refer upper code
// Method - 2 -> By using sum  T.C. = O(n) and S.C. = O(1)

// #include<iostream>
// using namespace std;
// int main()
// {
//     // size=7 , ele present in b/w 1 to 7 , also only one ele is duplicate so you have to find those ele.
//    int arr[]={1,2,6,5,2,7,3};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    for(int i=0; i<n; i++)
//    {
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;

//    // 1st we find sum from 1 to n.
//    int sum=n*(n+1)/2;
//    cout<<sum;
//    cout<<endl;
   
//    // 2nd we have to find sum of the array.


//    int s=0;
//    for(int i=0; i<n; i++)
//    {
//      s +=arr[i];
//    }
//    cout<<s;
   
//    cout<<endl;
//    int result=sum-s;
//    cout<<result;
   
// }

// // 1 2 6 5 2 7 3 
// // 28
// // 26
// // 2



// // Ques.2-: Find all the numbers disappeared in an array.
#include<iostream>
using namespace std;
int main()
{
  int arr[]={4,3,2,7,8,2,3,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  // By using cyclic sort 1st we sort the given array 
  int i=0;
  while(i<n) // i = index.
  {
     int correctidx=arr[i]-1;
     if(arr[i]==arr[correctidx]) i++;
     else swap(arr[i], arr[correctidx]);
     // now we assumed that our array is sorted
     // 1,2,2,3,3,4,7,8,9 and our disappered ele -> 5,6 so find these ele we return the (idx+1)
  }

  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }

  cout<<endl<<endl; 
                                             // 1st approach
  // now 2nd we again traverse the sorted array and check if ele is present to their correctidx then move forward 
  // else return i+1 ( idx + 1) which is our disappered ele.
                                                //  OR 
                                                 
                                              // 2nd approach   
  // traverse the sorted array and check if ele is not present to their correctidx than return (idx+1)


  for(int i=0; i<n; i++)
  {
    if(arr[i]!=i+1) 
     cout<<i+1<<" ";
  }

}

// 4 3 2 7 8 2 3 1 
// 1 2 3 4 3 2 7 8 

// 5 6 
