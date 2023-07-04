#include<iostream>


void sort(int *arr,int size)
{   
    std::cout<<"迫真排序,别问,问就是排了"<<std::endl;

}
int main()
{
    std::cout<<"version 1.0"<<std::endl;
    int arr[] = {12,4,89,43,21,78};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,size);
    
    std::cout<<"Windows Modify"<<std::endl;
}