#include <iostream>
#include "stack.h"


using namespace std;

// NOTE, Added a bunch of debug(cout) statements in the Stack and Queue class
int main()
{
    cout << "Hello world!" << endl;

    // Stack is First In - Last Out
    Stack st;
    st.push('A');
    st.push('B');
    st.deepPrint(cout);
    cout << "-------" << endl;

    // Stack by copy
    Stack newStack(st);

    // Check the addresses
    printf("%p %x\n", &newStack, &newStack);
    printf("%p %x\n", &st, &st);

    newStack.push('Z');
    newStack.deepPrint(cout);
    cout << "-------" << endl;

    // Pop from stack
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    bool data = st.pop() == -1;
    cout << data << endl;
    cout << "-------" << endl;

    // Queue is First In - First Out

    return 0;
}
