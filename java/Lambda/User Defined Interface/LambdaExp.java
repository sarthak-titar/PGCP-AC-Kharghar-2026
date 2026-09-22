package lambda;
///*2. Lambda expression to find the largest number in an integer array.


@FunctionalInterface
interface LargestElementInArray{
	int LargestNum(int a[]);
}

public class LambdaExp {
	
	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
		int[] arr = {12,4,3,66,88,2};
	
		LargestElementInArray obj = (int[] a) ->{
			int largestElemment = a[0];
			
			for(int i = 0 ; i < a.length ; i++) {
				if(a[i] > largestElemment ) {
					largestElemment = a[i];
				}
			}
			return largestElemment;
		};
		System.out.println("Larger Element In Array is    :"+obj.LargestNum(arr));

	}

}
