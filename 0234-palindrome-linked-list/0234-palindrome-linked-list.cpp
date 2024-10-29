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
    bool isPalindrome(ListNode* head) {
        int num_nodes = 0;
        ListNode * mover = head;
        while(mover != nullptr){
            num_nodes++;
            mover = mover->next;
        }
        mover = head;
        //need to add num_node / 2 nodes to stack;
        std::stack<ListNode*> stack_nodes;
        for(int i = 0; i < num_nodes / 2; i++){
            stack_nodes.push(mover);
            mover = mover->next;
        }
        if(num_nodes % 2 == 1){
            mover = mover->next;
        }
        while(!stack_nodes.empty()){
            if(stack_nodes.top()->val != mover->val){
                return false;
            }
            stack_nodes.pop();
            mover = mover->next;
        }
        return true;
        
    }
};