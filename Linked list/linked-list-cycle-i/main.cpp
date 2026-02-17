// https://leetcode.com/problems/linked-list-cycle/

// *S O L U T I O N    1:*

class Solution {
public:
  typedef ListNode *ln;
  bool hasCycle(ListNode *head) {
    if (!head || !head->next)
      return 0;

    ln s = head->next;
    ln f = head->next->next;

    while (s && f && s != f) {
      s = s->next;
      f = f->next;
      f = f ? f->next : f;
    }

    return (s && f);
  }
};

// *S O L U T I O N    2:*
class Solution {
public:
  typedef ListNode *ln;
  bool hasCycle(ListNode *head) {
    ln s = head;
    ln f = head;

    while (f && f->next) {
      s = s->next;
      f = f->next->next;

      if (s == f)
        return 1;
    }

    return 0;
  }
};
