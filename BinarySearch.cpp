#include <iostream>
#include<cstring>
using namespace std;
//Binary Search Using Iterative Approach
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
//Binary Search Using Recursion
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
    int size=0;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    int i=0;
    while(i<size);
    {
        cin>>arr[i];
        i++;
    }
    int ele=0;
    cout<<"Enter the Element to be search:";
    cin>>ele;
    int result=BinarySearchRecursion(arr,ele,0,size);
    cout<<result;
    return 0;
}
