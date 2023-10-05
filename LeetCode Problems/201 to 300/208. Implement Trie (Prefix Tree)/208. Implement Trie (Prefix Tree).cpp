class Trie {
public:
    class Node {
    public:
        char ch;
        bool isWord;
        Node *children[26];
        Node(char ch) {
            this->ch = ch;
            isWord = false;
            for (int i = 0; i < 26; i++)
                children[i] = nullptr;
        }
    };
    Node *root;
    Trie() { root = new Node('-'); }

    void insert(string word) {
        Node *node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->children[word[i] - 'a'] == nullptr) {
                node->children[word[i] - 'a'] = new Node(word[i]);
            }
            node = node->children[word[i] - 'a'];
        }
        node->isWord = true;
    }
    Node *getNode(string word) {
        Node *node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->children[word[i] - 'a'] == nullptr) {
                return nullptr;
            }
            node = node->children[word[i] - 'a'];
        }
        return node;
    }

    bool search(string word) {
        Node *node = getNode(word);
        return node != nullptr && node->isWord;
    }

    bool startsWith(string prefix) { return getNode(prefix) != nullptr; }
};