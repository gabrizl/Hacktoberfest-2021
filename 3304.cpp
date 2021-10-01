# inclui  < bits / stdc ++. h >

usando  namespace  std ;

 busca bool ( long  long x, vetor < long  long > números) {
	int l = 0 , r = números ( int ). tamanho () - 1 ;
	
    enquanto (l <= r) {
        int m = l + (r - l) / 2 ;
  
        if (números [m] == x)
            return  true ;
  
        if (números [m] <x)
            l = m + 1 ;
  
        outro
            r = m - 1 ;
    }
    
    return  false ;
}

int  main () {
	ios_base :: sync_with_stdio ( false );
    cin. empate ( NULL );
	long  long n;
	

	vetor < long  long > números;
	
	para ( dígitos inteiros = 1 ; dígitos <= 8 ; ++ dígitos) {
		para ( máscara longa  longa = 0 ; máscara <( 1 << dígitos); máscara ++) {
			longo  longo newNum = 0 ;
			para ( longo  longo i = 0 ; i <dígitos; ++ i) {
				if (máscara & ( 1 << i)) {
						novoNum + = 7 * pow ( 10 , i);
				} mais
						novoNum + = 4 * pow ( 10 , i);
			}
			
			números. push_back (newNum);
		}
	}
	
	while (cin >> n) {
		bool ans = pesquisa (n, números);
		if (ans)
			cout << " sortudo \ n " ;
		else {	
			ans = falso ;
			
			para ( int i = 0 ; i <( int ) números. size (); ++ i) {
				if (números [i]> n)
					pausa ;
				if (n% números [i] == 0 ) {
					ans = verdadeiro ;
					pausa ;
				}
			}
			if (ans)
				cout << " quase sortudo \ n " ;
			outro
				cout << " azarado \ n " ;
		}
	}
	
	return  0 ;
}
