#include <iostream>

using namespace std;

// NOTE, By default using int array of len 5 for example purposes

// Sending an array value like this is (by reference)
// NOTE, Mark const if not to be changed
void fill_array(int a[]);
void print_array(const int a[]);

// 5, 5 array
void multi_dimensional_array(int b[][5]);

int main()
{
    cout << "Hello world!" << endl;

    // C++11 For loop
    int arr[] = {1, 2, 3, 4, 5};
    // By Copy
    for(int num : arr) {
      cout << num << endl;
    }
    // By Reference (if we change num here the int array is changed)
    for(int& num : arr) {
      cout << num << endl;
    }

    // Array is filled by values
    int new_arr[5];
    fill_array(new_arr);
    print_array(new_arr);

    return 0;
}

void fill_array(int a[]) {
  for(int i=0;i<5;i++) {
    a[i] = 47;
  }
}

void print_array(const int a[]) {
  for(int i =0; i<5;i++) {
    cout << "Print: " << a[i] << endl;
  }
}
