#include <iostream>
using namespace std;

// Before compilation preprocessor replace  PI with their macro values:

// Doesn't change value and memory allocation 
// Improve readability

#define PI 3.14
#define MAX(x,y) (x > y? x : y)
#define MIN(x,y) (x < y? x : y)

float circleArea(float r){
  return PI * r * r;
}

float circlePerimeter(float r){
  return 2 * PI * r;
}

int MaxValue(int x , int y){
  return MAX(x,y);
}

int MinValue(int x , int y){
  return MIN(x,y);
}

int main(){
 
 cout << circleArea(13.1) << endl;
 cout << circlePerimeter(12.1) << endl;
 cout << MaxValue(10,12) << endl;
  cout << MinValue(10,12) << endl;
  return 0;
}


