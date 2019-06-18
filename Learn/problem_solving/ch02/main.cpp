#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    // Raw Literals (C++11 and beyond)
    cout << R"(C:/drive/)" << endl;

    // Set formatting
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << 123.467 << endl;
    cout << 123.5 << endl;

    // Get multiple values together (left to right) (x then y)
    int x, y;
    cin >> x >> y;
    cout << x << "::" << y << endl;

    // C++ Variable types (advanced)
    // auto, decltype
    // bool, std::string

    return 0;
}
