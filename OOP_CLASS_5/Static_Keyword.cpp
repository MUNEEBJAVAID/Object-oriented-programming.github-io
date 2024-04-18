#include <iostream>
using namespace std;

// Static data member
                    // belong to the class and share the memory with all of the class instances
                    // Access in static and no satic memory functions
                    // By default intialize with 0
                    
// static data member
                   // just access the static data member.Doesn't access non-static data member
                   // because in STD doesn't pass this pointer who point the 
                  // current object so compiler confused which instances / object propert we want access. 
                  
                  

// class Dummy{
//   public:
//           int x , y;
          
//         void print(){
              // cout << this->x << "   " <<  this->y << endl;
//             cout << x << "   " <<  y << endl;
//           }
// };                 


class Dummy{
  public:
         static int x , y;
        
        // c++ by defult hidden (this pointer)parameter pass nai krta so doesn't access non-static member  
        static void print(){
            cout << x << "   " <<  y << endl;
          }
}; 

int Dummy::x = 1;
int Dummy::y = 9;

int main() 
{
  
 
   
  Dummy obj1;
  obj1.x = 1;
  obj1.y = 2;
  // yaha par c++ by defult hidden (this pointer)parameter pass krta ha jo refer karta ha current object ko that's why pata chalta ha ke kay kis objext ke data member ko access karny ke koshish krrhy ham
  obj1.print();
   
  Dummy obj2;
  obj2.x = 5;
  obj2.y = 7;
  obj2.print();
   
   
    return 0;
}
