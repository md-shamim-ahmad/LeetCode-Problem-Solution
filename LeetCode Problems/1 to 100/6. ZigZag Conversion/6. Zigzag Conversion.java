class Solution {
    public String convert(String s, int numRows) {
        if (s.length() < 3 || numRows < 2) return s;
        int n = s.length();
        ArrayList<Integer> arr = new ArrayList<>();
        ArrayList<Integer> popUp = new ArrayList<Integer>(n / numRows + 1);
        popUp.add(0);

        for (int i = 1; i <= n / numRows; i++) {
            popUp.add(0);
            popUp.set(i, popUp.get(i - 1) + (2 * numRows) - 2);
        }

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < popUp.size(); j++) {
                if (i > 0 && j > 0) arr.add(popUp.get(j) - i);
                arr.add(popUp.get(j) + i);
            }
        }

        popUp.clear();
        popUp.add(0);
        for (int i = 1; i < arr.size(); i++) {
            if (popUp.get(popUp.size() - 1).intValue() != arr.get(i).intValue()) popUp.add(arr.get(i));
        }

        String zigzag = "";
        for (Integer it : popUp) {
            if (it < n) zigzag += s.charAt(it);
        }
        return zigzag;
    }
}
