import java.util.Scanner;
import java.util.Arrays;
class ArrayForEach{
	static void show(int arr[]){
		for(int a : arr){
			System.out.print(" "+a);
				
		}
		
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int[] ar = new int[5];
		System.out.println("Enter 5 integers:");
		for(int i=0 ; i< ar.length;i++){
			ar[i] = sc.nextInt();	
		}
		ArrayForEach.show(ar);
		
		
	}
}