import java.util.Scanner;
class Multiplicationtable{
	void Multiplicationtable(int a){
		for(int i = 1 ; i<=10;i++){
			System.out.println(a +"*"+ i +"="+a*i);
		}
		
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number!!" );
		int num = sc.nextInt();
		Multiplicationtable m = new Multiplicationtable();
		m.Multiplicationtable(num);
	}
}