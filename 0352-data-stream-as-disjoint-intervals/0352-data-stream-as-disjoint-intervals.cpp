class SummaryRanges {
private: 
    set<int> allval;
public:
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        allval.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        int srt = -1;
        int end = -1;
        vector<vector<int>> ans;

        for(auto &item: allval){
            if(srt == -1){
                srt = item;
                end = item;
            }else if(end +1 == item){
                end += 1;
            }else{
                ans.push_back({srt, end});
                srt = item;
                end = item;
            }
        }

        if(srt != -1) ans.push_back({srt, end});
        return ans;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */