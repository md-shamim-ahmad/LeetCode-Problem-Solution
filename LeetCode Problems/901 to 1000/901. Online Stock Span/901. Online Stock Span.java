class StockSpanner {
    private ArrayList<Integer> arr = new ArrayList<>();
    public int next(int price) {
        arr.add(price);
        int cnt = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr.get(i) > price) break;
            cnt++;
        }
        return cnt;
    }
}
