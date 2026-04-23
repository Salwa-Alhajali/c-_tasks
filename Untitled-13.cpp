
#include<iostream>
using namespace std;
void swaping(int &x,int &y){
     int *p=&x, *p1=&y, swap;
     swap=*p;
     *p=*p1;
     *p1=swap;
    
}
int main(){
    int x=10,y=20;
  swaping(x,y);
    cout <<x<<"  "<<y;
return 0;}
//20  10

//=== Code Execution Successful ==