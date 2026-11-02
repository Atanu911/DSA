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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b){
        ListNode* dummy = new ListNode(-1);
        ListNode* i = a;
        ListNode* j = b;
        ListNode* k = dummy;
        while(i != NULL and j != NULL){
            if(i->val<j->val){
                k->next =i;
                i = i->next;
            }
            else{
                k->next = j;
                j = j->next;
            }
            k = k->next;
        }
        if(i == NULL) k->next = j;
        if(j == NULL) k->next =i;
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL or head->next == NULL ) return head;
         // step 1 : break the list into to halves..
         ListNode* slow = head;
         ListNode* fast = head;
         while(fast->next != NULL and fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
         }
       
         // at this point slow is at left middle...
         ListNode* head2 = slow->next;
         slow->next = NULL;
         head = sortList(head);
         head2 = sortList(head2);
         return mergeTwoLists(head,head2);
    }
};