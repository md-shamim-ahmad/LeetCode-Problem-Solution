class Solution {
    private String s;
    private boolean check(int a, int b) {
        return s.charAt(a) == s.charAt(b);
    }
    public boolean winnerOfGame(String colors) {
        int A = 0, B = 0;
        s = colors;
        for (int i = 1; i < colors.length() - 1; i++) {
            if (check(i, i - 1) && check(i, i + 1)) {                    
                if(colors.charAt(i) == 'A') 
                    A++;
                else 
                    B++;
            }
        }
        if(A > B) 
            return true;
        return false;
    }
}