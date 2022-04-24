#include <iostream>

using namespace std;
int binary_Search(int arr[],int start, int end, int num)
{
    int mid=start+(end-start)/2; //FOR LARGE 2^31-1 CASES OVERFLOW IF CONVENTIONAL WAY USED TO FIND MID
    if(arr[mid]==num)
    {
        return mid;
    }
    else if(arr[mid]<num)
    {
        binary_Search(arr,mid+1,end,num);
    }
    else if(arr[mid]>num)
    {
        binary_Search(arr,start,mid-1,num);
    }
    else
    {
        return -1;
    }

}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int num=3,start=0;
    int len=(sizeof(arr)/sizeof(arr[0])-1);
    if(binary_Search(arr,start,len,num)!=-1)
    {
        cout<<"Num found at index: "<<binary_Search(arr,start,len,num)<<endl;
    }
    else
    {
        cout<<"Num NOT found"<<endl;
    }
    return 0;
}
