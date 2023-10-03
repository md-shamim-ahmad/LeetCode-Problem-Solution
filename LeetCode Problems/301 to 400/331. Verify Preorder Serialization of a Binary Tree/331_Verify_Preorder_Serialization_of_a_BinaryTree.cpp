#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSerialization(string a) {
        int nodes = 0;
        int nulls = 0;
        int i = 0;

        // Split the string into tokens using ',' as the delimiter
        vector<string> tokens;
        stringstream ss(a);
        string token;
        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        for (i = 0; i < tokens.size(); ++i) {
            // If we encounter a null marker '#', increment nulls.
            if (tokens[i] == "#") {
                nulls++;
            } else {
                // If we encounter a non-null node, increment nodes.
                nodes++;
            }

            // If the number of nulls exceeds nodes at any point, it's not valid.
            if (nulls > nodes) {
                return false;
            }
        }

        // In a valid serialization, the number of nulls should be one more than the number of nodes at the end.
        return (nulls == nodes + 1);
    }
};
