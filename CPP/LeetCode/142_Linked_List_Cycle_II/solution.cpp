#include "solution.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    ListNode node1(3);
    ListNode node2(2);
    ListNode node3(0);
    ListNode node4(-4);

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node2;

    Solution s;
    cout << s.detectCycle(&node1)->val << endl;

    return EXIT_SUCCESS;
}
