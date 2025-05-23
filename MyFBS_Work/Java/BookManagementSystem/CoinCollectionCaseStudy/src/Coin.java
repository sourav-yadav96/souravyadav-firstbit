
import java.time.LocalDate;

public class Coin {
	
    int cid;
	String country;
    String denomination;
    int yearOfMinting;
    double currentValue;
    LocalDate acquiredDate;
    
    public Coin() 
    {
    	
    }

	 public Coin(int cid, String country, String denomination, int yearOfMinting, double currentValue,
			LocalDate acquiredDate) {
		this.cid = cid;
		this.country = country;
		this.denomination = denomination;
		this.yearOfMinting = yearOfMinting;
		this.currentValue = currentValue;
		this.acquiredDate = acquiredDate;
	}


	public int getCid() {
		return cid;
	}

	public void setCid(int cid) {
		this.cid = cid;
	}

	public String getCountry() {
		return country;
	}

	public void setCountry(String country) {
		this.country = country;
	}

	public String getDenomination() {
		return denomination;
	}

	public void setDenomination(String denomination) {
		this.denomination = denomination;
	}

	public int getYearOfMinting() {
		return yearOfMinting;
	}

	public void setYearOfMinting(int yearOfMinting) {
		this.yearOfMinting = yearOfMinting;
	}

	public double getCurrentValue() {
		return currentValue;
	}

	public void setCurrentValue(double currentValue) {
		this.currentValue = currentValue;
	}

	public LocalDate getAcquiredDate() {
		return acquiredDate;
	}

	public void setAcquiredDate(LocalDate acquiredDate) {
		this.acquiredDate = acquiredDate;
	}

	public void display() {
    	System.out.println("Cid:"+" " +cid );
    	System.out.println("Country:"+" " +country );
    	System.out.println("denomination:"+" " +denomination );
    	System.out.println("yearOfMinting:"+" " +yearOfMinting );
    	System.out.println("currentValue:"+" " +currentValue );
    	System.out.println("acquiredDate:"+" " +acquiredDate );
    	System.out.println();
    	
    }

	
	public String toString() {
		return "Coin [cid=" + cid + ", country=" + country + ", denomination=" + denomination + ", yearOfMinting="
				+ yearOfMinting + ", currentValue=" + currentValue + ", acquiredDate=" + acquiredDate + "]";
	}
	
	
}

