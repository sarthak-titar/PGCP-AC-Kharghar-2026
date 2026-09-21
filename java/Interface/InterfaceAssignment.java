package Interface;

		/*
		 * Interfaces 1. Start by making a normal Java-7-style application with these
		 * features: An interface called RegularPolygon with two abstract methods:
		 * getNumSides and getSideLength • A class EquilateralTriangle that implements
		 * the interface, has getNumSides return 3 and getSideLength return an instance
		 * variable that is set by the constructor. A class Square that implements the
		 * interface, has getNumSides return 4 and getSideLength return an instance
		 * variable that is set by the constructor.
		 * 
		 * 2. Add a static totalSides method, that given a RegularPolygon[], returns the
		 * sum of the number of sides of all the elements.
		 * 
		 * 3. Add two default methods: • getPerimeter (n * length, where n is the number
		 * of sides) • getInteriorAngle ( (n-2)π/n in radians)
		 */
interface RegularPolygon{
	int getNumSides ();
	int getSideLength ();
	
	static int totalSides(RegularPolygon[] rrr) {
		int total = 0;
		for(RegularPolygon i : rrr) {
			total = total + i.getNumSides();
		}
		return total;
	}
	
	default  int getPerimeter() {
		 return (getNumSides()*getSideLength()); 
	}
	default  double getInteriorAngle() {
		return (getNumSides()-2)*3.14/getNumSides(); 
		
	}
	
}
class EquilateralTriangle implements RegularPolygon{
	 int sideLength ;
	 EquilateralTriangle(int sideLength){
		 this.sideLength = sideLength;
		 
	 }
	
	@Override
	public int getNumSides() {
		return 3;
		
	}
	@Override
	public int getSideLength() {
		return sideLength;	
	}
	
}
class Square implements RegularPolygon{
	 int sideLength;
	Square(int sideLength){
		this.sideLength=sideLength;
	}
	@Override
	public int getNumSides () {
		return 4;
	}
	@Override
	public int getSideLength(){
		return sideLength;
		
	}
	

	
	
}

class InterfaceAssignment {
	public static void main(String[] args) {
		RegularPolygon R = new EquilateralTriangle (5);
		RegularPolygon R1 = new Square  (4);
		System.out.println("Number Of Sides  :"+R. getNumSides ());
		System.out.println("Size Length   :"+R.getSideLength());
		System.out.println("Perimeter of Equilatertrianle:"+R.getPerimeter());
		System.out.println("Interior Angle of Equilatertrianle:"+R. getInteriorAngle());
		
		System.out.println("-----------------------------------------------------");
		System.out.println("Number Of Sides  :"+R1. getNumSides ());
		System.out.println("Size Length   :"+R1.getSideLength());
		System.out.println("Perimeter of Square:"+R1.getPerimeter());
		System.out.println("Perimeter of Square  :"+R1. getInteriorAngle());
		System.out.println("-----------------------------------------------------");
		
		RegularPolygon[] rr = {R,R1};
		System.out.println("Total Sides    :"+RegularPolygon.totalSides(rr));



	}

}
