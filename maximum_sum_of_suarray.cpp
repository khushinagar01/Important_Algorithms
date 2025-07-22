// #include<bits/stdc++.h> 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the size of an array:";
   cin>>n;
   int arr[n];
   cout<<endl<<"Enter the values:";
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   //initialize the sum as 0.
   int sum=0;
   //because subarray contain atleast 1 element
   int maxi=arr[0];
   for(int i=0;i<n;i++)
   {
      //step 1: add the value of array element in sum.
       sum+=arr[i];
       //step 2:compare the values.
       maxi=max(maxi,sum);
       //step 3: if sum is <0 then there is no use.
       if(sum<0)
        {
            sum=0;
        }
   }
   cout<<maxi<<endl;
   return 0;
}
