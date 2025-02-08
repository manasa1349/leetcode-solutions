class NumberContainers {
public:
    unordered_map<int,set<int>>indexes;
    unordered_map<int,int>nums;
    NumberContainers() {}
    void change(int idx, int num) {
        if (nums.find(idx) != nums.end()) {
            int oldNum = nums[idx];
            indexes[oldNum].erase(idx);
            if (indexes[oldNum].empty()) {
                indexes.erase(oldNum);
            }
        }
        nums[idx] = num;
        indexes[num].insert(idx);
    }
    
    int find(int num) {
        if (indexes.find(num) != indexes.end()) {
            return *indexes[num].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
