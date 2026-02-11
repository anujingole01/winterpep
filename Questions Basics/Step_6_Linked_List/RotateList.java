package Questions.Step_6_Linked_List;

public class RotateList {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null || k == 0)
            return head;

        ListNode curr = head;
        int len = 1;
        while (curr.next != null) {
            curr = curr.next;
            len++;
        }
        curr.next = head; // make circle

        k = k % len;
        k = len - k;

        while (k-- > 0) {
            curr = curr.next;
        }

        head = curr.next;
        curr.next = null;

        return head;
    }

    public static void main(String[] args) {
        System.out.println("Rotate List implemented.");
    }
}
