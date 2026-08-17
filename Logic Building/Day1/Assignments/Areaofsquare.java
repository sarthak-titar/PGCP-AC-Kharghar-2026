import java.util.Scanner;
class Areaofsquare {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter side of Square");
        float side = sc.nextFloat();
        double Area = side * side;
        System.out.println("Area of a Square is:::" + Area);
    }
}
