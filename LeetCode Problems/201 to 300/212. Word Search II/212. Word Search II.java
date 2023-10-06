class Solution {
    class Trie {
        public String word;
        public Trie alphabet[];
        public Trie() {
            word = "";
            alphabet = new Trie[26];
        }
    }
    private void insert(String words) {
        Trie node = root;
        for (char ch : words.toCharArray()) {
            if (node.alphabet[ch - 'a'] == null) node.alphabet[ch - 'a'] = new Trie();
            node = node.alphabet[ch - 'a'];
        }
        node.word = words;
    }
    private void dfs(char[][] board, int i, int j, Trie node, List<String> list) {
        char ch = board[i][j];
        if (ch == '$' || node.alphabet[ch - 'a'] == null) {
            return;
        }
        node = node.alphabet[ch - 'a'];
        if (node.word.length() > 0) {
            list.add(node.word);
            node.word = "";
        }
        board[i][j] = '$';
        if (i > 0) dfs(board, i - 1, j, node, list);
        if (i < board.length - 1) dfs(board, i + 1, j, node, list);
        if (j > 0) dfs(board, i, j - 1, node, list);
        if (j < board[0].length - 1) dfs(board, i, j + 1, node, list);
        board[i][j] = ch;
    }
    public Trie root = new Trie();
    public List<String> findWords(char[][] board, String[] words) {
        List<String> list = new ArrayList<String>();
        for (String s : words) insert(s);
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                dfs(board, i, j, root, list);
            }
        }
        return list;
    }
}
