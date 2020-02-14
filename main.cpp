#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string input;

  int count = 0, length;

  cout << "Enter a message: \n";
  getline(cin, input);

  length = (int)input.length();

  for (count = 0; count < length; count++) 
  {
    if (isalpha(input[count])) 
    {
      input[count] = tolower(input[count]);
      for (int i = 0; i < 13; i++) 
      {
        if (input[count] == 'z')
            input[count] = 'a';
        else 
          input[count]++;
      }
    }
  }
  cout << "Encrypted Message: \n" << input << endl;
}