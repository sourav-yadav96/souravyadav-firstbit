import java.util.Scanner;

public class Main {
		public static void main(String[] args) {
	        Scanner sc = new Scanner(System.in);
	        BookManagementSystem system = new BookManagementSystem();

	        while (true) {
	            System.out.println("\n----- Book Management System -----");
	            System.out.println("1. Add Book");
	            System.out.println("2. Remove Book");
	            System.out.println("3. Search Book");
	            System.out.println("4. Update Book");
	            System.out.println("5. Display All Books");
	            System.out.println("6. Show Books by Author");
	            System.out.println("7. Show Books by Category");
	            System.out.println("8. Display Top 3 Books");
	            System.out.println("9. Sort Books");
	            System.out.println("10. Exit");
	            System.out.print("Enter your choice: ");
	            int choice = sc.nextInt();
	            sc.nextLine();                                      

	            switch (choice) {
	                case 1:
	                    System.out.print("Enter Book ID: ");
	                    int bookId = sc.nextInt();
	                    sc.nextLine();                              
	                    System.out.print("Enter Book Name: ");
	                    String bookName = sc.nextLine();
	                    System.out.print("Enter Author Name: ");
	                    String authorName = sc.nextLine();
	                    System.out.print("Enter Category: ");
	                    String category = sc.nextLine();
	                    System.out.print("Enter Price: ");
	                    float price = sc.nextFloat();
	                    System.out.print("Enter Rating: ");
	                    float rating = sc.nextFloat();
	                    system.addBook(bookId, bookName, authorName, category, price, rating);
	                    break;

	                case 2:
	                    System.out.print("Enter Book ID to Remove: ");
	                    bookId = sc.nextInt();
	                    system.removeBook(bookId);
	                    break;

	                case 3:
	                    System.out.print("Enter Book ID to Search: ");
	                    bookId = sc.nextInt();
	                    Book book = system.searchBook(bookId);
	                    if (book != null) {
	                        book.displayBookInfo();
	                    } else {
	                        System.out.println("Book not found.");
	                    }
	                    break;

	                case 4:
	                    System.out.print("Enter Book ID to Update: ");
	                    bookId = sc.nextInt();
	                    sc.nextLine();                                        
	                    System.out.print("Enter New Book Name: ");
	                    bookName = sc.nextLine();
	                    System.out.print("Enter New Author Name: ");
	                    authorName = sc.nextLine();
	                    System.out.print("Enter New Category: ");
	                    category = sc.nextLine();
	                    System.out.print("Enter New Price: ");
	                    price = sc.nextFloat();
	                    System.out.print("Enter New Rating: ");
	                    rating = sc.nextFloat();
	                    system.updateBook(bookId, bookName, authorName, category, price, rating);
	                    break;

	                case 5:
	                    system.displayBooks();
	                    break;

	                case 6:
	                    System.out.print("Enter Author Name: ");
	                    sc.nextLine();                                       
	                    authorName = sc.nextLine();
	                    system.showBooksByAuthor(authorName);
	                    break;

	                case 7:
	                    System.out.print("Enter Category Name: ");
	                    sc.nextLine();                                        
	                    category = sc.nextLine();
	                    system.showBooksByCategory(category);
	                    break;

	                case 8:
	                    system.displayTop3Books();
	                    break;

	                case 9:
	                    System.out.println("1. Sort by Book ID");
	                    System.out.println("2. Sort by Book Name");
	                    System.out.println("3. Sort by Author Name");
	                    System.out.println("4. Sort by Price");
	                    System.out.println("5. Sort by Rating");
	                    System.out.print("Enter your choice: ");
	                    int sortChoice = sc.nextInt();
	                    system.sortBooks(sortChoice);
	                    break;

	                case 10:
	                    System.out.println("Exiting...");
	                    sc.close();
	                    System.exit(0);
	                    break;

	                default:
	                    System.out.println("Invalid choice. Try again.");
	            }
	        }

	}

}
