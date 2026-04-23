//ex4
#include <iostream>
using namespace std;
class comp{
string type;
    int ram ;
    double price;
    public:
    void set_t(string t)
    {
        type =t;
    }
     void set_p(int p)
    {
         price=p;
    }
    void set_r(int r)
    {
         ram=r;
    }
    void  computer(){
        cout <<" the coputer type is "<<type<<"\n the coputer ram is  " <<ram<<"\n the computer  price is "<<price<<endl;
        if (price>1000){
            cout <<" expenciv laptop\n";

        }
else{
    cout<<" affordable laptop\n";
}    }

};
int main(){
 
     comp s1;
     s1.set_t("ph");
     s1.set_p(3490.56);
     s1.set_r(30);
     s1.computer();
     
}