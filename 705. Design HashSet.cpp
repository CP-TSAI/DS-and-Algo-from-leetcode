class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {}
    
    void add(int key) {
        if(array[key] == 0)
            array[key]++;
    }
    
    void remove(int key) {
        if(array[key] != 0)
            array[key]--;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return array[key] > 0 ? 1: 0;
    }
private:
    int array[1000001] = {0};
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * bool param_3 = obj.contains(key);
 */