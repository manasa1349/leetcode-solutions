class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        stack<string>st;
        stack<int>child_time_st;
        vector<int>ans(n,0);

        for(int i=0;i<logs.size();i++){

            int frst_colon_idx=logs[i].find(':');

            if(logs[i][frst_colon_idx+1]=='s'){
                st.push(logs[i]);
                child_time_st.push(0);

            }else if(logs[i][frst_colon_idx+1]=='e'){
                string strtstr=st.top();
                st.pop();
                
                int child_time = child_time_st.top();
                child_time_st.pop();

                string endstr=logs[i];
                
                int start_tm = stoi(strtstr.substr(strtstr.find_last_of(':') + 1));
                int end_tm = stoi(endstr.substr(endstr.find_last_of(':') + 1));
                
                int id = stoi(strtstr.substr(0,frst_colon_idx));
                
                int tm = end_tm - start_tm + 1;
                int val = tm - child_time;
                
                ans[id]+=val;

                if(!child_time_st.empty()){
                    child_time_st.top() += tm;
                }
            }
        }
        return ans;
    }
};