#include <iostream>
using namespace std;

void constantPointerArgument(const int value){
  // value = 17;           // In this function we can't change the value 
  cout << value << endl;
}

// if we change the vlaue in const member function we make varaible mutable
// constant is like a promise and we break the promise with mutable keyword
class person{
  mutable int marks;
  int age;
  
  public:
  
  person(int _m , int _a){
    marks = _m;
    age = _a;
  }
  
  int getMarks() const
  {
    marks = 333;
    return marks;
  }
  
  void setMarks(int _m){
    this-> marks = _m;
  }
  
   int getAge() const
  {
    return age;
  }
  
  void setAge(int _a){
    this-> age = _a;
  }
  
};

void printObjectValue(const person& obj){
  cout << obj.getMarks() << " " << obj.getAge() << endl;
}

int main(){
  person obj(100 , 23);
  printObjectValue(obj);
  return 0;
}




// int main2()
// { 
//     const int value = 19;  // intialization can be done 
//     // value = 10;   // re-assigning can't be done
//     cout << value << endl;
    
//     const int* ptr = new int(1); // const Data but Non-Const pointer
//     // *ptr = 2;  // can not change the data of pointer
//     ptr = new int(13); // pointer itself can be re-assigned
//     cout << *ptr << endl;
     
    
//     int* const ptr = new int(1); // Non-Const Data but Const pointer
//     *ptr = 2;  // can change the data of pointer
//     ptr = new int(13); // pointer itself can't be re-assigned
//     cout << *ptr << endl;
    
//     const int* const ptr = new int(1);// Const Data but Const pointer
    
//     constantPointerArgument(num);
//     int num = 12;
     
//     return 0;
// }
