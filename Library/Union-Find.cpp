//Union-Find木
#include <vector>

struct Union_Find {
	vector<int> par;
	vector<int> rank;

	//初期化
	void init( int n ) {
		par.resize( n );
		rank.resize( n );
		for ( int i = 0; i < n; ++i ) {
			par[ i ] = i;
			rank[ i ] = 0;
		}
	}

	//木の根を探す
	int find( int s ) {
		if ( par[ s ] == s ) {
			return s;
		}
		return par[ s ] = find( par[ s ] );
	}

	//結合
	void unite( int x, int y ) {
		int a = find( x ), b = find( y );
		if ( a == b ) {
			return;
		}
		if ( rank[ x ] < rank[ y ] ) {
			par[ x ] = y;
		}
		else {
			par[ y ] = x;
			if ( rank[ x ] == rank[ y ] ) {
				++rank[ x ];
			}
		}
	}

	//二つの数の根が同じかどうか
	bool same( int x, int y ) {
		return find( x ) == find( y );
	}

	//サイズを返す
	unsigned int size() {
		return par.size();
	}
};