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
    char version[2];
    fs.read(version, 2);
    cout << (int) (char) 10 << endl;
    cout << "Version: 2." << (int) version[0] << "." << (int) version[1] << endl;
  } else {
    cerr << "Error: could not open " << filename << endl;
    return -1;
  }
  return 0;
}
