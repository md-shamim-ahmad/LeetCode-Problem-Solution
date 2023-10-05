class Solution {
private:
    struct Trie {
        string word;
        Trie *alphabet[80];
    };
    Trie *root = new Trie();

    void insert(string &s) {
        Trie *node = root;
        for (char ch: s) {
            if (node->alphabet[ch - 'A'] == nullptr)
                node->alphabet[ch - 'A'] = new Trie();
            node = node->alphabet[ch - 'A'];
        }
        node->word = s;
    }

    bool found = false;

    void dfs(int i, int j, vector<vector<char>> &board, Trie *node) {
        char ch = board[i][j];
        if (ch == '$' || !node->alphabet[ch - 'A']) return;
        node = node->alphabet[ch - 'A'];
        if (node->word.size() > 0) {
            found = true;
            node->word = "";
            return;
        }
        board[i][j] = '$';
        if (i > 0) dfs(i - 1, j, board, node);
        if (i < board.size() - 1) dfs(i + 1, j, board, node);
        if (j > 0) dfs(i, j - 1, board, node);
        if (j < board[0].size() - 1) dfs(i, j + 1, board, node);
        board[i][j] = ch;
    }

public:
    bool exist(vector<vector<char>> &board, string word) {
        insert(word);
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                dfs(i, j, board, root);
            }
        }
        return found;
    }
};
