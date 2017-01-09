#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream f("numbers.txt");
  if (f.is_open()) {
    cout << "Successfully opened \"numbers.txt\" for reading.\n"; 
    
    while ( !f.eof() ) // eof() method checks wether we
                       // have reached the end-of-file.
    {
      f >> num;
      cout << num << '\n';
    }
    
    f.close(); // Don't forget to close the file stream
  }
  else {
    cerr << "Error opening \"numbers.txt\" for reading.\n";
  }

  return 0;
}
