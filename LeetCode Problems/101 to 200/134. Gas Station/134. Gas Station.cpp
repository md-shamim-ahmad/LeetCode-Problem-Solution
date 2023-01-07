class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0;
        for(int i = 0; i < gas.size(); i++) {
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if(total_cost > total_gas)
            return -1;
        int startStation = 0, current_gas = 0;
        for(int i = 0; i < gas.size(); i++) {
            if(current_gas < 0) {
                current_gas = 0;
                startStation = i;
            }
            current_gas += (gas[i] - cost[i]);
        }
        return startStation;
    }
};