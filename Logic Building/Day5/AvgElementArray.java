import java.util.Scanner;
import java.util.Arrays;
class AvgElementArray{
	static int sum= 0;
	static void show(int[] arr1){
		for (int arr2: arr1 ){
			sum = sum+arr2;
		}
		int ans = sum/5;
		System.out.println(ans);
		
	}
	
	
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[5];
		System.out.println("Enter 5 integers:");
		for (int i = 0; i<arr.length;i++ ){
			arr[i] = sc.nextInt();
		}
		System.out.println(Arrays.toString(arr));
		 AvgElementArray.show(arr);
	}
}