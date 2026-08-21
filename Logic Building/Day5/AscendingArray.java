import java.util.Scanner;
import java.util.Arrays;
class AscendingArray{
	static int start=0;
		static int end = 5;
	static void show(int arr1[]){
		
		Arrays.sort(arr1);
		
		System.out.println(Arrays.toString(arr1));
		
		
		
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 6 Interger:");
		int[] arr = new int[6];
		
		for ( int i = 0 ;i< arr.length;i++ ){
			arr[i] = sc.nextInt();
		}
		AscendingArray.show(arr);
		
		
		
	}
}