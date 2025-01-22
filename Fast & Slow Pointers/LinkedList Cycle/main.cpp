#include <iostream>

using namespace std;

class ListNode {
    public:
        int val = 0;
        ListNode *next;

        ListNode(int value) {
            this->val = value;
            next = nullptr;
        }
};

class Problem {

    public:
        bool hasCycle(ListNode *head) {

            if (!head || !head->next) {
                return false;
            }

            ListNode* slow = head;
            ListNode* fast = head->next;

            while (fast != nullptr && fast->next != nullptr) {

                if ( slow == fast ) {
                    return true;
                } else {
                    slow = slow->next;
                    fast = fast->next->next;
                }
            }

            return false;
        }
};

int main() {

    Problem CheckForCycle;

    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(2);
    ListNode node5(5);
    ListNode node6(6);

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;

    cout << "First LinkedList " << CheckForCycle.hasCycle(&node1) << endl;

    ListNode node10(1);
    ListNode node11(2);
    ListNode node12(3);
    ListNode node13(2);
    ListNode node14(5);
    ListNode node15(6);

    node10.next = &node11;
    node11.next = &node12;
    node12.next = &node13;
    node13.next = &node14;
    node14.next = &node15;
    node15.next = &node13;

    cout << "Second LinkedList: " << CheckForCycle.hasCycle(&node10) << endl;

    return 0;
}