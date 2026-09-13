package inheritance3;
//3. Create a class named 'Rectangle' with two data members 'length' and 'breadth' and
//two methods to print the area and perimeter of the rectangle respectively. Its
//constructor having parameters for length and breadth is used to initialize length and
//breadth of the rectangle. Let class 'Square' inherit the 'Rectangle' class with its
//constructor having a parameter for its side. Print the area and perimeter of a rectangle
//and a square

class Rectangle{
	

private int length;
private int breadth;
Rectangle(int length , int breadth){
	this.length = length;
	this.breadth = breadth;
	System.out.println(length+"  "+breadth);
	
}
int arear () {
	return length*breadth;
	
}
int  perimeterr () {
	return (2*(length+breadth));

}
}
class square extends Rectangle{
	private int side;
	square(int side,int l,int b){
		super(l,b);
		this.side = side;
		display();
	}
	int areas () {
		return side*side;
	}
	int perimeters() {
		return side*4;
	}
	
	void display() {
		System.out.println("Area of rectangle :"+arear());
		System.out.println("Area of square :"+areas());
		System.out.println("perimeter of rectangle :"+perimeterr());
		System.out.println("perimeter of square :"+perimeters());
		
	}
	
}

public class que1{
	public static void  main(String[] args) {
		System.out.println("Enter the side of square ,and length ,breadth of rectangle :");
		int s = input.intputg();
		int l = input.intputg();
		int b = input.intputg();
		Rectangle c = new square(s,l,b);

	}
	

}


