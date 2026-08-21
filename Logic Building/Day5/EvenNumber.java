import java.util.Scanner;
class EvenNumber{
	static void show(int num){
		if(num == 0){
			System.out.println("0 is neither even nor odd");
		}
		else{
			for (int i = 1 ; i <= num ; i++){
				if(i%2==0){
					System.out.println(i);
				}
			}
		}
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number:");
		int n = sc.nextInt();
		show(n);
	} 
}