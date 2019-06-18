#include <iostream>

using namespace std;

// C++11 (strong enums)
// NOTE: These are NOT ints, usage given below
enum class Days { Sun, Mon, Tues, Wed };

int main()
{
    cout << "Hello world!" << endl;

    // Strong enums
    Days d = Days::Sun;
    bool value = (d == Days::Sun);
    cout << value << endl;

    return 0;
}
