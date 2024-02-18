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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* tmp;
        ListNode* prev = NULL;

        while(head->next != NULL){
            cout<<head->val<<endl;
            tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        head->next = prev;
        return head;
    }
};