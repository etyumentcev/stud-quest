#include "Background.h"


void Background::Draw()
{
	char arr[200][150];
	int x = 200, y = 150;

	for (int i = 0; i <= x - 1; i = i++)
	{
		for (int j = 0; j <= y - 1; j++)
		{
			arr[i][j] = ' ';

		}
	}
	for (int i = 0; i <= x - 1; i = i + x - 1) {
		for (int j = 0; j <= y - 1; j++) {
			arr[i][j] = '*';
		}
	}
	for (int i = 0; i <= y - 1; i = i + y - 1) {
		for (int j = 0; j <= x - 1; j++) {
			arr[j][i] = '*';
		}
	}
	for (int i = 0; i <= x - 1; i = i++) {
		for (int j = 0; j <= y - 1; j++) {
			cout << arr[i][j] << " ";

		}
		cout << endl;
	}
}