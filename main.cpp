#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
  cout << "main()" << endl;
  if (argc != 2) {
    cerr << "Error: must enter a file name" << endl;
    return -1;
  }
  string filename = argv[1];
  cout << "Filename: " << filename << endl;
  return 0;
}
