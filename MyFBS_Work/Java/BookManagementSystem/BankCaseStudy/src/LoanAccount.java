
public class LoanAccount extends Account {
	private double loanAmount;
	private double repaymentAmount;
    private static double INTEREST_RATE = 8.0;
    
 public LoanAccount() {
	 
 }

public LoanAccount(String accountHolderName, String accountNumber,double balance) {
	super(accountHolderName, accountNumber,-balance);
	this.loanAmount = -50000;
	this.repaymentAmount = 0;
}

public double getLoanAmount() {
	return loanAmount;
}

public void setLoanAmount(double loanAmount) {
	this.loanAmount = loanAmount;
}
 

public void calculateInterest() {
	if (balance < 0) {
	double interest;
    interest = (Math.abs(balance) * INTEREST_RATE ) / 100;
    balance =balance - interest;  
    
    System.out.println("Interest calculated: " + interest);
	}
   else {
	   System.out.println("Loan Amount is paid");
 }
}

public void repayLoan(double amount) {
    this.repaymentAmount = repaymentAmount + amount;
    this.balance = balance + amount;
}

@Override
public String toString() {
	return "LoanAccount [loanAmount=" + loanAmount + ", repaymentAmount=" + repaymentAmount + ", accountHolderName="
			+ accountHolderName + ", accountNumber=" + accountNumber + ", balance=" + balance + "]";
}
}
