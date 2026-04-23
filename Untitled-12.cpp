
#include<iostream>
using namespace std;
void swaping(int *arr,int siz){
    const int  l=siz;
    int arre[l];
  
    for (int i=0;i<siz;i++){
         arr=&arre[i];
         *arr=i;
    }
     for (int i=0;i<siz;i++){
         cout <<arre[i]<<"  ";

    }  
}
int main(){
   int *ptr;
  swaping(ptr,5);

return 0;}
//0  1  2  3  4

//=== Code Execution Successful ==