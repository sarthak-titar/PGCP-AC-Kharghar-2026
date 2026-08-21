import java.util.Scanner;
import java.util.Arrays;
class SumOfElements{
	static int sum = 0;
	static void show (int arri[]){
		
		for (int arr1 : arri){
				sum= sum+arr1;
		}
		System.out.println("The Sum of all Elements is:"+sum);
		
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[5];
		System.out.println("Enter 5 integers");
		for (int i = 0 ; i <  arr.length; i++){
			arr[i] = sc.nextInt();
		}
		SumOfElements.show(arr);
	}
	
}