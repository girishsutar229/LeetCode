class Solution {
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true; // Empty or single node list is considered a palindrome
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Find the middle of the linked list
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Reverse the second half of the linked list
        ListNode* secondHalf = reverseList(slow->next);
        
        // Compare the first half with the reversed second half
        ListNode* firstHalf = head;
        while (secondHalf != nullptr) {
            if (firstHalf->val != secondHalf->val) {
                return false;                    // Not a palindrome
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        
        return true; // Palindrome
    }
    

};
