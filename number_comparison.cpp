#include <iostream>
using namespace std;

// Variables in comments are written inside ''

int main() {
  
  // Making two integer variables 'num_'1 and 'num_2'
  
  int num_1,num_2;
  
  // Taking Input from user
  
  cout << "Enter first number: ";
  cin >> num_1;
  cout << "Enter the second number: ";
  cin >> num_2;
  
  // Checking if 'num_1' > 'num_2' and printing if true
  
  if (num_1 > num_2){
    cout << num_1 <<" is greater than "<< num_2 << endl;
  }
    
  // checking if 'num_1' < 'num_2' and printing if true
  
  else if (num_1 < num_2){
    cout << num_2 <<" is greater than "<< num_1 << endl;
  }
    
  // if both the conditions are not met then 'num_1' and 'num_2' are same and printing
  
  else{
    cout << "Both "<< num_1 << " and " << num_2 << " are same"<< endl;  
  }
}
