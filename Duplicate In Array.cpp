Duplicate in array
You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3, and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
Note :
Duplicate number is always present in the given array/list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the duplicate element in the array/list.

Output for every test case will be printed in a separate line.
  // Solution
  int findDuplicate(int *arr, int n)
{
   

    //time complexity is O(n)
   
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    //now take out the sum  of first n-2 numbers
    int newsum = 0;
    newsum = ((n-1)*(n-2))/2;
    //now substract sum from new sum....to get the number
    int ans = sum - newsum;
    return ans;

}
