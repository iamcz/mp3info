#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char * argv[]) {
  cout << "main()" << endl;

  if (argc != 2) {
    cerr << "Error: must enter a file name" << endl;
    return -1;
  }

  string filename = argv[1];
  ifstream fs;
  fs.open(filename, fstream::in);
  if (fs.is_open()) {
    char id3[3];
    fs.read(id3, 3);
    if (strcmp(id3, "ID3") != 0) {
      cerr << "Error: file does not have ID3 information" << endl;
      return -1;
    }
    fs.close();
  } else {
    cerr << "Error: could not open " << filename << endl;
    return -1;
  }
  return 0;
}
