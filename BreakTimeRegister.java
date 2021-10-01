
public class BreakTimeRegister{
    private int horas;
    
    private int semanas;
    private String status;
    
    public void defineHorasDescanso(int valor){
        horas = valor;
    } 
    
    
    public void defineNumeroSemanas(int valor){
        semanas = valor;
    }
    
    
    public String getStatusGeral(){
        status = "cansado";
        if(horas == 0 || semanas == 0 || (horas / semanas) < 26 ){
            status = "cansado";
        }else if ((horas/semanas) >= 26){
            status = "descansado";
        } 
        return status;
    }
}
