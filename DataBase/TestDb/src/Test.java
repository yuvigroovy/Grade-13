import java.sql.*;

public class Test {
    public static void main(String[] args) throws SQLException {
        Connection con = DriverManager.getConnection("jdbc:sqlite:/Users/yuvalkarp/Documents/Grade 13/DataBase/test.db");
        Statement stmt =null; // for running query
        String str,name;
        int price;
        ResultSet rs =  null;

        stmt = con.createStatement();

        str = "SELECT * FROM test";
        rs = stmt.executeQuery(str);

        name = rs.getString("name");
        price = rs.getInt("Field2");

        System.out.println("price: " + price + " name: " + name);



        stmt.close();
        con.close();
    }
}
