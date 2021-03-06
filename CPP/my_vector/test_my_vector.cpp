#include "my_vector.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    const int N = 20;
    MyVector<int> v;

    for (int i = N - 1; i > 0; --i)
    {
        v.push_pack(i);
    }

    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "empty(): " << std::boolalpha << v.empty() << std::noboolalpha << endl;
    cout << "size(): " << v.size() << endl;
    cout << "capacity(): " << v.capacity() << endl;
    cout << "[]: " << v[3] << endl;
    cout << "back(): " << v.back() << endl;
    cout << "begin(): " << *(v.begin()) << endl;
    cout << "end(): " << *(v.end()) << endl;
    
    return 0;
}
