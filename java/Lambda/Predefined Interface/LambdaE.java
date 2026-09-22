package preDefineLambda;

import java.util.function.Consumer;

//2. Lambda expression to find the largest number in an integer array.

public class LambdaE {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr =  {12,4,3,66,88,2};
		Consumer<int[]> obj = arrn -> {
			int max = arrn[0];
			for(int i = 0 ; i < arrn.length; i++) {
				if(arrn[i] > max) {
					max = arrn[i];
				}
			}
			System.out.println("largestElement is   :"+ max);	
				
		};
		obj.accept(arr);

	}	

}
