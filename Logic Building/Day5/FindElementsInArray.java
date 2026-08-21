import java.util.Scanner;
import java.util.Arrays;
class FindElementsInArray{
	
	static void show(Integer[] arr1,int search){
		if(Arrays.asList(arr1).contains(search)){
			System.out.println("found ");
		}
		else{
			System.out.println("not found ");
		}
		
		
		
		
		
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		Integer[] arr = new Integer[5];
		System.out.println("Enter 5 integers:");
		for (int i = 0; i<arr.length;i++ ){
			arr[i] = sc.nextInt();
		}
		System.out.println(Arrays.toString(arr));
		
		System.out.println("Enter the number to search:");
		int s = sc.nextInt();
		FindElementsInArray.show(arr,s);
	}
}