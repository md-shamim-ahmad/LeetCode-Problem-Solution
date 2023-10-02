class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        def backtrack(remaining, current, start):
            if remaining == 0:
                result.append(current[:])
                return
            if remaining < 0:
                return

            for i in range(start, len(candidates)):
                current.append(candidates[i])
                backtrack(remaining - candidates[i], current, i)  # Recurse with the same candidate allowed
                current.pop()

        result = []
        backtrack(target, [], 0)
        return result
