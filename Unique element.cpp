Find the Unique Element
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
 Note:
Unique element is always present in the array/list according to the given condition.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the unique element present in the array.

Output for every test case will be printed in a separate line
// Solution
int findUnique(int *arr, int n) {
int res = arr[0];
        for (int i = 1; i <n; i++)
            res = res ^ arr[i];// this is xor operator, in 2nd iteration we stor 2^3 in res then,
                               //in third 2^3^1, then 2^3^1^6 and now when we get another 6, it 
                      // will club with previous 6 and make 0.
    // 2^2 = 0 
 
        return res;
}
