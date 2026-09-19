package collection;
import java.util.ArrayList;
import java.util.Iterator;
//1. Write a Java program to create a new array list, add some colors (string) and print out the collection.
//2. Modify the above Java program to insert an element into the array list at the first position.
//3. Modify the above Java program to retrieve an element (at a specified index) from a given array list.
//4. Modify the above Java program to update specific array element by given element.
//5. Modify the above Java program to remove the third element from a array list.
//6. Modify the above Java program to search an element in a array list

public class CollectionFramework {

	public static void main(String[] args) {
		
		ArrayList<String> colors = new ArrayList<>(10);
		
		colors.add("RED");
		colors.add("YELLOW");
		colors.add("BLUE");
		colors.add("PURPLE");
		//2. Modify the above Java program to insert an element into the array list at the first position.
		System.out.println("Original ArrayList!");
		System.out.println(colors);
		System.out.println(" ");
		
		
		System.out.println("After removing obj! and ierate using Iterator!");
		Iterator<String> itcolors = colors.iterator();
		while(itcolors.hasNext()) {
		String s = itcolors.next();
		
		if(s.equals("PURPLE")) {
			itcolors.remove();	
		}
		}
		System.out.println(colors);
		
		System.out.println(" ");
		//3. Modify the above Java program to retrieve an element (at a specified index) from a given array list.
		String getelement = colors.get(1);
		System.out.println("Element at 1st position  "+getelement);
		System.out.println(" ");
		
		
		System.out.println("After adding element at 1th position ~ ");
		colors.add(0,"green" );
		Iterator<String>  itcolor1 = colors.iterator();
		
		while(itcolor1.hasNext()) {
			String ss =	itcolor1.next();
			System.out.print("  "+ss);
	
		}
		System.out.println(" ");
		System.out.println(" ");
		System.out.println("update element ");
		//4. Modify the above Java program to update specific array element by given element.
		colors.set(0, "ORANGE");
		Iterator<String>  itcolor2 = colors.iterator();
		while(itcolor2.hasNext()) {
			String ss1 = itcolor2.next();
			System.out.print(" "+ss1);
		}
		System.out.println(" ");
		System.out.println(" ");
		System.out.println("removing 3rd element!");
		//5. Modify the above Java program to remove the third element from a array list.
		colors.remove(2);
		System.out.println(colors);
		
		
		//6. Modify the above Java program to search an element in a array list
int i = colors.indexOf("BLUE");
System.out.println(i);

	
		
	}

	

}
