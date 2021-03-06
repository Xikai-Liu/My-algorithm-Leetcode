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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> now;
        ListNode* cur=head;
        while (cur!=NULL){
            now.push_back(cur);
            cur=cur->next;
        }
        if (n==now.size()) head=head->next;
        else now[now.size()-n-1]->next=now[now.size()-n]->next;
        return head;
    }
};
