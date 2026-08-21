import java.util.Scanner;
import java.util.Arrays;
class StringArray{
	static void show(String a[]){
		for(String ss : a){
			System.out.println(ss);
		}
		System.out.pruntln("By using Arrays class");
		System.out.println(Arrays.toString(a));
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 4 name:::");
		String[] arr = new String[4];
		for(int i = 0 ; i < arr.length ; i++){
			arr[i]= sc.nextLine();
		}
		StringArray.show(arr);
		
	}
}