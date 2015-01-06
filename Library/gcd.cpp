int gcd( int n, int m ) {
	if ( m == 0 ) {
		return n;
	}
	return gcd( m, n % m );
}