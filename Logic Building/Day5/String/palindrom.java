import java.util.Scanner;
class palindrome{
	
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string");
		String s = sc.nextLine();
		System.out.println(s);
		String ss = "";
		for (int i= s.length()-1;i>=0;i--){
			ss = ss+s.charAt(i);
if(s.equals(ss)){
			System.out.println("palindrome");
		}
else{
	System.out.println("not palindrome");
	
}		
		}
		
	
	}
}