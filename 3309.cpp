# inclui  < bits / stdc ++. h >

usando  namespace  std ;

int  happyNumber ( int x) {
	int res = 0 ;
	
	enquanto (x> 0 ) {
		res + = (x% 10 ) * (x% 10 );
		
		x / = 10 ;
	}
	
	return res;
}

int  main () {
	int n, ans = 0 ;
	
	cin >> n;
	
	enquanto (n -) {
		int x;
		
		cin >> x;
		
		definir < int > previousValues;
		
		valores anteriores. inserir (x);
		while ( true ) {
			int res = happyNumber (x);
				
			if (res == 1 ) {
				ans ++;
				pausa ;
			}
			
			if (previousValues. find (res)! = previousValues. end ())
				pausa ;
				
			x = res;
			valores anteriores. inserir (x);
		}
	}
	
	cout << ans << ' \ n ' ;
	
	
	return  0 ;
}
