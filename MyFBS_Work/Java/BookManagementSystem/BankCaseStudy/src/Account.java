
public abstract class Account {
	protected String accountHolderName;
	protected String accountNumber;
	protected double balance;

public Account() {

}

public Account(String accountHolderName, String accountNumber, double balance) {
	this.accountHolderName = accountHolderName;
	this.accountNumber = accountNumber;
	this.balance = balance;
}

public String getAccountHolderName() {
	return accountHolderName;
}

public void setAccountHolderName(String accountHolderName) {
	this.accountHolderName = accountHolderName;
}

public String getAccountNumber() {
	return accountNumber;
}

public void setAccountNumber(String accountNumber) {
	this.accountNumber = accountNumber;
}

public double getBalance() {
	return balance;
}

public void setBalance(double balance) {
	this.balance = balance;
}



public void deposit(double amount) {
    if (amount > 0) {
        this.balance=this.balance+ amount;
        System.out.println("Amount Successfully Deposited.");
    }
    else{
    	System.out.println("Amount not in negative");
    }
        
    
}


public void withdraw(double amount) {
    if (amount <= this.balance) {
        this.balance=this.balance - amount;
        System.out.println("Amount Successfully Withdraw.");
        } 
    else {
        System.out.println("Insufficient balance.");
    }
}


public abstract void calculateInterest();

public String toString() {
	return "Account [accountHolderName=" + accountHolderName + ", accountNumber=" + accountNumber + ", balance="
			+ balance + "]";
}
}

