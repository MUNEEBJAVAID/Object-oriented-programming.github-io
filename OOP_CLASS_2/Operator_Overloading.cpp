#include<iostream>
using namespace std;
class Param{
    public:
    int val;

    void operator+(Param& obj2){
        int value1 = this->val ;
        int value2 = obj2.val;
        cout<<(value1 - value2);
    }
};

class Person{
  private:
  string name;
  int age;
  string work;
  int salary;
  
  
  friend istream& operator >> (istream& input , Person & obj);
  friend ostream& operator << (ostream& output , Person & obj);
};

istream& operator >> (istream& input , Person & obj){
  input >> obj.name;
  input >> obj.age;
  input >> obj.work;
  input >> obj.salary;
  return input;
}

ostream& operator << (ostream& output , Person & obj){
  output << obj.name << endl;
    output << obj.age << endl;
      output << obj.work << endl;
        output << obj.salary << endl;
        return output;
}

int main(){
    Param obj1,obj2;
    obj1.val = 7;
    obj2.val = 2;
    // This should print the difference between them
    obj1 + obj2;
    
    Person Muneeb;
    cin >> Muneeb;
    cout << Muneeb;
    return 0;
}



