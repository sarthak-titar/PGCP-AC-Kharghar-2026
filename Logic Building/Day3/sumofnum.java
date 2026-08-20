import java.util.Scanner;
class sumofnum{
	 
	void calculateSum(int a){
		int ans=0;
		for (int i = a; i>=1;i--){
			 ans = ans+i;
		}
		System.out.println("The sum of number from 1 to"+"a"+ans);
		
		
	}
	public static void main(String args[]){
		sumofnum ss = new sumofnum();
		
		Scanner sc = new Scanner (System.in);
			System.out.println("Enter a number::");
		int num = sc.nextInt();
		ss.calculateSum(num);
		
	}
}