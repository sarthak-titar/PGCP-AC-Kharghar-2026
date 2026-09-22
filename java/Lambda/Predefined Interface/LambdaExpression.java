package preDefineLambda;
import java.util.function.*;
//Lambda expression to accept 2 strings and return the concatenated value of the same
public class LambdaExpression {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String  s1 ="Sarthak" ;
		String s2 = "Titar";
		
		BiFunction<String ,String , String> obj = (ss1,ss2)->{
				String s3 = ss1+"  "+ss2;
			return s3;
			
		};
		String result =  obj.apply(s1,s2);
			System.out.println("concatinated string :"+result);
	}

}
