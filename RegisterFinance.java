
public class RegisterFinance{
    private int somaGanhos;
    private int ganhosIn;
    private int valorDespesa;
    private int totalDespesa;
    private int totalDisponivel;
    private int[] ganhosTotal;
    
    
    public RegisterFinance(int ganhosIniciais, int totalDeGanhos){
        ganhosTotal = new int[totalDeGanhos];
        ganhosIn = ganhosIniciais;
    }
    
    
    public void adicionaGanhos(int valorCentavos, int posicaoGanho){
        ganhosTotal[posicaoGanho - 1] = valorCentavos;
        somaGanhos = 0;
        for(int valor : ganhosTotal){
            somaGanhos += valor;  
        }  
        somaGanhos += ganhosIn;
    }

    
    public void pagaDespesa(int valorCentavos){
        valorDespesa = valorCentavos;
        totalDespesa += valorDespesa;
        totalDisponivel = somaGanhos - totalDespesa;
    }
    
    
    public String exibeGanhos(){
        String exibeValor = "";
        if(ganhosTotal.length == 1){
            exibeValor = "1 - " + ganhosTotal[0];
        }else{
            exibeValor = "1 - " + ganhosTotal[0];
            for(int i = 1; i < ganhosTotal.length; i++){
                exibeValor += "\n" + (i + 2) + " - " + ganhosTotal[i];
            }
        }
        return exibeValor;
    }

    
    public String toString(){
        return "Total recebidos: " + somaGanhos + ", Despesas totais: " + totalDespesa + ", Total dispon�vel: " + totalDisponivel;
    }

}

