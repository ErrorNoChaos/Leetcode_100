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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
           ListNode *dummy= new ListNode(0);
           ListNode *newlist= dummy;
           while(list1 && list2){
            if(list1->val<=list2->val){
                newlist->next=list1;
                list1=list1->next;
            }
            else{
                newlist->next=list2;
                list2=list2->next;
            }
            newlist=newlist->next;
           }
           newlist->next=list1?list1:list2;
        return dummy->next;

        
    }
};