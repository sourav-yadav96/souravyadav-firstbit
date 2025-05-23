import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MainApp {

	public static void main(String[] args) {
        
		Scanner sc = new Scanner(System.in);
		System.out.println();
        CoinOperations conn = new CoinOperations();
      List<Coin> coins = new ArrayList<>();
      coins = conn.loadCoins();

      
      boolean running = true;

      while (running) {
          System.out.println("\n==============================");
          System.out.println("     COIN COLLECTION MENU     ");
          System.out.println("==============================");
          System.out.println("1. Add New Coin");
          System.out.println("2. List Coins by Filter");
          System.out.println("3. Search Specific Coin");
          System.out.println("4. Exit");
          System.out.print("Enter your choice: ");
          
          int choice = sc.nextInt();

          switch (choice) {
              case 1 -> {
                  System.out.println("\n--- Add Coin ---");
                  conn.addCoin(coins);
              }

              case 2 -> {
                  System.out.println("\n--- List Coins ---");
                  conn.CoinList(coins);
              }

              case 3 -> {
                  System.out.println("\n--- Search Specific Coin ---");
                  conn.searchSpecificCoin(coins);
              }

              case 4 -> {
                  System.out.println("\nThank you for using the Coin Collection Manager.");
                  running = false;
              }

              default -> {
                  System.out.println("Invalid choice. Please select between 1 to 4.");
              }
          }
      }

      sc.close();
}
}