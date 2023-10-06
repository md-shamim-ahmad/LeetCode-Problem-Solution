class Solution {
    public void reorderList(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }
        // divide the linked list into 2 halfs
        // reversing second half
        ListNode second = reverse(slow.next);
        slow.next = null;
        ListNode first = head;
        // combining both the lists
        while (second != null) {
            ListNode temp1 = first.next;
            ListNode temp2 = second.next;
            first.next = second;
            second.next = temp1;
            first = temp1;
            second = temp2;
        }
    }
    private ListNode reverse(ListNode head) {
        ListNode prev = null;
        ListNode current = head;
        ListNode nxt = null;
        while (current != null) {
            nxt = current.next;
            current.next = prev;
            prev = current;
            current = nxt;
        }
        return prev;
    }
}
