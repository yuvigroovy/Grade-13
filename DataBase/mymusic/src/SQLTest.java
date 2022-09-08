import java.sql.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class SQLTest {
    public static void main(String[] args) {

        //Connection con; // for connecting to DB
        Statement stmt; // for running query
        String str;

        try {
            String db_file_name_prefix = "/Documents/Grade 13/DataBase/mymusic.zip";
            Connection con = null;
            // Load the HSQL Database Engine JDBC driver
            // hsqldb.jar should be in the class path or made part of the current jar
            Class.forName("org.hsqldb.jdbcDriver");
            con = DriverManager.getConnection("jdbc:hsqldb:file:" + db_file_name_prefix);
            //con = DriverManager.getConnection("jdbc:odbc:/Documents/Grade 13/DataBase/mymusic.odb");
            stmt = con.createStatement(); // Create statement

            // for creating table
            str = "CREATE  TABLE  ALBUMS (Title  VARCHAR(50), Performer  VARCHAR(50), Price  DOUBLE )";

            // execute query
            stmt.executeUpdate(str);

            str = "INSERT  INTO  ALBUMS  VALUES ('Let It Be' , 'Beatles', 60 )";
            stmt.executeUpdate(str);

            str = "INSERT  INTO  ALBUMS  VALUES ( 'Imagine' , 'John Lennon', 50 )";
            stmt.executeUpdate(str);

            str = "INSERT  INTO  ALBUMS  VALUES ('The Wall' , 'Pink Floyd', 55 )";
            stmt.executeUpdate(str);

            stmt.close(); // Close connection
            con.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
