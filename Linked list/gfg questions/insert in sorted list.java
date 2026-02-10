class Solution {
    Node sortedInsert(Node head, int data) {
        Node newNode = new Node(data);

        // Case 1 & 2: empty list or insert at beginning
        if (head == null || data <= head.data) {
            newNode.next = head;
            return newNode;
        }

        // Case 3: insert in middle or end
        Node curr = head;
        while (curr.next != null && curr.next.data < data) {
            curr = curr.next;
        }

        newNode.next = curr.next;
        curr.next = newNode;

        return head;
    }
}
