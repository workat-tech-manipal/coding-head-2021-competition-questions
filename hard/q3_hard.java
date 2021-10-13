import java.util.Scanner;

class answer_key
{
    public
    long mod=1000000007;
    void countWays(int n)
    {
           long[] dp= new long[n+1];
           dp[0]=1;     
           dp[1]=1;
           dp[2]=2;
           for(int i=3;i<=n;i++)
           {
               dp[i]=((dp[i-1])%mod+(dp[i-2])%mod)%mod;
           }
           System.out.println(dp[n]); 
    }
};

public class q3_hard {
    public static void main(String[] args)
    {
        int test_cases;
        Scanner sc=new Scanner(System.in); 
        test_cases = sc.nextInt(); 
        int n;
        while(test_cases!=0)
        {
            answer_key k1 = new answer_key();
            n = sc.nextInt();
            k1.countWays(n);
            test_cases = test_cases-1;
        }
    }
}
