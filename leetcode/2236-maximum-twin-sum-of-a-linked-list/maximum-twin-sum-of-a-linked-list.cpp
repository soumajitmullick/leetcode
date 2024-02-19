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
        if(head == NULL) return head;
        ListNode* prev = NULL;
        while(head->next !=NULL){
            ListNode* tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        head->next = prev;
        return head;
    }
    int pairSum(ListNode* head) {
        ListNode *f=head,*s=head, *l = NULL;

        while(f != NULL && f->next != NULL && f->next->next != NULL){
            f = f->next->next;
            s = s->next;
        }

        l = s->next;
        s->next = NULL;
        l = reverse(l);
        
        int m = 0;
        while(l != NULL && head != NULL){
            cout<< l->val <<" "<<head->val<<endl;
            m = max(l->val+head->val, m);
            l = l->next;
            head = head->next;
        }
        return m;

    }
};