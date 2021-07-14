/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        
        // 判断是否存在回路
        do {
            if (!fast || !fast->next) {
                return nullptr;
            }
            fast = fast->next->next;
            slow = slow->next;
        } while (fast != slow);

        // 如果存在，找环路节点
        fast = head;
        while (fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }

        return fast;
    }
};
