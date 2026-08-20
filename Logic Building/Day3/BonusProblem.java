import java.util.Scanner;
class BonusProblem{
	 static byte aaa;
         
     static short bbb;
   
     static int ccc;
     static long ddd;
     static  float eee;
      static  double fff;
     static char ggg;
    static boolean hhh;
	public static void main(String args[]){
		int c;
		do{
			Scanner sc = new Scanner (System.in);
		System.out.println("problem 1 : Gread Evaluation System");
		System.out.println("problem 2 : Leap Year Check");
		System.out.println("problem 1 : Day of the Week");
		System.out.println("problem 1 : Identify Default Values Of  Variables");
		System.out.println("Case 5: Exit");
		 c = sc.nextInt();
		switch(c){
			
			case 1:
			

        int mathmarks = 80;
        int sciencemarks = 85;
        int historymarks = 90;
        int englishmarks ;
        int hindimarks;
        

        Scanner sc1 = new Scanner(System.in);
        System.out.println("Enter your English marks!!");
        englishmarks = sc1.nextInt();

        System.out.println("Enter your hindi marks!!");
        hindimarks = sc1.nextInt();

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
    
    


			break;
			case 2:
			System.out.println("Enter year");
        Scanner sc2 = new Scanner (System.in);
        int year = sc2.nextInt();
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            System.out.println("leap year");
        }
        else{
            System.out.println("not leap year");
        }
			break;
			case 3:
			
			
			    Scanner sc3 = new Scanner(System.in);
        int a = sc3.nextInt();
        switch (a){
            case (1):
            System.out.println("monday");
            break;

            case (2):
            System.out.println("tuesday");
            break;

            case (3):
            System.out.println("wednesday");
            break;

            case (4):
            System.out.println("thursday");
            break;

            case (5):
            System.out.println("friday");
            break;

            case (6):
            System.out.println("saturday");
            break;

            case (7):
            System.out.println("sunday");
            break;
            
            default:
            System.out.println("invalid day");
            break;

        }
       
			break;
			case 4:
			
    
    
        System.out.println(aaa);
    System.out.println(bbb);
    System.out.println(ccc);
    System.out.println(ddd);
    System.out.println(eee);
    System.out.println(fff);
    System.out.println("["+ggg+"]");
    System.out.println(hhh);
       
    
    


			break;
			
		
		
		}
		
		}
		while(c != 5);
		System.out.println("Exit");
		
		
	}
}