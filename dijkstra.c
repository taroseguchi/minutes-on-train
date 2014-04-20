#include <stdio.h>
#include <stdlib.h>

#define INF 10000
#define SIZE 101

void dijkstra(int, int);
int readeki(char* name);

int main(int argc, char *argv[])
{
	int start, goal;
	if (argc != 3){
		fprintf(stderr, "Usage: ./a.out <start> <goal>\n");
		exit(1);
	}else {
		start = readeki(argv[1]);
		goal = readeki(argv[2]);
		if (start == -1 || goal == -1){
			fprintf(stderr, "Wrong spelling\n");
			exit(1);
		}
	}
	dijkstra(start, goal);

	return 0;
}

void dijkstra(int start, int goal) 
{
	extern int data[SIZE][SIZE];/*経路情報,内容はmatrix.cに*/
	extern char eki[SIZE][20];
	int cost[SIZE];
	int visit[SIZE];
	int min;
	int i, x;

	for (i = 0; i < SIZE; i++) { /*すべての駅を未訪問、コストを無限大*/
		cost[i] = INF;
		visit[i] = 0;/*未訪問で0、訪問済みで1*/
	}

	cost[start] = 0; /*出発駅のコストを0に*/
	
	while(1) {
		min = INF;
		for (i = 0; i < SIZE; i++) { /*最小コストの未訪問の駅を探す*/
			if (visit[i] == 0 && cost[i] < min) {
				x = i;
				min = cost[x];
			}
		}
		if (min == INF) {/*更新できないため探索終了*/ 
			break;
		}
		visit[x] = 1; 
		
		for (i = 0; i < SIZE; i++) {/*最小コスト駅を経由したコストに更新*/
			if (cost[i] > data[x][i] + cost[x]) {
				cost[i] = data[x][i] + cost[x];
			}
		}
	}
	printf("It takes %d minutes from %s to %s.\n"
									, cost[goal], eki[start], eki[goal]);	
}

