package DSA;

public class second_Largest_Number {
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
}
