#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;                                            //creates a string variable which is called name
  cout<<"What is your name? ";                            //Takes the input from the user
  cin>>name;                                              //Assigns the input to the variable name
  name[0] = toupper(name[0]);                             //Changes the first letter of the name to uppercase if it wasn't before
  cout<<"Your new name is Sir "+name+"alot";              //puts name inside a string and outputs this to user
  return 0;                                               //ends the program
}
