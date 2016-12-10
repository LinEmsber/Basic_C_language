/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head)
{
        struct ListNode* pre=NULL;
        struct ListNode *temp;

        while(head!=NULL){
                temp=head->next;
                head->next=pre;
                pre=head;
                head=temp;
        }
        
        return pre;
}
