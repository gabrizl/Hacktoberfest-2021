import java.io.*;
import java.util.*;
import java.io.IOException;
import java.util.Scanner;

public class HuxleyCode {

	public static void main(String[] args)throws IOException {
		Scanner lendo = new Scanner(System.in);
				
		int n = lendo.nextInt(); int n1 = lendo.nextInt();
		int matriz [][] = new int[n][n1];
		for(int i = 0; i < n; i++){
			for(int j =0; j< n1; j++){
				matriz[i][j]= lendo.nextInt();
			}
			}
		
		int aux = 0;

		for(int linha = 0; linha < matriz.length; linha++){
			for(int coluna = 0; coluna < matriz[linha].length; coluna++){
				int col = coluna;
				for(int i = linha; i < matriz.length; i++){		
					for(int j = col+1; j < matriz[i].length; j++){		
						if(matriz[linha][coluna] > matriz[i][j] ){
	   				
							aux = matriz[linha][coluna];
							matriz[linha][coluna] = matriz[i][j];
							matriz[i][j] = aux;
						}
					}
					col = -1;
				}
			}
		}
		
		
		for(int i = 0; i < n; i++){
			for(int j =0; j< n1; j++){
				System.out.print(matriz[i][j]);
				if(j != n1-1){
				System.out.print(" ");
				}
			}
			System.out.printf("\n");
		}
	}

}
