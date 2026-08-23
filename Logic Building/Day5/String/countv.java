import java.util.Scanner;
class countv{
	static int sum = 0;
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string");
		String s = sc.nextLine();
		System.out.println(s);
		for (int i= 0; i<=s.length()-1;i++){
			if (s.charAt(i)==('a')||s.charAt(i)==('e')|| s.charAt(i)==('i')||
			s.charAt(i)==('i')||s.charAt(i)==('o')||s.charAt(i)==('u')){
				 sum= sum+1;	
			}
		}
		System.out.println(sum);
	}
}