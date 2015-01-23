//それぞれの経路の長さが入力されたrouteをもとにその全点を最短経路で返すように変更する関数

void warshall_floyd( vector<vector<int> > &route ) {
	for ( int i = 0; i < route.size(); i++ ) {
		for ( int j = 0; j < route.size(); j++ ) {
			for ( int k = 0; k < route.size(); k++ ) {
				route[ j ][ k ] = min( route[ j ][ k ], route[ j ][ i ] + route[ i ][ k ] );
			}
		}
	}
}