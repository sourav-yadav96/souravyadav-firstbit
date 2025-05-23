
public class BookManagementSystem {
	private Book[] books = new Book[100];  // Array to hold books
    private int bookCount = 0;             // Track the number of books
    
    
    public void addBook(int bookId, String bookName, String authorName, String category, float price, float rating) {
        if (bookCount < books.length) {
            books[bookCount] = new Book(bookId, bookName, authorName, category, price, rating);
            System.out.println("Book added successfully.");
            bookCount++;
        } else {
            System.out.println("Unable to add book.");
        }
    }
    
 // Remove a book by its ID
    public void removeBook(int bookId) {
        int index = -1;
        for (int i = 0; i < bookCount; i++) {
            if (books[i].bookId == bookId) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            System.out.println("Book with ID " + bookId + " not found.");
            return;
        }

  
 // Shift elements to the left to remove the book
        for (int i = index; i < bookCount - 1; i++) {
            books[i] = books[i + 1];
        }
        books[--bookCount] = null;                          // Clear the last slot
        System.out.println("Book removed successfully.");
    }

    
 // Search for a book by its ID
    public Book searchBook(int bookId) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].bookId == bookId) {
                return books[i];
            }
        }
        return null;
    }

   
 // Update an existing book
    public void updateBook(int bookId, String bookName, String authorName, String category, float price, float rating) {
        Book book = searchBook(bookId);
        if (book != null) {
            book.bookName = bookName;
            book.authorName = authorName;
            book.category = category;
            book.price = price;
            book.rating = rating;
            System.out.println("Book updated successfully.");
        } else {
            System.out.println("Book with ID " + bookId + " not found.");
        }
    }

   
    
 // Display all books
    public void displayBooks() {
        if (bookCount == 0) {
            System.out.println("No books available.");
            return;
        }

        for (int i = 0; i < bookCount; i++) {
            books[i].displayBookInfo();
        }
    }

   
 // Show books by a specific author
    public void showBooksByAuthor(String authorName) {
        boolean found = false;
        for (int i = 0; i < bookCount; i++) {
            if (books[i].authorName.equalsIgnoreCase(authorName)) {
                books[i].displayBookInfo();
                found = true;
            }
        }
        if (!found) {
            System.out.println("No books found by author " + authorName);
        }
    }

    
 // Show books by a specific category
    public void showBooksByCategory(String category) {
        boolean found = false;
        for (int i = 0; i < bookCount; i++) {
            if (books[i].category.equalsIgnoreCase(category)) {
                books[i].displayBookInfo();
                found = true;
            }
        }
        if (!found) {
            System.out.println("No books found in category " + category);
        }
    }

   
 // Display the top 3 books based on price and rating
    public void displayTop3Books() {
        if (bookCount < 3) {
            System.out.println("Not enough books to display top 3.");
            return;
        }

        
 // Sort books by price and rating
        Book[] topBooks = new Book[3];
        for (int i = 0; i < 3; i++) {
            topBooks[i] = books[i];
        }

        for (int i = 0; i < bookCount; i++) {
            for (int j = 0; j < 3; j++) {
                if (books[i].price > topBooks[j].price || (books[i].price == topBooks[j].price && books[i].rating > topBooks[j].rating)) {
                    for (int k = 2; k > j; k--) {
                        topBooks[k] = topBooks[k - 1];
                    }
                    topBooks[j] = books[i];
                    break;
                }
            }
        }

        System.out.println("\nTop 3 Books Based on Price and Rating:");
        for (int i = 0; i < 3; i++) {
            topBooks[i].displayBookInfo();
        }
    }
    

 // Sort books based on a given attribute
    public void sortBooks(int choice) {
        for (int i = 0; i < bookCount - 1; i++) {
            for (int j = i + 1; j < bookCount; j++) {
                boolean swap = false;
                switch (choice) {
                    case 1: // Sort by bookId
                        if (books[i].bookId > books[j].bookId) swap = true;
                        break;
                    case 2: // Sort by bookName
                        if (books[i].bookName.compareTo(books[j].bookName) > 0) swap = true;
                        break;
                    case 3: // Sort by authorName
                        if (books[i].authorName.compareTo(books[j].authorName) > 0) swap = true;
                        break;
                    case 4: // Sort by price
                        if (books[i].price > books[j].price) swap = true;
                        break;
                    case 5: // Sort by rating
                        if (books[i].rating < books[j].rating) swap = true;
                        break;
                }
                if (swap) {
                    // Swap books[i] and books[j]
                    Book temp = books[i];
                    books[i] = books[j];
                    books[j] = temp;
                }
            }
        }
    }
}
