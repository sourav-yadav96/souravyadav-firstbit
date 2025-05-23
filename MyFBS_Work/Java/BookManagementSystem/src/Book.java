
public class Book {
    int bookId;
    String bookName;
    String authorName;
    String category;
    float price;
    float rating;
    
    public Book() {
    	
    }
    
	public Book(int bookId, String bookName, String authorName, String category, float price, float rating) {
		this.bookId = bookId;
		this.bookName = bookName;
		this.authorName = authorName;
		this.category = category;
		this.price = price;
		this.rating = rating;
	}

	public int getBookId() {
		return bookId;
	}

	public void setBookId(int bookId) {
		this.bookId = bookId;
	}

	public String getBookName() {
		return bookName;
	}

	public void setBookName(String bookName) {
		this.bookName = bookName;
	}

	public String getAuthorName() {
		return authorName;
	}

	public void setAuthorName(String authorName) {
		this.authorName = authorName;
	}

	public String getCategory() {
		return category;
	}

	public void setCategory(String category) {
		this.category = category;
	}

	public float getPrice() {
		return price;
	}

	public void setPrice(float price) {
		this.price = price;
	}

	public float getRating() {
		return rating;
	}

	public void setRating(float rating) {
		this.rating = rating;
	}
    
    
	public void displayBookInfo() {
        System.out.println("\nBook ID: " + bookId);
        System.out.println("Book Name: " + bookName);
        System.out.println("Author: " + authorName);
        System.out.println("Category: " + category);
        System.out.println("Price: " + price);
        System.out.println("Rating: " + rating);
    }
}
