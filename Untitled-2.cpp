#include <iostream>
//#include <string>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5},dest[3];
   int *pa=arr,*pd=dest;
    for(int i=0;i<5;i++){
        *pa=arr[i];
        *pd=dest[i];
        *pd=*pa;
        cout<<*pd<<"  ";
    }
}