import java.util.Scanner;
class Factorial{
	static int ans = 1;
	static void fact(int num){
		
		
			for(int i = num; i>= 1 ; i--){
				ans = ans * i;
				
			}
		
		System.out.println("factorial of "+num+" is"+ans);
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = sc.nextInt();
		fact(n);
	}
}