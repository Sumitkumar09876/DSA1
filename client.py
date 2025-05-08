def smallest_subarray_with_given_sum(arr, s):
    """
    Finds the smallest contiguous subarray whose sum is greater than or equal to a given sum.

    Args:
        arr: An array of positive integers.
        s: The target sum.

    Returns:
        The length of the smallest contiguous subarray, or 0 if no such subarray exists.
    """
    start = 0
    end = 0
    current_sum = 0
    min_length = float('inf')

    while end < len(arr):
        current_sum += arr[end]

        while current_sum >= s:
            min_length = min(min_length, end - start + 1)
            current_sum -= arr[start]
            start += 1
        end += 1

    if min_length == float('inf'):
        return 0
    else:
        return min_length

# Example usage (from the problem description):
arr = [2, 3, 1, 2, 4, 3]
s = 7
output = smallest_subarray_with_given_sum(arr, s)
print(output) # Output: 2

arr = [1, 2, 3]
s = 10
output = smallest_subarray_with_given_sum(arr, s)
print(output) # Output: 0