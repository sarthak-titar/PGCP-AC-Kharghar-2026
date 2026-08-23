class stringconcatination{
	public static void main(String args[]){
		String str1 = "hello";
		String str2 =  "hello";
		String str3 = str1+str2;
		System.out.println("is str3 pointing to the same object:"+str3==str2);
		
	}
}