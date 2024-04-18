/*
 * Problem statement
You are given a sorted integer array 'arr' of size 'n'.
You need to remove the duplicates from the array such that each element appears only once.
Return the length of this new array.

Note:
Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory. 

For example:
'n' = 5, 'arr' = [1 2 2 2 3].
The new array will be [1 2 3].
So our answer is 3.
 * 
 */

public class removeDuplicateFromSortedArray {
    public static int removeDuplicates(int[] arr,int n) {
        int count = 1;
        for(int i=1;i<n;i++){
            if(arr[i] != arr[i-1])
            count++;
        }
        return count;
     }
     public static void main(String[] args) {
        int arr[] = {1,1,1,2,3,3,3,3,4,4,5,6,7,7,7,7,8,8,8};
        int n = arr.length;
        System.out.println("Length of the unique elements be: "+ removeDuplicates(arr, n));
     }
}
