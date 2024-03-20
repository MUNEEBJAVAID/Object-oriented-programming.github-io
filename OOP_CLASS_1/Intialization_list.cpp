#include <iostream>
using namespace std;

// intializer list is used to intialize the data memebers of clsss
class person{
  const int marks;
  int age;
  
  public:
  
  // intialization list intialize data member in which order they are declared
  person(int _m , int _a) : age(_a) , marks(age){
   
  }
  
  int getMarks() const
  {
    return marks;
  }
  
  // void setMarks(int _m){
  //   this-> marks = _m;
  // }
  
   int getAge() const
  {
    return age;
  }
  
  void setAge(int _a){
    this-> age = _a;
  }
  
};



int main(){
  person obj(100 , 23);
  cout << obj.getMarks() << " " <<  obj.getAge();
  return 0;
}



