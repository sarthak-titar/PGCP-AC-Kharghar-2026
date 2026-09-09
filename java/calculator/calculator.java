package calculator;

public class main {
	public static void main(String[] args) {
		System.out.println("Enter any number:");
		int aa =get.intputg();
		System.out.println("Enter any number:");
		int bb =get.intputg();
		System.out.println(cal.add(aa,bb));
	}
}
//------------------------------------------------------------------------------------
package calculator;

public class get{
	
		static int intputg() {
		try {
			byte[] arr = new byte[100];
			int length = System.in.read(arr);
			byte[] newar = new byte[length-2];
			System.arraycopy(arr, 0, newar, 0, length-2); 
			String s = new String(newar);
			
		     int a = Integer.parseInt(s);
		     return a;
		}
		catch(Exception e) {
			System.out.println("error");
	}
		return 0;
		}
		
}
//--------------------------------------------------------------------------------------------
package calculator;

public class cal {
	 static int add(int x,int y) {
		 return x+y;
	 }

}


