
#include<iostream>
using namespace std;
void inc(int &x){
     int *p=&x;
    *p+=1;
}
int main(){
    int x=5;
   inc(x);
    cout <<x;
return 0;}
//6

//=== Code Execution Successful ==