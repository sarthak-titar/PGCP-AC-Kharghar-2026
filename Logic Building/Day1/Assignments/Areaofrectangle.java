
import java.util.Scanner;
class Areaofrectangle {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length of rectangle");
        float length = sc.nextFloat();
        System.out.println("Enter width of rectangle");
        float width = sc.nextFloat();
        double Area = length * width;
        System.out.println("Area of a Square is:::" + Area);
    }
}
