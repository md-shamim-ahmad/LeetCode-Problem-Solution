class MyHashMap {
    // template<typename ele>
    vector<int> arr;

public:
    /** Initialize your data structure here. */
    MyHashMap() {
        arr.assign(1000001, -1);
        // memset(arr, -1, sizeof(arr));
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        arr[key] = value;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return arr[key];
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        arr[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */