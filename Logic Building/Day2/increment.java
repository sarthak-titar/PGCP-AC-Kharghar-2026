public class increment {
    public static void main(String [] args){
        int a=10;
        int b=20;
        System.out.println("value of a  "+a);
        System.out.println("value of b  "+b);

        System.out.println("-------after post increment-------");
        System.out.println("value of a "+a);
        System.out.println("value of a "+a);                    //11
       
         b=a++;   
        a=++b;     
        b=++a;
        a=b++;
        System.out.println("b is "+b);
        System.out.println("a is "+a);


        

    }
}