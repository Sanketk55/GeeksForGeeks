Count distinct pairs with difference k

Example 1:

Input: array = {1, 5, 4, 1, 2}, k = 0
Output: 1
Explanation: There is only one pair (1, 1)
whose difference equal to 0.


Example 2;

Input: array = {1, 5, 3}, k = 2
Output: 2
Explanation: There are two pairs (5, 3) and 
(1, 3) whose difference equal to 2.
 

Your Task:

You don't need to read or print anything. Your task is to complete the function TotalPairs() which takes array and k as input parameter and returns count of all distinct pairs.
 

Expected Time Complexity: O(Max(Ai))

Expected Space Complexity: O(Max(Ai))
 

Constraints:
0 <= length of array, k <= 100000
1 <= elements of array <= 100000