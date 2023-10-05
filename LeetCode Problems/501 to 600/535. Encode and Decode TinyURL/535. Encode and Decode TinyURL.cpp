class Solution {
    string url;

public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        url = longUrl;
        return url;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return url;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));