#include <iostream>
using namespace std;

class abc{
  
  public:
         
         int x;
         int *y;
         
         abc(int _x , int _y):x(_x) , y(new int(_y)){}
         
        // By Defualt dumb copy constructor : Shallow copy : Work fine without dynamic allocation.      
        // abc(const abc& obj){
        //   this-> x = obj.x;
        //   this-> y = obj.y;
        // }
         
        // Smart copy constructor: Deep copy : Work fine with static and dynamic allocation.
            abc(const abc& obj){
          this-> x = obj.x;
          this-> y = new int(*obj.y);
        }
         
         
         void print() const{
           cout << "Value of x: " << this-> x << endl 
                << "Value of y: " << this-> y << endl
                << "Value at address of y (*y): " << *y << endl << endl ; 
         }
  
  ~abc(){
    delete y;
  }
};

int main() 
{
  
  
abc *a = new abc(3,5);
abc b = *a;

b.print();
delete a;
b.print();
// Delete the variabel

  
  // abc a(2 , 6);
  // a.print();
// Change the Value

  // abc b = a;
  // b.print();
  
  // *a.y = 5;
  // a.print();
  // b.print();
    
    return 0;
}
