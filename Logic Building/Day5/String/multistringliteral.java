class multistringliteral{
	public static void main(String args[]){
		String str1 = "java";
		String str2 =  "java";
		String str3 = "java";
		System.out.println("all strings pointing to the same object:"+(str1==str2 && str1 == str3));
		
	}
}