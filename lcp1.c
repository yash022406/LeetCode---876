/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode * temp = head;
    int n=0,i;      // will be the number of nodes present
    while(temp!=NULL){
        temp=temp->next;
        n++;
    }
    temp=head;
    n=n/2+1;
    for(i=0;i<n-1;i++){
        temp=temp->next;
    }
    return temp;
}