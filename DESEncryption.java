import java.util.Base64;
import java.util.Scanner;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.Cipher;
import javax.crypto.spec.DESKeySpec;
public class DESEncryption{
        private static final String ALGORITHM="DES";
        public static void main(String[] args){
                try{
                        Scanner sc=new Scanner(System.in);
                        System.out.println("Enter key (8 bytes)");
                        String keyInput=sc.nextLine();
                        if (keyInput.length()!=8){
                                throw new IllegalArgumentException("Key must be exactly 8 bytes long");
                        }
			SecretKeyFactory keyfactory=SecretKeyFactory.getInstance(ALGORITHM);
			DESKeySpec keySpec=new DESKeySpec(keyInput.getBytes());
			SecretKey key=keyfactory.generateSecret(keySpec);
			Cipher cipher=Cipher.getInstance(ALGORITHM);

			System.out.println("Enter the string to encrypt:");
			String orgStr=sc.nextLine();
			cipher.init(Cipher.ENCRYPT_MODE,key);
			byte[] enBytes=cipher.doFinal(orgStr.getBytes());
			String enString=Base64.getEncoder().encodeToString(enBytes);

			System.out.println("Encrypted String:"+enString);
			cipher.init(Cipher.DECRYPT_MODE,key);
			byte[] deBytes=cipher.doFinal(Base64.getDecoder().decode(enString));
			String deString=new String(deBytes);
			System.out.println("Decrypted String:"+deString);
                }
		catch(Exception e){
			e.printStackTrace();
		}
        }
}
