class MyHashSet {
public:
    vector<int> m;
    int siz;
    MyHashSet() {
        siz=1e6+1;
        m.resize(siz);
        
        
        
        
    }
    
    void add(int key) {
        m[key]=1;
        
    }
    
    void remove(int key) {
        m[key]=0;
        
    }
    
    bool contains(int key) {
        return m[key];
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */