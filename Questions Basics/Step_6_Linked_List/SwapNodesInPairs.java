package Questions.Step_6_Linked_List;

public class SwapNodesInPairs {
    public ListNode swapPairs(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode second = head.next;
        head.next = swapPairs(second.next);
        second.next = head;
        return second;
    }

    public static void main(String[] args) {
        System.out.println("Swap Nodes in Pairs implemented.");
    }
}
