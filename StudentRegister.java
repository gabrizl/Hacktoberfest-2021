import java.util.Arrays;

public class StudentRegister{
    private String nomeDisc;
    private int quantHoras;
    private double soma; 
    private double media;
    private double[] notas = new double[4];

    
    public StudentRegister(String nomeDisciplina){
        nomeDisc = nomeDisciplina;
    }
        
    
    public void cadastraHoras(int horas){
        quantHoras = horas;
    }

    
    public void cadastraNota(int nota, double valorNota){   
        notas[nota - 1] = valorNota;       
    }

    
    public boolean aprovado(){
        soma = 0;
        for(double nota : notas){
            soma += nota;
        }
        
        media = soma/notas.length;

        if(media >= 7){
            return true;
        }else{
            return false;
        }
    }

    
    public String toString(){
        return nomeDisc + " " + quantHoras + " " + media + " " + Arrays.toString(notas);
    }
}