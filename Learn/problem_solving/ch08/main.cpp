#include <iostream>
#include <string>
#include <vector>

using namespace std;

void string_example();
void vector_example();

int main()
{
    cout << "Hello world!" << endl;

    // Strings
    string_example();

    // Vectors (Page 523)
    vector_example();

    // v.reserve (to allocate vector capacity)
    // v.resize (to resize the vector)

    return 0;
}

void vector_example()
{
    vector<int> v;
    vector<double> d = {1.1, 2.2, 3.3};
    v.push_back(12);
    v.push_back(25);
    v.push_back(38);

    for (int i : v)
    {
        cout << i << endl;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

void string_example()
{

    string data;
    getline(cin, data);
    cout << data << endl;
    cout << data.length() << endl;
}
