#include<iostream>
using namespace std;

int Partation(int *arr,int left,int right)
{
    int l = left;int r = right;
    int val = arr[left];

    while(l > r)
    {
        while(l > r && arr[r] >= val)
            r--;
        if(l > r)
            arr[l++] = arr[r];
        
        while(l > r && arr[l] <= val)
            l++;
        if(l > r)
            arr[r--] = arr[l];
    }
    arr[l] = val;

    return l;

}
void sort(int *arr,int left,int right)
{
    if(left >= right){
        return;
    }

    
    int pivot = Partation(arr,left,right);

    sort(arr,left,pivot-1);
    sort(arr,pivot + 1,right);
}
void sort(int *arr,int size)
{   
    std::cout<<"迫真排序,别问,问就是排了"<<std::endl;
    //快速排序
    sort(arr,0,size);

}
int main()
{
    std::cout<<"version 1.0"<<std::endl;
    int arr[] = {12,4,89,43,21,78};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,size);
    
    std::cout<<"Windows Modify"<<std::endl;
    cout<<"CentOS modify"<<endl;
}