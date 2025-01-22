#include <iostream>
using namespace std;

class ListNode {
public:
    int val = 0;
    ListNode* next;

    ListNode(int value) {
        this->val = value;
        next = nullptr;
    }
};

class Problem {
public:
    ListNode* solve(ListNode* head) {

        // Brute Force Solution
        // ListNode* fast = head;
        // ListNode* slow = head;
        // int linkedListCount = 1;
        
        // while (fast != nullptr && fast->next != nullptr) {
        //     linkedListCount++;
        //     fast = fast->next;
        // }

        // int middleCount = (linkedListCount/2) + 1;

        // for (int i = 1; i < middleCount; i++) {
        //     slow = slow->next;
        // }

        // return slow;

        ListNode* fast = head;
        ListNode* slow = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }

};


int main() {

    Problem FindMiddleOfLinkedList;

    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);
    ListNode node5(5);
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;

    cout << "First LinkedList: " << FindMiddleOfLinkedList.solve(&node1) << endl;
    cout << "Correct address: " << &node3 << endl;

    ListNode node6(1);
    ListNode node7(2);
    ListNode node8(3);
    ListNode node9(4);
    ListNode node10(5);
    ListNode node11(6);
    node6.next = &node7;
    node7.next = &node8;
    node8.next = &node9;
    node9.next = &node10;
    node10.next = &node11;

    cout << "Second LinkedList: " << FindMiddleOfLinkedList.solve(&node6) << endl;
    cout << "Correct address: " << &node9 << endl;

    ListNode node12(1);
    ListNode node13(2);
    ListNode node14(3);
    ListNode node15(4);
    ListNode node16(5);
    ListNode node17(6);
    ListNode node18(7);
    node12.next = &node13;
    node13.next = &node14;
    node14.next = &node15;
    node15.next = &node16;
    node16.next = &node17;
    node17.next = &node18;

    cout << "Third LinkedList: " << FindMiddleOfLinkedList.solve(&node12) << endl;
    cout << "Correct address: " << &node15 << endl;
}