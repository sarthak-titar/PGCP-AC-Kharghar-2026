package preDefineLambda;

import java.util.Arrays;
import java.util.function.Function;

//Lambda expression that takes an integer array and returns the reverse integer array

public final class LambdaExpr {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr =  {12,4,3,66,88,2};
			Function<int[],String> obj = (arrn)->{
				int start = 0;
				int end = arrn.length-1;
				while(start<end) {
					int temp = arrn[start];
					arrn[start] = arrn[end];
					arrn[end]=temp;
					start++;
					end--;
				}
				
				return (Arrays.toString(arrn));
			};
			System.out.println(obj.apply(arr));
	}

}
