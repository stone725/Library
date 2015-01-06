//それぞれの経路の長さが入力されたrootをもとにその全点を最短経路で返すように変更する関数

void warshall_floyd( vector<vector<int> > &root ) {
	for ( int i = 0; i < root.size(); i++ ) {
		for ( int j = 0; j < root.size(); j++ ) {
			for ( int k = 0; k < root.size(); k++ ) {
				root[ j ][ k ] = root[ k ][ j ] = min( root[ j ][ k ], root[ j ][ i ] + root[ i ][ k ] );
			}
		}
	}
}