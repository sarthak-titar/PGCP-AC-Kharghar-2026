package inheritance4;
//4. Create a class named 'Shape' with a method to print "This is shape". Then create
//two other classes named 'Rectangle', 'Circle' inheriting the Shape class, both having
//a method to print "This is rectangular shape" and "This is circular shape"
//respectively. Create a subclass 'Square' of 'Rectangle' having a method to print
//"Square is a rectangle". Now call the method of 'Shape' and 'Rectangle' class by the
//object of 'Square' class.

public class question4 {
		public static void main(String[] args) {
			square s = new square();
			s.show1();
			s.show2();
    		}

	void show1() {
		System.out.println("This is shape!");
	}
}
class Rectangle extends Shape{
	void show2() {
	System.out.println("This is rectangular shape");
	}
	
}
class Circle extends Shape{
	void show3() {
	System.out.println("This is circular shape");
	}
}
class square extends Rectangle{
	void show4() {
		System.out.println("Square is a rectangle");
		}
	
}
