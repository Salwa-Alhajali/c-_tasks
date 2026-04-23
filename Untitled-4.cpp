#include<iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,5},temp=0;
    int *pa=arr;
    int *pe=nullptr;
    for(int i=0;i<2;i++){
pa=&arr[i];//1
pe=&arr[4-i];//5
temp=*pa;//1
*pa=*pe;//5
*pe=temp;//1
    }
     for(int i=0;i<5;i++){
cout <<arr[i]<<"  ";
    }
}

