#include<iostream>
using namespace std;
class student{
protected:
int roll;
public:
void setroll(){
    cout <<"Enter your roll number:  "<<endl;
    cin>>roll;
}
void getroll(){
    cout<<"Roll number is "<<roll<<endl;
}

};
class Exam : public student{
protected:
float mMaths,mPhysic,mChemistry;
public:
void setmarks(){
    cout<<"Enter maths marks :"<<endl;
    cin>>mMaths;
    cout<<"Enter Physic Marks :"<<endl;
    cin>>mPhysic;
    cout<<"Enter Chemistry Marks: "<<endl;
    cin>>mChemistry;
}
void showmarks(){
    cout<<"Your Math's mark is "<<mMaths<<endl;
    cout<<"Your Chemistry mark is "<<mChemistry<<endl;
    cout<<"Your Physic mark is  "<<mPhysic<<endl;
}

};
class Result : public Exam{
protected: 
float percentage;
public:
void showresult(){
    getroll();
    showmarks();
    
cout<<"Your percentage is  "<<(mMaths+mChemistry+mPhysic)/3<<endl;
}

};
int main(){
  Result nabin;
  nabin.setroll();
  nabin.setmarks();
  nabin.showresult();

Result Nabin;
Nabin.showresult();
return 0;
}