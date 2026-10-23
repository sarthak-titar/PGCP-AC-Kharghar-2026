package jdbc;
import java.sql.*;
import java.util.Scanner;
public class jdbcinsrt {
	public static void main(String[] args) {
		String url = "jdbc:mysql://localhost:3306/college";
		String user = "**";
		String pass = "********";
		
		try(Connection con = DriverManager.getConnection(url, user, pass);
			Statement st 	= con.createStatement();
			Scanner sc = new Scanner (System.in)){
			System.out.println("Enter id");
			int id= sc.nextInt();
			System.out.println("Enter name");
			String name= sc.next();
			System.out.println("Enter age");
			int age= sc.nextInt();
			int marks = 333;
			String add = "aaa";
			String que = "insert into student values('" + id +"','"+name+"','"+age+"','"+marks+"','"+add+"')";
				
			st.executeUpdate(que);
//			while()
		ResultSet ss	= st.executeQuery("select * from student");
		while(ss.next()) {
			System.out.println(ss.getInt(id)+" "+ss.getString(name)+" "+ss.getInt(marks));
		}
		}
		catch(SQLException e){
			e.printStackTrace();
			
		}
		
	}

}
