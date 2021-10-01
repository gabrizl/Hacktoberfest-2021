import java.util.Scanner;

public class avarage {
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            float x, y, media;
            x = sc.nextFloat();
            y = sc.nextFloat();
            media = (x+y)/2;
            int limite = 7;
    
            if(media >= limite){
                System.out.println("pass: True!");
            }else{
                System.out.println("pass: False!");
            }
    
            sc.close();
        }
        
    }  

