def solve(n, nums, k, queries):
    if k == 1:  # Special case optimization for k=1
        dp = nums.copy()
        for i in range(1, n):
            dp[i] = max(dp[i], nums[i] + dp[i-1])
        return [dp[i-1] for i in queries]
    
    # For general case
    dp = nums.copy()
    max_window = float('-inf')
    
    for i in range(1, n):
        if i > k:
            max_window = max(dp[i-k-1:i])
            dp[i] = max(dp[i], nums[i] + max_window)
        else:
            dp[i] = max(dp[i], nums[i] + max(dp[:i], default=0))
    
    return [dp[i-1] for i in queries]
n = 5
nums = [2,-3,5,-4,3]
k=1
q=2
queries=[2,5]
print(solve(n,nums,k,queries))