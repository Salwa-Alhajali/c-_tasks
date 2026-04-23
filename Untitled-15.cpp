
#include<iostream>
using namespace std;

int main(){
    int x=5;
    int *p=&x;
    int *pp=p;
    *pp=10;
    cout <<x;
return 0;}
//10

//=== Code Execution Successful ==