#include<iostream>
#include<string.h>
using namespace std;
class base {
    int data1;
       public:
       int data2;
       void setdefaultvalue(){
    data1=90;
          data2=50;
      }
      void setdata(){

          cout<<"Enter value of data1 and data2....>> "<<endl;
          cin>>data1>>data2;

      }
      int getdata1(){
          return data1;
      }
    //   int getdata2(){
    //       return data2;
    //   }
      
};
class derived : public base {
public:
int data3;
/* void process(){
  data3 = data2*getdata1();

  // I used this function under displaykaro function which is below this...✔😍(●'◡'●)😎
 }*/
void displaykaro(){
{
data3 = data2*getdata1();
}
    cout<<"The value of data1 is "<<getdata1()<<endl;
    // we can't use data1 directly because data1 is declared in base class as private...😍💕
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of data3 is "<<data3<<endl;
}
};
int main(){
  derived b1;
  b1.setdefaultvalue();
  cout<<"Do you want to set value of object    ?"<<endl<<"Press 0 for NO 1 for YES....>   ";
  int take;
  cin>>take;
  if(take==1){
      b1.setdata();
  }
  b1.displaykaro();
return 0;
}