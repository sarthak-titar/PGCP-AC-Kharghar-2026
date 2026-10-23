package jdbc;
import java.sql.*;
import java.util.Scanner;
public class UserApp {
	public static void main(String[] args) {
		String url = "jdbc:mysql://localhost:3306/userdb";
		String user = "***";
		String pass = "*****";
		try(Connection con = DriverManager.getConnection(url, user, pass);
				Statement st = con.createStatement();
				Scanner sc = new Scanner(System.in)){
			int ch = sc.nextInt();
			switch (ch) {
//			
//			1. Register a User
			case 1:{
				System.out.println("Enter user name:");
				String username = sc.next();
				System.out.println("enter passward :");
				String passs = sc.next();
				System.out.println("enter email:");
				String email = sc.next();
				System.out.println("enter city :");
				String city = sc.next();
				
				String que = "insert into users values ( '"+username+" ',' " +passs+" ' ,'"+email+"','"+city +" ')";
				st.executeUpdate(que);
				break;}
//			2. List All Users based on City
			case 2:
			{
				String que = " select user_name , password , email,city,dense_rank() over (partition by city order by city) as rr from users;";
				ResultSet ss = st.executeQuery(que);
				while(ss.next()) {
					System.out.println(ss.getString("user_name")+" "+ss.getString("password")+" "+ss.getString("email")+" "+ss.getString("city"));
				}
				break;
			}
//			3. Update Password of a User
			case 3:
			{
				System.out.println("Enter users name :");
				String us =  sc.next();
				System.out.println("Enter users new pass :");
				String npas =  sc.next();
				String que = " update users set password = '"+npas+"' where user_name = '"+us+ "'";
				ResultSet ss = st.executeQuery("select user_name ,password from users where user_name = '"+us+"';");
				System.out.println("your pass is change new pass is  "+npas);
				while(ss.next()) {
					System.out.println(ss.getString("user_name")+" "+ss.getString("password"));
				}
				
				break;
			}
//			4. Display user information based on User Name
			case 4:{
				System.out.println("Enter name :");
				String  nn = sc.next();
				String que = "select * from users where user_name = '"+nn+"';";
				
				 ResultSet ss = st.executeQuery(que);
				 boolean userExists = false;
				 while(ss.next()) {
					    userExists = true;

						System.out.println(ss.getString("user_name")+" "+ss.getString("email")+" "+ss.getString("city"));
					}
					if (!userExists) {
						System.out.println("not valid name");
					}
			}
		
			}
	
		}
		catch(SQLException e) {
			e.printStackTrace();
		}
		
		
	}

}
