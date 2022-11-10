class Solution {
public:     
    struct Trie{        
        string word;
        Trie *alphabet[26];        
    };
    Trie *root = new Trie();
    void insert(string &words) {        
        Trie *node = root;
        for (char ch : words) {
            if(node->alphabet[ch - 'a'] == nullptr)
                node->alphabet[ch - 'a'] = new Trie();
            node = node->alphabet[ch - 'a'];
        }
        node->word = words;
    }    
    
    void dfs(vector<vector<char>>& board, int i, int j, vector<string> &res, Trie* node) {
        char ch = board[i][j];        
        if(ch == '$' || !node->alphabet[ch - 'a']) return;
        node = node->alphabet[ch - 'a'];
        if(node->word.size() > 0) {
            res.push_back(node->word);
            node->word = "";
        }        
        board[i][j] = '$';
        if(i > 0) dfs(board, i - 1, j, res, node);
        if(i < board.size() - 1) dfs(board, i + 1, j, res, node);
        if(j > 0) dfs(board, i, j - 1, res, node);
        if(j < board[0].size() - 1) dfs(board, i, j + 1, res, node);        
        board[i][j] = ch;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        for(string& s: words)
            insert(s);
        vector<string> list;
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[i].size(); j++) {
                dfs(board, i, j, list, root);
            }
        }
        return list;
    }
};