//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            long N = Long.parseLong(read.readLine());

            Solution ob = new Solution();
            System.out.println(ob.isPerfectNumber(N));
        }
    }
}
// } Driver Code Ends




//User function Template for Java

class Solution {
    static int isPerfectNumber(long N) {
        // code here
        long sum=1;
        long sq=(long)Math.sqrt(N);
        
        for(long i=2;i<=sq;i++){
            if(N%i==0){
                sum+=i+N/i;
            }
        }
        if(sq*sq==N){
            sum-=sq;
        }
        if(sum==N)
        return 1;
        return 0;
    }
};