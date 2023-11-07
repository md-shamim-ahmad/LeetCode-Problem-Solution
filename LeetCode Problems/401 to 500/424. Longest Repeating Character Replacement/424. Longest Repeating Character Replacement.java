class Solution {
    public int characterReplacement(String s, int k) {
        int maxLength = 0;
        int left = 0;
        int count = 0;
        int stringLength = s.length();
        Map<Character, Integer> map = new HashMap<>();
        for (int right = 0; right < stringLength; right++) {
            char current = s.charAt(right);
            map.put(current, map.getOrDefault(current, 0) + 1);
            count = Math.max(count, map.get(current));
            int nonRepeat = (right - left + 1) - count;
            if (nonRepeat > k) {
                map.put(s.charAt(left), map.get(s.charAt(left)) - 1);
                left++;
            }
            maxLength = Math.max(maxLength, right - left + 1);
        }
        return maxLength;
    }
}
