## 269. Alien Dictionary

### Question
There is a new alien language which uses the latin alphabet. However, the order among letters are 
unknown to you. You receive a list of **non-empty** words from the dictionary, where **words are sorted 
lexicographically by the rules of this new language**. Derive the order of letters in this language.

##### Example 1:
Given the following words in dictionary,
```
Input :
["wrt","wrf","er","ett","rftt"]
```
```
Output : 
"wertf"
```
##### Example 2:
Given the following words in dictionary,
```
Input :
["z","x"]
```
```
Output : 
"zx"
``` 
##### Example 3:
Given the following words in dictionary,
```
Input:
["z","x","z"]
```
```
Output : 
""
``` 

#### Note:
*    You may assume all letters are in lowercase.
*    You may assume that if a is a prefix of b, then a must appear before b in the given dictionary.
*    If the order is invalid, return an empty string.
*    There may be multiple valid order of letters, return any one of them is fine.


### Original Question [Link Here](https://leetcode.com/problems/alien-dictionary)
