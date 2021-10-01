# inclui  < bits / stdc ++. h >

usando  namespace  std ;

# define  pb push_back


int  main () {
    ios_base :: sync_with_stdio ( false );
    cin. empate ( NULL );  

    int trem = 0 , C, N;

    cin >> c >> n;

    bool flag = true ;
    int sairam, entraram, confirmado;
    para ( int i = 0 ; i <n; ++ i) {
        cin >> sairam >> entraram >> conhecido;

        // Se saírem mais pessoas do que a quantidade atual do trem.
        if (sairam> trem)
            flag = false ;        
        trem - = sairam;

        // Se o trem exceder uma capacidade máxima
        if ((entraram + trem)> c)
            flag = false ;
        trem + = entraram;

        // Os passageiros devem esperar apenas se o trem estiver em sua capacidade máxima.
        se (conhecido) {
            if (trem! = c)
                flag = false ;
        }

    }
    
    // Verifica se o trem está vazio na última estação.
    flag &&! trem? cout << " possível \ n " : cout << " impossível \ n " ;

    return  0 ;
}
