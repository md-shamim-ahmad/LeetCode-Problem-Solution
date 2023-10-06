// Definition for singly-linked list.
class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

class Solution {
    /*
        Floyd’s Cycle Detection Algorithm
        Time Complexity -> O(n)
        Space Complexoty -> O(1)

        Move the slow pointer by one position.
        Move the fast pointer by two positions.
        If both pointers meet at some point then a loop exists and if the fast pointer meets the end position then no loop exists.
    */
    public boolean hasCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
            if (slow == fast) return true;
        }
        return false;
    }
}
