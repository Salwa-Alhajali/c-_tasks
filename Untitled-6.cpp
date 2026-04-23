#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,7,4,5};
    int *ptr=arr, *ptr1=arr,main;
    for(int i=0; i<5;i++){
         ptr1=&arr[i];
    for(int i=0; i<5;i++){
 ptr= &arr[i];
 if (*ptr1>=*ptr){
    main=*ptr;
    *ptr=*ptr1;
    *ptr1=main;
}}}
    for(int i=0; i<5;i++){
cout <<arr[i]<<endl;


    }
}