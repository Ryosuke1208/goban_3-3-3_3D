void fill(int i, int j, int k, int player);

void changeTable(int puzzle[3][3][3], int x, int y, int z, int pNum, int flag) { //�e�[�u���K�w�̈ړ��֐�
	puzzle[x][y][z] = pNum;
	if (x == 2 && y == 1 && z == 1) { //��ԉ��̐^�񒆂����܂�������
		fill(1, 1, 1, 5); //����h��Ԃ��Ă���
		puzzle[0][y][z] = flag;
	}
	else if (x != 0) puzzle[x - 1][y][z] = flag; //�����h��ꂽ�Ƃ��ɏ�̃}�X�𑀍�\�ɂ���
}