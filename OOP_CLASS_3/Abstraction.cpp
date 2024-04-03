#include <iostream>
using namespace std;

// Abstract class:
                  // At least contain one pure virtual function and cann't be instantiated 
                  // Used as a interface
class Bird{
  
  public:
  virtual void eat() = 0;
  virtual void fly() = 0;
  
  // classes that inehirt this class 
  // has implement virtual fnc
};

// A concrete class is a class that can be instantiated directly
class Sparrow : public Bird{
  
  void eat(){
    cout << "Sparrow eat \n";
  }
  
  void fly(){
      cout << "Sparrow fly \n";
  }
};

class eagle : public Bird{
  
  void eat(){
    cout << "eagle eat \n";
  }
  
  void fly(){
      cout << "eagle fly \n";
  }
};



void BirdDetails(Bird*& bird){
  bird->eat();
  bird-> fly();
  bird->eat();
  bird-> fly(); 
  bird->eat();
  bird-> fly(); 
  bird->eat();
  bird-> fly();
}

int main() 
{
   Bird* bird = new eagle();
   
   BirdDetails(bird);
    return 0;
}
