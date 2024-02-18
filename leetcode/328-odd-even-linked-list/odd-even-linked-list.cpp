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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd = NULL, *even = NULL, *e=NULL, *o=NULL;
        int count = 1;
        if(head == NULL) return NULL;
        while(head != NULL){
            if(count % 2 == 0){
                if(even == NULL){
                    e = head;
                    even = head;
                    }
                else{
                    even->next = head;
                    even = head;
                }
            }else{
                if(odd == NULL){
                    o = head;
                    odd = head;
                    }
                else{
                    odd->next = head;
                    odd = head;
                }
            }
            head = head->next;
            count++;
        }
        if(even != NULL) even->next = NULL;
        if(o == NULL) e;
        odd->next = e;
        return o;
    }
};