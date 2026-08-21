import java.util.Scanner;
import java.util.Arrays;
class ElementInArray{
	
	static void show(int[] arr1,int search){
		Arrays.sort(arr1);
		System.out.println(Arrays.toString(arr1));
		int ss= Arrays.binarySearch(arr1,search);
		if(ss>0){
			System.out.println("Element Found at Index:"+ss);
		}
		else{
			System.out.println("not found");
		}
		
		
		
		
		
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[5];
		System.out.println("Enter 5 integers:");
		for (int i = 0; i<arr.length;i++ ){
			arr[i] = sc.nextInt();
		}
		System.out.println(Arrays.toString(arr));
		
		System.out.println("Enter the number to search:");
		int s = sc.nextInt();
		ElementInArray.show(arr,s);
	}
}