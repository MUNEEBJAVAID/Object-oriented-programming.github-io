#include <iostream>
using namespace std;

// Can constructor be made private : yes 

class shirt{
  private:
         string colour;
         shirt(string _colour): colour(_colour){}
  public:
         
         
         int getShirtColour() const{
           cout << colour << endl;
         }
         
         void setShirtColur(string _colour) {
           colour = _colour;
         }
         
         friend class shirtFactory;
};


class shirtFactory{
  int count;
  
  public:
  
  shirt getShirt(string _colour) const{
    return shirt(_colour);
  }
};

int main() 
{

  shirtFactory blueLine;
    
  // copy constructor called: shallow copy 
  shirt b = blueLine.getShirt("Blue");
  b.getShirtColour();  
  
    return 0;
}
