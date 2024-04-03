#include <iostream>
using namespace std;

// Firend Keyword:
                  // keyword is used to declare that a function or a class is a friend of another class.
                  // A friend function or class is granted access to the private and protected members of the class

class A{
  
  private:
        int x;
        friend class B;
        friend void print(const A& obj);
  public:
        A(int _x): x(_x){}
        
        int getX()const {return x;}
        void setX(int _x){this->x = _x;}
  
};

// With class
class B{
  
  public:
         
        void print(const A& obj){
          // Access using getter
          // cout << obj.getX() << endl;
          
          cout << obj.x << endl;
        } 
  
};

// with function
void print(const A& obj){
         
          cout << obj.x << endl;
    } 

int main() 
{
  A a(30);
  // B b;
  // b.print(a);
  
  print(a);
    return 0;
}
