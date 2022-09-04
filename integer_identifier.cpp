#include <iostream>
using namespace std;

// variable names in comments are written inside ''

int main(){
  
  // Creating an integer variable 'a'
  int a;

  // Printing the text and asking input from user
  cout << "Enter a number: ";
  cin >> a;

  // Printing the value of 'a' 
  cout << "Value of a is: "<< a <<endl;
  
  // if a is positive
  if (a>0){
    cout <<a << " is Positive "<<endl;
  }
    
  // if a is negative
  else if(a<0){
    cout <<a << " is negative" <<endl;
  }
    
  // if a is 0
  else{
    cout <<a << " is zero " << endl;
  }
