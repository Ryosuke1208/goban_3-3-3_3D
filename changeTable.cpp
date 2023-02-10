void fill(int i, int j, int k, int player);

void changeTable(int puzzle[3][3][3], int x, int y, int z, int pNum, int flag) { //テーブル階層の移動関数
	puzzle[x][y][z] = pNum;
	if (x == 2 && y == 1 && z == 1) { //一番下の真ん中が埋まった時に
		fill(1, 1, 1, 5); //一つ上を塗りつぶしている
		puzzle[0][y][z] = flag;
	}
	else if (x != 0) puzzle[x - 1][y][z] = flag; //下が塗られたときに上のマスを操作可能にする
}