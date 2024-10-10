#include <iostream>
using namespace std;

int main(int argc, char** argv) {

  string my_string = (argv[1]);

  /*add code below this line
  */

  string vowels = "aeiouAEIOU";
  int num = 0;
  int i = 0;
  cout << "Length: " << my_string.length() << endl;
  for (i=0; i<=(my_string.length()-1); i++)
  {
    if (vowels.find(my_string.at(i)) != std::string::npos) 
      {
        cout <<"Find: " << my_string.find(vowels[i]) << endl;
        cout << "i: " << i << endl;
        cout << "num before: " << num << endl;
        num += 1;
        cout << "num after: " << num << endl;
      }
      else 
      {
        cout << "No Match, i= " << i << endl;
      }
  }

  if (num == 0) { 
    cout << "There are no vowels in the string." << endl;
  }
  else if (num == 1) {
    cout << "There is 1 vowel in the string." << endl;
  }
  else  {
    cout << "There are " << num << " vowels in the string.";
  }
  

  

  //add code above this line
  
  return 0;
  
}

