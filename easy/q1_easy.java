import java.util.*; 
import java.lang.Math; 
public class q1_easy {
    public static void main(String[] args)
    {
        double n;
        Scanner sc=new Scanner(System.in); 
        int test_cases;
        test_cases = sc.nextInt(); 
        double y;
        while(test_cases!=0)
        {
            n=sc.nextDouble();  
            y = (n*n)/2;
            System.out.println(Math.ceil(y));
            test_cases = test_cases-1;
        }
    }
}
