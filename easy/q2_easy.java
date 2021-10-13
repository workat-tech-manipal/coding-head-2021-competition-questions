import java.util.*; 
class Solution {
    public boolean cancone(int[] flowerbed, int n) 
    {
        if (flowerbed == null || flowerbed.length == 0) {
            return false;
        }
        
        int count = 0;
        for (int i = 0; i < flowerbed.length; i++) 
        {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0)
            && (i == flowerbed.length - 1 || flowerbed[i + 1] == 0))
            {
                flowerbed[i] = 1;
                count++;
            }
            if (count >= n) 
            {
                return true;
            }
        }
        return false;
    }
}
public class q2_easy
 {
     public static void main(String[] args)
     {
        Solution s1 = new Solution();
        Scanner sc=new Scanner(System.in); 
        int test_cases;
        int arr_size;
        test_cases = sc.nextInt(); 
        while(test_cases!=0)
        {
            arr_size = sc.nextInt();
            int[] intArray = new int[arr_size];
            for(int i=0;i<arr_size;i++)
            {
                intArray[i]=sc.nextInt();  
            }
            int cones;
            cones = sc.nextInt();
            boolean possible;
            possible =s1.cancone(intArray,cones );
            System.out.println(possible);
            test_cases = test_cases-1;
        }
     }
    

}
