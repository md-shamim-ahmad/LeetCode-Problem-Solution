public class Solution {
    static class Node {
        char info;
        int cnt;
        Node[] list;

        public Node(char info) {
            this.info = info;
            this.cnt = 0;
            this.list = new Node[26];
        }
    }

    public Node newNode(char info) {
        return new Node(info);
    }

    public void insert(Node head, String s) {
        Node temp = head;
        for (int i = 0; i < s.length(); i++) {
            int index = s.charAt(i) - 'a';
            if (temp.list[index] == null) {
                temp.list[index] = newNode(s.charAt(i));
            }
            temp = temp.list[index];
        }
        temp.cnt = 1;
    }

    public void display(Node root) {
        if (root == null) {
            return;
        }
        Node temp = root;
        System.out.println(temp.info + " " + temp.cnt);
        for (int i = 0; i < 26; i++) {
            display(temp.list[i]);
        }
    }

    public int countChild(Node temp, int[] index) {
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (temp.list[i] != null) {
                cnt++;
                index[0] = i;
            }
        }
        return cnt;
    }

    public String longestCommonPrefix(String[] strs) {
        Node head = newNode('\0');
        for (String str : strs) {
            insert(head, str);
        }
        Node curr = head;
        StringBuilder lcp = new StringBuilder();
        int[] index = new int[1];
        while (curr.cnt == 0 && countChild(curr, index) == 1) {
            curr = curr.list[index[0]];
            lcp.append((char) ('a' + index[0]));
        }
        return lcp.toString();
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        String[] strs = {"flower", "flow", "flight"};
        String lcp = solution.longestCommonPrefix(strs);
        System.out.println("Longest Common Prefix: " + lcp);
    }
}
