import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Java_prt {
	public static void main(String[]args) {

	Scanner scan_cadena = new Scanner(System.in);
	System.out.println ("Introduzca una cadena de A y B para evaluar: ");
	String cadena = scan_cadena.nextLine();
	System.out.println("cadena introducida: "+ cadena);
	
	 Pattern pat = Pattern.compile("(A|B)+");
     Matcher mat = pat.matcher(cadena);      
     
     if (mat.matches()) {	 
  
           int totalA = 0;
           char temp;
           for (int i = 0; i < cadena.length(); i++) {

               temp = cadena.charAt(i);
               if (temp == 'A')
                   totalA++;
           }

           System.out.println("A aparece " + totalA + " veces");
           if (totalA==0|| totalA%3==0)
      		 System.out.println("SI es aceptable la cadena");
           else
      		 System.out.println("Cadena eronea solo debe tener  cantidad de A divisible entre 3");   
     }	 
     else 
         System.out.println("Cadena eronea solo debe tener  A o B en ella");                                                                                
	}
}



 //

/*	 
  //   System.out.println("SI");
	 Pattern pat2 = Pattern.compile("B*");
     Matcher mat2 = pat2.matcher(cadena); 
     //Pattern pat3 = Pattern.compile("A{0}|A{3}");
     //Matcher mat3 = pat3.matcher(cadena);  
	 
	 if (mat2.matches())//  && mat3.matches())
		 System.out.println("SI es aceptable la cadena");
	 
	 else
		 System.out.println("Cadena eronea solo debe tener  cantidad de A divisible entre 3");
		 
     
 } */
