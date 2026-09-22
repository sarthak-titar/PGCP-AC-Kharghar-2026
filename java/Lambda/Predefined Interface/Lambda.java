package preDefineLambda;

import java.util.function.Consumer;



import java.util.Arrays;

/*Using existing (pre-defined) Functional Interfaces in Java write,

1. Lambda expression to sort a string array in alphabetical order
2. Lambda expression to find the largest number in an integer array.
3. Lambda expression to find the smallest number in an integer array.
4. Lambda expression to generate a 3 digit random number
5. Lambda expression that takes an integer array and returns the reverse integer array
6. Lambda expression to print the current date
7. Lambda expression to evaluate if a number entered is a Prime number
8. Lambda expression to accept 2 strings and return the concatenated value of the same*/

public class Lambda {
	public static void main(String[] args) {
		String[] name = {"Sarthak","chaitanya","Atharv","Dipak"};
		
			Consumer <String[]> obj = arr -> Arrays.sort(arr);
				
			
			obj.accept(name);
			System.out.println(Arrays.toString(name));
	}

}
