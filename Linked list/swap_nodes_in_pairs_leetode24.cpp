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
    ListNode* swapPairs(ListNode* head) {
        //step 1 : Split into odd and even linked list..
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);
        ListNode* temp = head;
        ListNode* temp1 = dummy1;
        ListNode* temp2 = dummy2;
        int idx =1;
        while(temp != NULL){
            if(idx%2 ==1){
                temp1->next= temp;
                temp1 =temp1->next;

            }
            else{
                temp2->next = temp;
                temp2 =temp2->next;
            }
            temp = temp->next;
            idx++;
        } 
        temp2->next = NULL;
        temp1->next = NULL;

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        ListNode* p2 = dummy2->next;
        ListNode* p1 = dummy1->next;
        while(p1 != NULL and p2 != NULL){
            curr->next = p2;
            curr = curr->next;
            p2 = p2->next;

            curr->next = p1;
            curr = curr->next;
            p1 = p1->next;

        }
        if(p1 != NULL) curr->next = p1;
        if(p2 != NULL) curr->next =p2;

        return dummy->next;
    }
};