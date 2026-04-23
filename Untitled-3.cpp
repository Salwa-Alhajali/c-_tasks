#include <iostream>

using namespace std;
int main(){
    int arr[]={9,5,3,7,2};
    int *pa=arr;
    int max=*pa;
    for(int i=0;i<5;i++){
        *pa=arr[i];
        if (max<=*pa){
            max=*pa;
        }
       
    } cout<<max<<"  ";
}