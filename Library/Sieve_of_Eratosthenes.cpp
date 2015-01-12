//nまでの素数を渡した配列に追加する関数
#include <vector>
using namespace std;

void sieve_of_eratosthenes( vector<int> &pm, int n ) {
	vector<bool> is_pm( n + 1, true );
	is_pm[ 0 ] = is_pm[ 1 ] = false;
	for ( int i = 2; i * i <= n; i += 2 ) {
		if ( is_pm[ i ] ) {
			for ( int j = i * i; j <= n; j += i ) {
				is_pm[ j ] = false;
				if ( i != 2 ) {
					j += i;
				}
			}
			if ( i == 2 ) {
				--i;
			}
		}
	}
	for ( int i = 2; i <= n; i += 2 ) {
		if ( is_pm[ i ] ) {
			pm.push_back( i );
			if ( i == 2 ) {
				--i;
			}
		}
	}
}