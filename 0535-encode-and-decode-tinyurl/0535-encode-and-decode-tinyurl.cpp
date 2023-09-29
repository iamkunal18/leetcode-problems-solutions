class Solution {
public:

    unordered_map<string,string> realString;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
 
        // Instantiation of Object
        hash<string> mystdhash;
    
        // Using operator() to get hash value
        string ans = "http://";
        ans+=mystdhash(longUrl);
        realString[ans] = longUrl;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return realString[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));