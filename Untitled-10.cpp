// Online C++ compiler to run C++ program online
#include <iostream>
//#include <iostreame>
using namespace std;
char arr[]={'h','e','l','l','o'},s;
void revers_string(char *str){

    for (int i=0 ; i<2;i++){
str=&arr[4-i];
s=*str;
*str=arr[i];
arr[i]=s;
}}
int main (){
    char *ptr;
   revers_string(ptr);
   for (int i=0 ;i<5;i++){
     cout <<arr[i]<<" ";
    
    }
}