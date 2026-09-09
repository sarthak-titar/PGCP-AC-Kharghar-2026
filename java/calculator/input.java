package program;


public class fistp {
	public static void main(String[] args) { 
		
		try {
			byte[] arr = new byte[100];
			int length = System.in.read(arr);
			byte[] newar = new byte[length-2];
			System.arraycopy(arr, 0, newar, 0, length-2); 
			String s = new String(newar);
			
		     int a = Integer.parseInt(s);
		     System.out.println(a);
		}
		catch(Exception e) {
			System.out.println("error");
		}
	
	
	
	}
}
