package jdbc;
import java.sql.*;


public class jdbcconnection {
    public static void main(String[] args) {

        String url = "jdbc:mysql://localhost:3306/college";
        String user = "******";
        String password = "**********";

        String sql = "SELECT * FROM student where id = 101";

        try (
            Connection con =
                DriverManager.getConnection(url, user, password);

            Statement stmt = con.createStatement();

            ResultSet rs = stmt.executeQuery(sql)
        ) {
            while (rs.next()) {
                System.out.println(rs.getInt("id") + " "
                    + rs.getString("name")+" "+rs.getString("marks") + " "+rs.getInt("age") );
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
