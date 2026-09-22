package preDefineLambda;
import java.util.function.*;
//Lambda expression to evaluate if a number entered is a Prime number

public class LambdaExpres {
	public static void main(String[] args) {
		int n = 6;
		Predicate<Integer> obj = nn ->{
			boolean Temp = true ;
				for(int i = 2 ;  i*i  <= n ; i++) {
					if(nn % i == 0) {
						return false;
					}
				}
				return Temp; 
		};
		
		System.out.println(obj.test(n));
	}

}
