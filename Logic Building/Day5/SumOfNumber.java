import java.util.Scanner;
class  SumOfNumber{
	static int ans = 0;
	static void show (int num){
		
		for(int i = 1; i <= num ; i++){
			if(i % 2 != 0){
				ans = ans + i;
			}
			
		}
		System.out.println(ans);
		
	}
	public static void main(String args[]){
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter a number:");
		int n = sc.nextInt();
		show(n);
		
	}
}