class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int total = 0, startStation = 0, current_gas = 0;
        for (int i = 0; i < gas.length; i++) {
            if (current_gas < 0) {
                current_gas = 0;
                startStation = i;
            }
            current_gas += (gas[i] - cost[i]);
            total += (gas[i] - cost[i]);
        }
        return (total < 0 ? -1 : startStation);
    }
}
