package preDefineLambda;

import java.util.function.Supplier;

//Lambda expression to generate a 3 digit random number


public class LambdaExp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Supplier <Integer>obj = ()->{ int n = (int)(Math.random()*10)+100;return n;};
		
		System.out.println("3 digit random number   :"+obj.get());

	}

}
