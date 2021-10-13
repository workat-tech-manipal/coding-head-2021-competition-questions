import java.util.Arrays;
import java.util.*; 
class key
{
    public int[] advantageCount(int[] nums1, int[] nums2) {
        int length = nums1.length;
        int[][] arr = new int[length][2];
        for (int i = 0; i < length; i++) {
            arr[i][0] = nums2[i];
            arr[i][1] = i;
        }
        Arrays.sort(nums1);
        Arrays.sort(arr, (o1, o2) -> o1[0]-o2[0]);
        int front = 0;
        int back = length-1;
        int[] result = new int[length];
        for (int i = 0; i < length; i++) {
            if(nums1[i] >= arr[front][0]){
                result[arr[front][1]] = nums1[i];
                front++;
            }else{
                result[arr[back][1]] = nums1[i];
                back--;
            }
        }
        return result;
    }
}
public class q4_medium {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in); 
        int test_cases;
        int arr_size;
        test_cases = sc.nextInt(); 
        while(test_cases!=0)
        {
            key k1 = new key();
            arr_size = sc.nextInt();
            int [] a = new int[arr_size];
            int [] b = new int[arr_size];
            for(int i=0;i<arr_size;i++)
            {
                a[i] = sc.nextInt();
            }
            for(int i=0;i<arr_size;i++)
            {
                b[i] = sc.nextInt();
            }
            a =k1.advantageCount(a,b);
            for(int i=0;i<arr_size;i++)
            {
                System.out.println(a[i]);
            }
            test_cases = test_cases-1;
        }

    }
}
