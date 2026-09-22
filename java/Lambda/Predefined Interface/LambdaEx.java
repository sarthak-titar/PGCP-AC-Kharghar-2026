package preDefineLambda;
import java.util.function.Function;
//3. Lambda expression to find the smallest number in an integer array.

public class LambdaEx {
	public static void main(String[] args) {
		int[] arr =  {12,4,3,66,88,2};
		// TODO Auto-generated method stub
		
		Function<int[],Integer> obj = arrn ->{
			int min = arrn[0];
			for(int i = 0 ; i < arrn.length ;i++) {
				if (arrn[i]<min) {
					min = arrn[i];
				}
			}
			return min;
		};
		System.out.println("smallest number in array :"+obj.apply(arr));
		

	}

}
