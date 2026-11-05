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
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev =NULL;
       
        while(curr != NULL){
             ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }

    int pairSum(ListNode* head) {
        ListNode* fast =head;
        ListNode* slow = head;
        while(fast != NULL and fast->next != NULL and fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

        }
        ListNode* a =head;
        ListNode* b =slow->next;
        slow->next = NULL;
        b =reverse(b);
        ListNode* t1 = a;
        ListNode* t2 = b;
        int maxSum = 0;
        while(t2 != NULL){
            int currentSum = t1->val + t2->val;
            if(currentSum>maxSum) maxSum = currentSum;
            t1 = t1->next;
            t2 = t2->next;
        }
        return maxSum;

    }
};