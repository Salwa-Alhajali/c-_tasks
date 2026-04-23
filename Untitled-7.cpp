#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int *ptr=nullptr ,sum=0;
    for (int i=1; i<=5;i++){
    cin >> arr[i];
    ptr =&arr[i];
    sum+=*ptr;
    }
    cout <<sum/5;
    
}