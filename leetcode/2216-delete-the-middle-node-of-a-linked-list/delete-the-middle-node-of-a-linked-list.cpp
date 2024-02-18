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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *s = head,*f = head, *prev;

        if(head == NULL || head->next == NULL) return NULL;
        
        while(f->next != NULL && f->next->next != NULL){
            prev = s;
            s = s->next;
            f = f->next->next;
            
        }

        if(f->next == NULL){
            prev->next = s->next;
        }
        else{
            s->next = s->next->next;
        }

        return head;
    }
};