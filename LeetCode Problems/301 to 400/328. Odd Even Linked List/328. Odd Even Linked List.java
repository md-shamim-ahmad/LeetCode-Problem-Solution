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
    public ListNode oddEvenList(ListNode head) {
        ListNode even = new ListNode(), evenList = even;
        ListNode odd = new ListNode(), oddList = odd;
        int track = 1;
        while (head != null) {
            if (track == 1) {
                track = 2;
                odd.next = head;
                odd = odd.next;
            } else {
                track = 1;
                even.next = head;
                even = even.next;
            }
            head = head.next;
            even.next = odd.next = null;
        }
        odd.next = evenList.next;
        return oddList.next;
    }
}
