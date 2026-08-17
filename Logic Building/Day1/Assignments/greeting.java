import java.util.Scanner;
public class greeting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter current time:");
        int time = sc.nextInt();
        if(time<12){
        if (time>=5 && time<=12)  {
            System.out.println("Is it AM or PM111");
            String a = sc.next();
            if(a.equals("AM") || a.equals("am")  ){
                System.out.println("Good Morning");
            }
            else{
                System.out.println("Good night");
            }
        }
        else{
            System.out.println("Good Day");
        }
    }
    else{
        System.out.println("plz Enter time in 12'hours format");
    }
    
        
    }
    
}
