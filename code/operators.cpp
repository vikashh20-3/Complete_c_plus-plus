// C++ Operators 
// https://en.cppreference.com/w/cpp/language/expressions#Operators

#include<iostream>
using namespace std;
int main (){
  int a=4,b=3;
  cout<<"Operators demo in C++:"<<endl;
  // we can use \n and also endl to jump in new  line 
  cout<<"Following are the types of operators used in C++ :"<<endl;
  // 1. Arithmetic operators
  cout<<"The Value of a - b is :"<<a-b<<endl;
  cout<<"The Value of a + b is :"<<a+b<<endl;
  cout<<"The Value of a * b is :"<<a*b<<endl;
  cout<<"The Value of a / b is :"<<a/b<<endl;
  // The output of divide is always integer 
  cout<<"The Value of a % b is :"<<a%b<<endl;//modules operator
  // It claculates the remainder of the operators
  cout<<"The Value of a ++ is :"<<a++<<endl;
  // This operator means first print the value of a and then plus one then the value of a become plus 1 in value of a 
  cout<<"Value of a is "<<a<<endl;//5
  cout<<"The Value of a -- is :"<<a--<<endl;//value of a is 5
  //this operator will print the value of a first and then minus one from the value then the value of a is 
  cout<<"Value of a is "<<a<<endl;//4
  cout<<"The Value of  ++a is :"<<++a<<endl;//value if 5
  // this operator is slightly different in this it add one in value of a first and then print the value 
  cout<<"The Value of --a is :"<<--a<<endl;//value is 4

// !! 
  // Assignment operators --> Uses to assign values to opearators  
  // int a=3,b=32;
   // char d ='v';
   //   a = b
   // a += b
   // a -= b
   // a *= b
   // a /= b
   // a %= b
   // a &= b
   // a |= b
   // a ^= b
   // a <<= b
   // a >>= b

  // Comparison Operators --> Uses to 
  cout<<"Following are the Comparison Operators in C++ :"<<endl;
  cout<<"The Value of a==b\t"<<(a==b)<<endl;
  cout<<"The Value of a!=b\t"<<(a!=b)<<endl;
  cout<<"The Value of a>b\t"<<(a>b)<<endl;
  cout<<"The Value of a<b\t"<<(a<b)<<endl;
  cout<<"The Value of a<=b\t"<<(a<=b)<<endl;
  cout<<"The Value of a>=b\t"<<(a>=b)<<endl;



  //Logical Operators 
  //   !a // It means not equal to a  // THIS IS KNOWN  AS LOGICAL NOT OPERATOR
  // a && b // It means both a and b are true // THIS IS KNOWN AS LOGICAL AND OPERATOR.
  // a || b // It means atlest one from a and b is true // THIS IS KNOWN AS LOGICAL OR OPERATOR.
  cout<<"Followind are the Logical Operators in C++ :"<<endl;
  cout<<"The value of ((a>b) && (a>=b))\t"<<((a>b) && (a>=b))<<endl;//AND operator 
  cout<<"The value of ((a=b) || (a!=b)\t"<<((a=b) || (a!=b))<<endl;// OR operator
  int c=5,d=2;
  cout<<"The value of !(c==d)\t"<<!(c==d); // NOT operator // it reverse  the result 
  return 0;
}