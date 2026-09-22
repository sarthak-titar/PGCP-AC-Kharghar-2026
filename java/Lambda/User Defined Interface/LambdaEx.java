package lambda;

import java.util.Arrays;

//Using existing (pre-defined) Functional Interfaces in Java write,
//
//1. Lambda expression to sort a string array in alphabetical order

@FunctionalInterface
interface SortStringArray{
	void sortArray(String a[]);
}
//class A implements SortStringArray{
//	@Override
//	public void sortArray(String a[]) {
//		 Arrays.sort(a);
//		 System.out.println(Arrays.toString(a));
//		
//		
//	}
//	
//}

public class LambdaEx {
	public static void main(String[] args) {
		String[] arr = {"Sarthak","chaitanya","Atharv","Dipak"};
		SortStringArray obj = (String a[]) ->{
				 Arrays.sort(a);
				 System.out.println(Arrays.toString(a));
		};
		obj.sortArray(arr);
	}
}
