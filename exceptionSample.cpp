#include <iostream>
using namespace std;

//add code below this line

/**
 * This function divides one integer by the other
 * 
 * @param num1 The first integer
 * @param num2 The second integer
 */
void Divide(int num1, int num2) {

try {
  if (num2 == 0){
    throw runtime_error("Cannot Divide by zero.");
  }
  else {
      cout << num1 / num2 << endl;
  }
}

catch (runtime_error& e){
  cout <<e.what() << endl;
}

}
  
int main() {
  Divide(5, 0);
  return 0;
}

//add code above this line
