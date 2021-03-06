/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head) return NULL;
        RandomListNode* res = new RandomListNode(head->label);
        RandomListNode* cur = head->next;
        RandomListNode* node = res;
        unordered_map<RandomListNode*, RandomListNode*> m;
        m[head] = res;
        while(cur){
            RandomListNode* tmp = new RandomListNode(cur->label);
            node->next = tmp;
            m[cur] = tmp;
            
            node = node->next;
            cur = cur->next;
        }
        node = res;
        cur = head;
        while(cur){
            node->random = m[cur->random];
            node = node->next;
            cur = cur->next;
        }
        return res;
    }
};