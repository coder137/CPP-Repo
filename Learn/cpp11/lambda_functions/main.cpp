/**
 * Author: Niket Naidu
 * Link: https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=vs-2019
 * 
 */
#include <iostream>
#include <vector>
#include <functional> // std::function

#include <bits/stdc++.h>
using namespace std;

void randomFuncPointer(void (*ptr)(void));
void randomCppFunc(function<void(void)> func);

int main()
{
  cout << "Hello World" << endl;

  // Lambda functions declared inline
  auto func = []() {
    cout << "This is a lambda function passing to func variable" << endl;
  };
  func();

  // using without passing to variable
  []() {
    cout << "Using lambda without passing as variable" << endl;
  }();

  // Using lambda inside std functions
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  for_each(v.begin(), v.end(), [](int i) {
    cout << i << " ";
  });
  cout << endl;

  // Using lambda inside user function pointers
  // NOTE, We cannot pass any capture parameters when converting a lambda to function pointer
  randomFuncPointer([]() {
    cout << "<Lambda function>" << endl;
  });

  // Using std::functions with lambda
  // NOTE, We CAN pass capture parameters to std::function types
  randomCppFunc([&]() {
    cout << "v[0] -> " << v[0] << endl;
  });

  return 0;
}

/**
 * FUNCTIONS
 */

void randomFuncPointer(void (*ptr)(void))
{
  cout << "Calling function pointer" << endl;
  ptr();
}

void randomCppFunc(function<void(void)> func)
{
  cout << "Calling function Cpp Func" << endl;
  func();
}
