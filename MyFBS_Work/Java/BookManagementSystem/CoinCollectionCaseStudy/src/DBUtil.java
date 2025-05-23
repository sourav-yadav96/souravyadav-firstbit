import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBUtil {
     
      static String url = "jdbc:mysql://localhost:3306/coin_db";
      static String username = "root";
      static String password = "root";
      
      public static Connection getDBConnection() {
      	Connection con = null;
      	try {
  			Class.forName("com.mysql.cj.jdbc.Driver");
  			
  			try {
  				con = DriverManager.getConnection(url,username,password);
  				
  			} catch (SQLException e) {
  				e.printStackTrace();
  			}
  	    	
  		} catch (ClassNotFoundException e) {
  			e.printStackTrace();
  		}
      	 
      	return con;
      }
      
      
      public static  boolean closeResources(Connection con) {
    	  try {
			con.close();
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return true;
		
      }
}