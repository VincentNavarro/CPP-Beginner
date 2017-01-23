/*
Vincent Navarro
Input / Output

User inputs their name. Displays text with name as well as addtional text
*/

#include <iostream>
using namespace std;

int main()
{
  string name;
  //creates name as a string variable

  cout << "Hi there! What is your name?" << endl;
  //prompts user to input name

  cin >> name;
  //reads in, and stores name string

  cout << "Hello " << name << ". How is your day today?" << endl;
  //Displays name string as well as surrounding text

  return 0;
}
