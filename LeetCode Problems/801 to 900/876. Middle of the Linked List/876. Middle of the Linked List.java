/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        int cnt = 1;
        ListNode curr = head, prev = head;
        while (curr != null) {
            if (cnt == 2) {
                prev = prev.next;
                cnt = 0;
            }
            curr = curr.next;
            cnt++;
        }
        return prev;
    }
}
