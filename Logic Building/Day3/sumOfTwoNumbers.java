import java.util.Scanner;

class sum{
		int sumOfTwoNumbers(int a,int b){
		
		return a+b;
		}



	public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter two numbers!!");
	int num1 = sc.nextInt();
	int num2 = sc.nextInt();
	sum obj = new sum();
	int ans= obj.sumOfTwoNumbers(num1,num2);
	System.out.println("The sum of"+num1+"and"+num2+"is:"+ans);
	
	}

}
