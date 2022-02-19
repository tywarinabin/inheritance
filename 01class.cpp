#include<iostream>
using namespace std;
class PHONE {
    string p_name;
    string p_size;
    public:
    PHONE (string name, string size){
        p_name=name;
        p_size=size;
    }
    void makecall(){
        cout <<"Making call using "<<p_name<<endl;
        cout <<"Making call of pixel "<<p_size<<endl;
    }
    void recievecall(){
        cout<<"Recieve call using  "<<p_name<<endl;
        cout <<"Making call of pixel "<<p_size<<endl;
    }
};

int main(){
  PHONE ph = {"iPhone", "56x34"};
ph.makecall();
ph.recievecall();
return 0;
}
    