package preDefineLambda;
import java.time.LocalDate;
import java.util.function.Supplier;
//Lambda expression to print the current date

public class LambdaExpre {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Supplier obj = ()->{
			return LocalDate.now();};
		System.out.println("current date is :  "+	obj.get());

	}

}
