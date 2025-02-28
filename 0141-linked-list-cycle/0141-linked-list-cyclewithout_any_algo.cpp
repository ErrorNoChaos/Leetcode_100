/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL ||head->next==NULL){
            return false;
        }
        unordered_set<ListNode*>visited;
        ListNode *dummy=head;
        while(dummy!=NULL){
            if(visited.find(dummy)!=visited.end()){
                return true;
                //cycle Detected
            }
            visited.insert(dummy);
            dummy=dummy->next;
        }
        return false;
        
    }
};