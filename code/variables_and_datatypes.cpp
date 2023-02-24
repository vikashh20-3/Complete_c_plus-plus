//Rules to Declare Variables in C++
// Variable names can range 1 to 255 characters.
// Variable names must begin with a letter of the alphabet or an underscore(_).
//after the first initial letter ,variable names can also contain letters and numbers.
//Variable names are case sensitive.
//No spaces or special characters are allowed. 
// You cannot use a C++ reserved word as a variable name. 

#include <iostream> 

// here we make a function 
int global_var=3;//here the global_var is global variable 
void show(){
  int a;
  std::cout<<global_var;
}
int main() {
 int global_var=20;//after declaring here the value changes from 3 to 20 //this is declared in braces means it is local variable here 
  int a =4;
  int b=23;
  float pie=3.14;
  //we can also write this int a=4,b=23;
  char myname='u';
  //here we declared a variable named as 'a' with a data type integer as we written before the variable name 
  std::cout << "Hello this is a file in which you will find the use of variable and the data type\n"<<"This is the value of   integer variable named 'a'\t"<<a<<"\nThis is the value of b integer\t"<<b<<"\nThis is the value of char variable named as myname\t"<<myname<<"\n The value of pie is \t"<<pie;
  std::cout <<"\n Global Variable is \t"<<global_var<<"\n";//now the value of global_var is 20 because this is now a local variable it taking the value of it from inside the braces of main function 
  show();// In this function the value of global_var seems to be 3 because it takes the value outside from main function means from the global varaible declared .
  
  
  return 0;

  }