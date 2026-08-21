import java.util.Scanner;
import java.util.Arrays;
class maxElements{
	static void show(int arr[]){
		 Arrays.sort(arr);
		int max = arr.length-1;
		
		System.out.println(arr[max]);
		
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int[] ar = new int[5];
		System.out.println("Enter 5 integers:");
		for(int i=0 ; i< ar.length;i++){
			ar[i] = sc.nextInt();	
		}
		maxElements.show(ar);
		
		
	}
}