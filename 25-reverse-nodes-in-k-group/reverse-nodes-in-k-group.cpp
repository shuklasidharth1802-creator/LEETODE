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
    
      ListNode* reverse(ListNode* head, int times){
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(times--){
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }

        return prev;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr)
            return head;

        ListNode* left = head;
        ListNode* right;
        ListNode* res = nullptr;
        ListNode* prevleft = nullptr;

        int size = k;

        while(left != nullptr){

            right = left;

            for(int i = 0; i < size-1; i++){
                if(right == nullptr)
                    break;

                right = right->next;
            }

            if(right == nullptr){
                if(prevleft)
                    prevleft->next = left;
                break;
            }

            ListNode* nextleft = right->next;

            ListNode* newHead = reverse(left, size);

            if(res == nullptr)
                res = newHead;

            if(prevleft)
                prevleft->next = newHead;

            left->next = nextleft;

            prevleft = left;
            left = nextleft;
        }

        return res;

        
    }
};