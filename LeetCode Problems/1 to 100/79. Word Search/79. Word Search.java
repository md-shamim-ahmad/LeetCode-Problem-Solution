class Solution {
    private class Trie {
        private String isWord;
        Trie []charList;
        Trie() {
            isWord = "";
            charList = new Trie[70];
        }
    }
    private Trie root = new Trie();
    private void insert(String s) {
        Trie node = root;
        for(char ch : s.toCharArray()) {
            if(node.charList[ch - 'A'] == null)
                node.charList[ch - 'A'] = new Trie();
            node = node.charList[ch - 'A'];
        }
        node.isWord = s;
    }
    private boolean found = false;
    private void dfs(int i, int j, char[][] board, Trie node) {
        char ch = board[i][j];
        if(ch == '$' || node.charList[ch - 'A'] == null) return;
        node = node.charList[ch - 'A'];
        if(node.isWord.length() > 0) {
            found = true;
            node.isWord = "";
            return;
        }
        board[i][j] = '$';
        if(i > 0) dfs(i - 1, j, board, node);
        if(i < board.length - 1) dfs(i + 1, j, board, node);
        if(j > 0) dfs(i, j - 1, board, node);
        if(j < board[0].length - 1) dfs(i, j + 1, board, node);
        board[i][j] = ch;
    }
    public boolean exist(char[][] board, String word) {
        insert(word);
        for(int i = 0; i < board.length; i++) {
            for(int j = 0; j < board[i].length; j++) {
                dfs(i, j, board, root);
            }
        }
        return found;
    }    
}
