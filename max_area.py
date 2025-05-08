import math

def gcd(a, b):
    while b:
        a %= b
        a, b = b, a
    return a

def calculateHours(arr, start, days):
    total = 0
    g = arr[start]
    for i in range(start, start + days):
        g = gcd(g, arr[i])
        total += arr[i]
    return total // g

def solve(N, M, K, Arr, D):
    result = []
    for q in range(M):
        start = D[q] - 1
        maxDays = N - start
        if maxDays <= 0 or Arr[start] < K:
            maxHours = calculateHours(Arr, start, maxDays)
            if maxHours < K:
                result.append("-1")
                continue
        else:
            pass

        left = 1
        right = maxDays
        ans = maxDays
        while left <= right:
            mid = left + (right - left) // 2
            hours = calculateHours(Arr, start, mid)
            if hours >= K:
                ans = mid
                right = mid - 1
            else:
                left = mid + 1

        hours = calculateHours(Arr, start, ans)
        if hours >= K:
            result.append(str(ans))
        else:
            result.append("-1")
    return result

T = int(input())
for _ in range(T):
    custom_input_1 = list(map(str, input().split()))
    N = int(custom_input_1[0])
    M = int(custom_input_1[1])
    K = int(custom_input_1[2])
    Arr = list(map(int, input().split()))
    D = list(map(int, input().split()))

    out_ = solve(N, M, K, Arr, D)
    print(' '.join(map(str, out_)))