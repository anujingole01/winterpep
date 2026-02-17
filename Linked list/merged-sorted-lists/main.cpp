// https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
  typedef ListNode *ln;
  ListNode *mergeTwoLists(ListNode *a, ListNode *b) {
    if (!a)
      return b;
    if (!b)
      return a;

    ln dummy = new ListNode(-1);

    ln finalHead = (a->val <= b->val) ? a : b;

    while (a && b) {
      if (a->val <= b->val) {
        dummy->next = a;
        dummy = a;
        a = a->next;
      } else {
        dummy->next = b;
        dummy = b;
        b = b->next;
      }
    }

    if (a)
      dummy->next = a;
    if (b)
      dummy->next = b;

    return finalHead;
  }
};
