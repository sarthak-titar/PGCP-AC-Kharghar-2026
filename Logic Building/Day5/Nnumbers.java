import java.util.Scanner;
class Nnumbers{
	static void show(int num){
		if(num > 0){
		for (int i = 1 ; i<= num ; i++){
			System.out.print(i+" ");
		}
		}  
		else if(num < 0){
			for (int i = (0-1) ; i >= num ; i--){
				System.out.print(i+" ");
				
			}	
		}
		else{
			System.out.print(0+" ");
		}
		
		
	}
	
	
	
	public static void main(String args[]){
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter a number: ");
		int n = sc.nextInt();
		show(n);
		
		
		
	}
}