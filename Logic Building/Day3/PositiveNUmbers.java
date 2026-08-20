import java.util.Scanner;
class positiveNUmbers{
	 void PositiveNumber(){
		 int num ;
		do {
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter a positive number:");
			num = sc.nextInt();
		}
			while(num<=0);
			System.out.println("you entered positive number"+num);
		
		
		
		
		}
	
	
	public static void main(String args[]){
		
		
		positiveNUmbers obj = new positiveNUmbers();
		obj.PositiveNumber();
		
	}
}