package inheritance2;

public class input {
	
	
	
		static String stringputg() {
			try {
				byte[] arr = new byte[100];
				int length = System.in.read(arr);
				byte[] newar = new byte[length-2];
				System.arraycopy(arr, 0, newar, 0, length-2); 
				String s = new String(newar);
				
			    
			     return s;
			}
			catch(Exception e) {
				System.out.println("error");
		}
			return null;
			}
		public static int intputg() {
			String ii = stringputg();
			int a = Integer.parseInt(ii);
			return a;
			
		}
		

	}


