import java.util.Scanner;


class AgeChecker{
	void checkAgeCategory(int a){
	if (a < 18){
	System.out.println("Minor");
	}
	else if(a>=18 && a <= 60  ){
		System.out.println("Adult");	
	}
	else{
		System.out.println("senior citizen");
	}
	}

	public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter your Age::");
	int age = sc.nextInt();
	AgeChecker obj = new AgeChecker();
	obj.checkAgeCategory(age);
	
	
	}
}