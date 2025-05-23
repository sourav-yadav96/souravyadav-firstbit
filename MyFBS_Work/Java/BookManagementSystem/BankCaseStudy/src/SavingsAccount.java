
public class SavingsAccount extends Account {
	private final double MIN_BALANCE = 10000;
    private static double INTEREST_RATE = 4.0;
    
    public SavingsAccount() {
    	
    }

	public SavingsAccount(String accountHolderName, String accountNumber, double balance) {
		super(accountHolderName, accountNumber, balance);
	}
	
	
    public void calculateInterest() {
		double interest;
        if (balance >= MIN_BALANCE) {
             interest = this.balance * INTEREST_RATE / 100; 
             balance = balance+ interest;
            System.out.println("Interest calculated for Savings Account: " + interest);
        }
    }
    
    public void withdraw(double amount) {
        if (MIN_BALANCE > balance - amount  ) {
            System.out.println(" Withdrawal denied: Minimum balance of " + MIN_BALANCE  + " must be maintained.");
        } else {
            balance = balance - amount;
            System.out.println("Withdrawal successful! New balance: " + balance);
        }
    }

	public String toString() {
		return "SavingsAccount [MIN_BALANCE=" + MIN_BALANCE + ", accountHolderName=" + accountHolderName
				+ ", accountNumber=" + accountNumber + ", balance=" + balance + "]";
	}
    
    
    

}
