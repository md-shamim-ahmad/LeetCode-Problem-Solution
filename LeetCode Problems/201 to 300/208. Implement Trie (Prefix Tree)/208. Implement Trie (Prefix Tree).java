class Trie {
    class Node {
        public char ch;
        public boolean isWord;
        public Node children[];
        public Node(char ch) {
            this.ch = ch;
            isWord = false;
            children = new Node[26];
        }
    }
    private Node root;

    public Trie() {
        root = new Node('-');
    }

    public void insert(String word) {
        Node node = root;
        for (int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            if (node.children[ch - 'a'] == null) {
                node.children[ch - 'a'] = new Node(ch);
            }
            node = node.children[ch - 'a'];
        }
        node.isWord = true;
    }
    private Node getWord(String word) {
        Node node = root;
        for (int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            if (node.children[ch - 'a'] == null) {
                return null;
            }
            node = node.children[ch - 'a'];
        }
        return node;
    }

    public boolean search(String word) {
        Node node = getWord(word);
        return node != null && node.isWord;
    }

    public boolean startsWith(String prefix) {

        return getWord(prefix) != null;
    }
}
