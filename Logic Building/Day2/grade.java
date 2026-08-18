import java.util.Scanner;
public class grade {
    
    public static void main(String args[]){
        int mathmarks = 80;
        int sciencemarks = 85;
        int historymarks = 90;
        int englishmarks ;
        int hindimarks;
        

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your English marks!!");
        englishmarks = sc.nextInt();

        System.out.println("Enter your hindi marks!!");
        hindimarks = sc.nextInt();

        int Aveg = (mathmarks+sciencemarks+hindimarks+englishmarks+historymarks)/5;

        if (Aveg < 30){
            System.out.println("Fail");
        }
        else if (Aveg >= 90){
            System.out.println("Grade:A");   
        }
        else if (Aveg >= 70 && Aveg <= 89){
            System.out.println("Grade:B");   
        }
        else if (Aveg >= 50 && Aveg <= 69){
            System.out.println("Grade:C");   
        }
        else if (Aveg >= 30&& Aveg <= 49){
            System.out.println("Grade:D");   
        }
        System.out.println("thank you!!!");
    }
    
}
