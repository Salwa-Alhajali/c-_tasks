#include<iostream>
using namespace std;
int main (){
    char arr[]={'h','e','l','l','o'};
    char *ptr;
    for(int i=0;i<5;i++){
        ptr=&arr[i];
        cout <<*ptr<<endl;
    }
}

