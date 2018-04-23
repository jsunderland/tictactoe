
enum Player {
	cat,
	player1,
	player2
};

struct gamespace
{
	int value;
	enum Player player;
	char player_str[1]; 
};

enum Player findWinner(void);
void printBoard(void);
void fillMoves(void);
char *getPlayerStr(int player);
enum Player current_player;
