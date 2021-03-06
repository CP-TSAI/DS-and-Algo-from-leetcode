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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        this->head = head;
        ListNode* cur = head;
        while(cur != NULL){
            len++;
            cur = cur->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int rnd = rand() % len;
        ListNode* cur = head;
        while(rnd){
            cur = cur->next;
            rnd--;
        }
        return cur->val;
    }
private:
    int len = 0;
    ListNode* head;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */

// ref: http://www.cnblogs.com/grandyang/p/5759926.html