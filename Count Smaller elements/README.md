Count Smaller elements

Given an array Arr of size N containing positive integers. Count number of smaller elements on right side of each array element.

Example 1:

Input:
N = 7
Arr[] = {12, 1, 2, 3, 0, 11, 4}
Output: 6 1 1 1 0 1 0
Explanation: There are 6 elements right
after 12. 
There are 1 element right after
1. And so on.


Example 2:

Input:
N = 5
Arr[] = {1, 2, 3, 4, 5}
Output: 0 0 0 0 0
Explanation: There are 0 elements right
after 
1. There are 0 elements right after
2. And so on.


Your Task:
You don't need to read input or print anything. Your task is to complete the function constructLowerArray() which takes the array of integers arr and n as parameters and returns an array of integers denoting the answer.

Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 10^6
0 ≤ Arr[i]  ≤ 10^8