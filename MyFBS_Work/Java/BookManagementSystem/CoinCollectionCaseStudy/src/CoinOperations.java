import java.sql.Connection;
import java.sql.Date;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class CoinOperations {
    int count=0; 
    Scanner sc = new Scanner(System.in);
	List<Coin> coins = new ArrayList<>();
	
	public List<Coin> loadCoins(){
		
		String query = "SELECT * FROM Coins";
		Connection con = DBUtil.getDBConnection();
		try {
			Statement stmt = con.createStatement();
			
			ResultSet rs = stmt.executeQuery(query);
			
			 while (rs.next()) {
		            int cid = rs.getInt(1);
		            String country = rs.getString(2);
		            String denomination = rs.getString(3);
		            int yearOfMinting = rs.getInt(4);
		            double currentValue = rs.getDouble(5);
		            LocalDate acquiredDate = rs.getDate(6).toLocalDate();

		           
		            Coin coin = new Coin(cid, country, denomination, yearOfMinting, currentValue, acquiredDate);
		            coins.add(coin);
		            count++;
		        }
			
		} catch (SQLException e) {
			
			e.printStackTrace();
		}
		return coins;
	    
	}
	
	
	public void saveCoinToDB(Coin coin) {
        String query = "INSERT INTO Coins VALUES (?, ?, ?, ?, ?, ?)";
        Connection con = DBUtil.getDBConnection();
        try (PreparedStatement ps = con.prepareStatement(query)) {
            ps.setInt(1, coin.getCid());
            ps.setString(2, coin.getCountry());
            ps.setString(3, coin.getDenomination());
            ps.setInt(4, coin.getYearOfMinting());
            ps.setDouble(5, coin.getCurrentValue());
            ps.setDate(6, Date.valueOf(coin.getAcquiredDate()));
            ps.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
	
	public void addCoin(List<Coin> coins) {
		 
		Scanner sc = new Scanner(System.in);
		int id = ++count;
		System.out.print("Enter Country name: ");
		String country = sc.next();
		System.out.println("Enter Denomination: ");
        String denomination = sc.next();
        System.out.print("Enter Year of Minting: ");
        int year = sc.nextInt();
        System.out.print("Enter Current Value: ");
        double value = sc.nextDouble();
        System.out.print("Acquired Date (yyyy-mm-dd): ");
        LocalDate acquiredDate = LocalDate.parse(sc.next());
        
        Coin coin = new Coin(id,country, denomination, year, value, acquiredDate);
        coins.add(coin);
  //      saveCoinToDB(coin);
        System.out.println("Coin added to list.");
        

    }
	
	
	
	public void CoinList(List<Coin> coins) {
	    System.out.println("Enter choice for coinlist by (country / year / value): ");
	    String filter = sc.nextLine().trim().toLowerCase();

	    List<Coin> result = new ArrayList<>();

	    switch (filter) {
	        case "country" -> {
	            System.out.print("Enter country name: ");
	            String country = sc.nextLine().trim();
	            result = coins.stream()
	                    .filter(c -> c.getCountry().equalsIgnoreCase(country))
	                    .toList();
	        }
	        case "year" -> {
	            System.out.print("Enter year of minting: ");
	            int year = Integer.parseInt(sc.nextLine().trim());
	            result = coins.stream()
	                    .filter(c -> c.getYearOfMinting() == year)
	                    .toList();
	        }
	        case "value" -> {
	            System.out.print("Enter minimum current value: ");
	            double minValue = Double.parseDouble(sc.nextLine().trim());
	            result = coins.stream()
	                    .filter(c -> c.getCurrentValue() >= minValue)
	                    .sorted(Comparator.comparingDouble(Coin::getCurrentValue))
	                    .toList();
	        }
	        default -> {
	            System.out.println("Invalid option.");
	            return;
	        }
	    }

	    if (result.isEmpty()) {
	        System.out.println("No coins found.");
	    } else {
	        for (Coin coin : result) {
	            System.out.println(coin);
	        }
	        System.out.println(result.size() + " coin(s) found.");
	    }
	}
	
	
	
	
	public  void searchSpecificCoin(List<Coin> coins) {
	    System.out.println("Search by:");
	    System.out.println("1. Country + Denomination");
	    System.out.println("2. Country + Year of Minting");
	    System.out.println("3. Country + Denomination + Year of Minting");
	    System.out.println("4. Acquired Date + Country");
	    System.out.print("Choose option (1-4): ");
	    String option = sc.nextLine().trim();

	    List<Coin> result = new ArrayList<>();

	    switch (option) {
	        case "1" -> {
	            System.out.print("Enter Country: ");
	            String country = sc.nextLine().trim();
	            System.out.print("Enter Denomination: ");
	            String denomination = sc.nextLine().trim();

	            result = coins.stream()
	                    .filter(c -> c.getCountry().equalsIgnoreCase(country)
	                            && c.getDenomination().equalsIgnoreCase(denomination))
	                    .toList();
	        }
	        case "2" -> {
	            System.out.print("Enter Country: ");
	            String country = sc.nextLine().trim();
	            System.out.print("Enter Year of Minting: ");
	            int year = Integer.parseInt(sc.nextLine().trim());

	            result = coins.stream()
	                    .filter(c -> c.getCountry().equalsIgnoreCase(country)
	                            && c.getYearOfMinting() == year)
	                    .toList();
	        }
	        case "3" -> {
	            System.out.print("Enter Country: ");
	            String country = sc.nextLine().trim();
	            System.out.print("Enter Denomination: ");
	            String denomination = sc.nextLine().trim();
	            System.out.print("Enter Year of Minting: ");
	            int year = Integer.parseInt(sc.nextLine().trim());

	            result = coins.stream()
	                    .filter(c -> c.getCountry().equalsIgnoreCase(country)
	                            && c.getDenomination().equalsIgnoreCase(denomination)
	                            && c.getYearOfMinting() == year)
	                    .toList();
	        }
	        case "4" -> {
	            System.out.print("Enter Acquired Date (yyyy-mm-dd): ");
	            LocalDate date = LocalDate.parse(sc.nextLine().trim());
	            System.out.print("Enter Country: ");
	            String country = sc.nextLine().trim();

	            result = coins.stream()
	                    .filter(c -> c.getAcquiredDate().equals(date)
	                            && c.getCountry().equalsIgnoreCase(country))
	                    .toList();
	        }
	        default -> {
	            System.out.println("Invalid option.");
	            return;
	        }
	    }

	 
	    if (result.isEmpty()) {
	        System.out.println("No matching coins found.");
	    } else {
	        for (Coin coin : result) {
	            System.out.println(coin);
	        }
	        System.out.println(result.size() + " coin(s) found.");
	    }
	}
	 
}