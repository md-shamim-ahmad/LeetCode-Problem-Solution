import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        allCombinations(0, candidates, target, ans, new ArrayList<>());
        return ans;

    }

    private void allCombinations(int i, int[] candidates, int target, List<List<Integer>> ans,
            ArrayList<Integer> arrayList) {
        if (i == candidates.length) {
            if (target == 0) {
                ans.add(new ArrayList<>(arrayList));
            }

            return;
        }
        if (target == 0) {
            ans.add(new ArrayList<>(arrayList));
            return;
        }
        if (candidates[i] <= target) {
            arrayList.add(candidates[i]);
            allCombinations(i, candidates, target - candidates[i], ans, arrayList);
            arrayList.remove(arrayList.size() - 1);
        }
        allCombinations(i + 1, candidates, target, ans, arrayList);
    }
}
