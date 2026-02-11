package Questions.Step_6_Linked_List;

public class PartitionList {
    public ListNode partition(ListNode head, int x) {
        ListNode beforeStart = new ListNode(0);
        ListNode before = beforeStart;
        ListNode afterStart = new ListNode(0);
        ListNode after = afterStart;

        while (head != null) {
            if (head.val < x) {
                before.next = head;
                before = before.next;
            } else {
                after.next = head;
                after = after.next;
            }
            head = head.next;
        }

        after.next = null;
        before.next = afterStart.next;

        return beforeStart.next;
    }

    public static void main(String[] args) {
        System.out.println("Partition List implemented.");
    }
}
