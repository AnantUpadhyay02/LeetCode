class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int def =0, balance = 0, start = 0;

        for(int i =0;i<gas.size();i++){
            balance += gas[i]- cost[i];
            if(balance<0){
                def += balance;
                start = i+1;
                // because it's a new start
                balance =0;
            }
        }

        if(def + balance>=0){
            return start;
        }
        else
            return -1;
    }
};