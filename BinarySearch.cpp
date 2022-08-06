// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;
//Binary Search using Iteration
int BinarySearch(int arr[],int ele,int low,int high)
{
    int mid=0;
    while(low<high)
    {
        mid=(low+high)/2;
        if(ele==arr[mid])
        {
            return mid;
        }
        else if(ele > arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}
//Binary Search using Recursion
int BinarySearchRecursion(int arr[],int ele,int low,int high)
{
    static int mid=0;
    cout<<mid<<"\t";
    if (low > high)
    {
        return -1;
    }
    else
    {
        mid=(low+high)/2;
        if(ele==arr[mid])
        {
            cout<<"\n";
            return mid;
        }
        else if(ele > arr[mid])
        {
            return BinarySearchRecursion(arr,ele,mid+1,high);
        }
        else
        {
            return BinarySearchRecursion(arr,ele,low,high-1);
        }
    }
    
    
}
int main() {
    int arr[]= {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int ele=110;
    int result=BinarySearchRecursion(arr,5,0,10);
    cout<<result;
    return 0;
}
