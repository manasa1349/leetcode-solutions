class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        //2 3 2   ->1 3 2 
        //    |

        //3 2 1   ->2 2 1
        //  |

        //2 1 2   ->1 1 2
        //|

        //1 2 1   ->0 2 1
        //    |

        //2 1     ->1 1
        //  |

        //1 1     ->0 1
        //|

        //1

        //prev of k can buy arr[k] tickets
        //next of k can buy arr[k]-1 tickets
        int ans=0;
        for(int i=0;i<tickets.size();i++){
            if(i<=k){
                ans+=min(tickets[i],tickets[k]);
            }else{
                ans+=min(tickets[i],tickets[k]-1);
            }
        }
        return ans;
    }
};