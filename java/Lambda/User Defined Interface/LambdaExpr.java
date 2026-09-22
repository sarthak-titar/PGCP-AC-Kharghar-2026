package lambda;

//3. Lambda expression to find the smallest number in an integer array.
@FunctionalInterface
interface SmallestNumberInArray{
	int smallestNum(int[] s);
}
public class LambdaExpr {
	public static void main(String[] args) {
		int[] arr = {12,4,3,66,88,2};
		
		 SmallestNumberInArray obj = (int[] s)->{
			 int Min = arr[0];
			 for(int i = 0 ; i< s.length; i++) {
				 if (s[i] < Min) {
					 Min = s[i];
				 }
			 }
			 return Min;
		 };
		 
		System.out.println("Smallest number is   : "+obj.smallestNum(arr)); 

	}

}
