class MyHashSet {
    ArrayList<Integer> list;
    public MyHashSet() {
        list = new ArrayList<>();
    }

    int getIndex(int key) {
        for (int i = 0; i < list.size(); i++)
            if (list.get(i) == key) return i;
        return -1;
    }
    public void add(int key) {
        list.add(key);
    }

    public void remove(int key) {
        for (int i = 0; i < list.size(); i++)
            if (list.get(i) == key) {
                list.remove(i);
                i--;
            }
    }

    public boolean contains(int key) {
        int pos = getIndex(key);
        if (pos >= 0) return list.get(pos) == key;
        return false;
    }
}
