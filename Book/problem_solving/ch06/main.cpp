#include <iostream>

#include <fstream> // File IO
#include <cstdlib> // exit statement
#include <iomanip> // manipulator

using namespace std;

static const string READ_FILE = "r.txt";
static const string WRITE_FILE = "w.txt";

// Reads and writes to the file
void read_write_example();

// Writes data to a written file without creating a new one
void append_example();

// Reads the entire file till the end
void read_complete_file();

// Reads the entire file checking for eof
void read_complete_file_eof();

int main()
{
    cout << "Hello world!" << endl;

    // File Read Write
    read_write_example();

    // Append
    append_example();

    // Exit
    // exit(1);

    // using namespace ios (Page 360)

    // Manipulators (iomanip)
    cout << "Hello" << setw(10) << "World" << setw(15) << 12 << endl;

    // File IO must be call by reference

    read_complete_file();
    read_complete_file_eof();

    // get, put, putback for single character io


    return 0;
}

void read_complete_file_eof() {
  ifstream inStream;

  inStream.open(WRITE_FILE);

  string data;
  while(1) {
    if (inStream.eof()) {
      cout << "Breaking" << endl;
      break;
    } else {
      inStream >> data;
      cout << "Got data: " << data  << inStream.eof() << endl;
    }
  }

  inStream.close();
}

void read_complete_file() {
  ifstream inStream;

  inStream.open(WRITE_FILE);

  // char data;
  string data;

  while (inStream >> data) {
    cout << "New Data: " << data << endl;
  }

  inStream.close();
}

void append_example() {

  ofstream outStream;

  outStream.open(WRITE_FILE, ios::app);
  outStream << "APPEND" << endl;
  outStream.close();
}

void read_write_example() {
  ifstream inStream;
  ofstream outStream;

  inStream.open(READ_FILE);
  outStream.open(WRITE_FILE);

  int i1, i2;
  // Read data from file
  inStream >> i1 >> i2;
  cout << i1 << i2 << endl;

  // Write data to file
  outStream << 1 << endl << 2 << endl;

  inStream.close();
  outStream.close();
}
