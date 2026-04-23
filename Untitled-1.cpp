#include <iostream>
//#include <string>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int *pa=arr;
    for(int i=0;i<5;i++){
        *pa=arr[i];
        *pa+=10;
        cout<<*pa<<"  ";
    }
}