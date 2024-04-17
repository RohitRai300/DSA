/*
 * Find Second Smallest and Second Largest Element in an array

Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Examples
Example 1:
Input:
 [1,2,4,7,7,5]
Output:
 Second Smallest : 2
 Second Largest : 5
Explanation:
 The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2
 * 
 */


public class secondLargestNumber {
    public static int[] getSecondOrderElements(int n, int []a) {
        int res[] = new int[2];

        // finding smallest and second smallest - O(n)
        int fSmall = a[0]; 
        int sSmall = a[0];
        if(a[1] > a[0]){
            sSmall = a[1];
        }
        else{
            fSmall = a[0];
        }

        for(int i=2; i<n ;i++){
              if(a[i] < sSmall){
                  if(a[i] > fSmall){
                      sSmall = a[i];
                  }
                  else{
                      sSmall = fSmall;
                      fSmall = a[i];
                  }
              }  
        }

        res[1] = sSmall;


        // finding the largest and second largest - O(n)
        int largest= a[0]; 
        int sLargest = a[0];
        if(a[1] > a[0]){
            largest = a[1];
        }
        else{
            sLargest = a[0];
        }

        for(int i=2;i<n;i++){
            if(a[i] > sLargest){
                if(a[i] < largest){
                    sLargest = a[i];
                }
                else{
                    sLargest = largest;
                    largest = a[i];
                }
            }
        }

        res[0] = sLargest;
        return res;
    }

     public static void main(String[] args) {
        int arr[] = {1,2,3,4,5,6,7,8,9};
        int res[] = getSecondOrderElements(9, arr);
        System.out.println("2nd Largest element is: "+ res[0]);
        System.out.println("2nd Smallest element is: "+ res[1]);
     }   

}
