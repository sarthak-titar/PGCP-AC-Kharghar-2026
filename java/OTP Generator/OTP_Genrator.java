package Web;

import java.util.Random;
import java.util.function.Supplier;

/*Exercise 2
Create a Lamda for generating a random OTP which will be formed of 5 chars, 
the 1st Char should be a vowel followed by 4 random numbers generated from 0-9. 
eg A8391, U8665 and so on
*/
public class OtpGenerator {
	public static void main(String[] args) {
		Supplier<String> obj = ()->{
			String vowels = "aeiouAEIOU";
			Random random = new Random();
			char ss =vowels.charAt(random.nextInt(vowels.length()));
			
			
			int randomNum = random.nextInt(9999); 
//			System.out.println(randomNum);
			return ss+""+randomNum;
			
		};
		System.out.println(obj.get());

		
	}

}
