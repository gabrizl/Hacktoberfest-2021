public class increasingDecreasing {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x, y, m, z;
        x = sc.nextInt();
        y = sc.nextInt();
        m = sc.nextInt();
        z = sc.nextInt();

        if(x < y && y < m && m < z){
            System.out.println("POSSIVELMENTE ESTRITAMENTE CRESCENTE");
        }else if(x > y && y > m && m > z){
            System.out.println("POSSIVELMENTE ESTRITAMENTE DECRESCENTE");
        }else{
            System.out.println("FUNCAO NAO ESTRITAMENTE CRES/DECR");
        }

        sc.close();
    }
}
