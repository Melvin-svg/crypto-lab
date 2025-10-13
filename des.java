import java.util.Base64;
import java.util.Scanner;
import javax.crypto.Secretkey;
import javax.crypto.SecretkeyFactory;
import javax.crypto.cipher;
import javax.crypto.spec.DESKeySpec;
public class DESEncryption{
	private static final String ALGORITHM="DES";
	public static void main(String[] args){
		try{
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter key (8 bytes)");
			String keyInput=sc.nextLine();
			if (keyInput.length()!=8){
				throw new IllegalArguementException("Key must be exactly 8 bytes long");
			}

		}
	}
}
