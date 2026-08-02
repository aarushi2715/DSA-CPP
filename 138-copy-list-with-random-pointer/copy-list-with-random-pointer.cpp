/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr)
            return nullptr;

        // Step 1: Insert copied nodes after each original node
        Node* curr = head;
        while (curr != nullptr) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        // Step 2: Assign random pointers to copied nodes
        curr = head;
        while (curr != nullptr) {
            if (curr->random != nullptr)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        // Step 3: Separate the original and copied lists
        Node* dummy = new Node(0);
        Node* copyCurr = dummy;
        curr = head;

        while (curr != nullptr) {
            Node* copy = curr->next;

            curr->next = copy->next;
            copyCurr->next = copy;
            copyCurr = copy;

            curr = curr->next;
        }

        return dummy->next;
    }
};