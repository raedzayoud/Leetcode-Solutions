/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void InsterAfter(ListNode * prv_Node, int value) {
	if (prv_Node == NULL) {
		cout << "Node is NULL";
		return;
	}
	ListNode* new_Node = new ListNode();
	new_Node->val = value;
	new_Node->next = prv_Node->next;
	prv_Node->next = new_Node;
}
    int GreatDiv(int val1, int val2) {
        int minVal =
            (val1 < val2) ? val1 : val2; // Find the minimum of the two numbers
        int maxDivisor = 1;              // Initialize the maximum divisor

        // Loop to find the greatest common divisor
        for (int i = 1; i <= minVal; i++) {
            if (val1 % i == 0 && val2 % i == 0) {
              
                maxDivisor = i; // Update maxDivisor if i is a common divisor
            }
        }

        return maxDivisor;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head; // No need to process if the list has less than 2 nodes
        }
        ListNode* curret = head;
       while (curret != nullptr && curret->next != nullptr) {
            int x=GreatDiv(curret->val,curret->next->val );
          InsterAfter(curret,x);
         curret= curret->next->next;
            
        }
        return head;
    }
};