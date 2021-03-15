#include "my_list.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    const int N = 20;
    MyList<int> lst;

    for (int i = N - 1; i > 0; --i)
    {
        lst.push_front(i);
    }

    for (const int & i : lst)
    {
        cout << i << endl;
    }

    return 0;
}
