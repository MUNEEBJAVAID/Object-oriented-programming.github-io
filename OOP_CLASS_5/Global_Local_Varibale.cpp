#include <iostream>
using namespace std;

/* Global Variable
   1: define outside the func
   2: Accessable to All func
*/   

int x = 9;

void print(){
  int x = 8;
  cout << x << endl;
  cout << ::x << endl;
}

int main() 
{
  /* Global Variable
   1: define inside the func
   2: Accessable to only func in which we declared
   3: Blocked scop
*/ 
    int x = 2;
    
    // To access global Variable we use :: Scope resolation operator
    cout << x  << endl <<  ::x << endl;
    
    
    {
      
      int x = 12;
      cout << x << endl;
      cout << ::x << endl;
    }
    
   print();
    return 0;
}
