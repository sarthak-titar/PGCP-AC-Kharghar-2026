import java.util.Scanner;
class countPN{
	static int p=0;
	static int n=0;
	
	static void show(int arr1[]){
		for (int i = 0 ; i < arr1.length; i++){
			if(arr1[i]>0){
				p=p+1;
			}
			if(arr1[i]<0){
				n= n+1;
			}
		}
		System.out.println("positive:"+p);
		
	}
	
	public static void main(String args[]){
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter 6 integers:");
			int [] arr = new int[6];
			
			for (int i =0 ; i<arr.length ;i++){
				arr[i]=sc.nextInt();
			}
			countPN.show(arr);
	}
}