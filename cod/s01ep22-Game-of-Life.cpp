#include <iostream>
#include <thread>
#define SIZE 10

using namespace  std;

std::string WORLD[SIZE] = {
	"          ",
	"          ",
	"          ",
	"          ",
	"    *     ",
	"   **     ",
	"   * *    ",
	"          ",
	"          ",
	"          ",
};
string NEW_WORLD[SIZE] = {
	"          ",
	"          ",
	"          ",
	"          ",
	"          ",
	"          ",
	"          ",
	"          ",
	"          ",
	"          "
}; 

void save_world() {
	for (int i = 0; i < SIZE; i++) {
		WORLD[i] = NEW_WORLD[i];
	}
}

// citim starea inițială a Lumii (10x10)
// afisam lumea pe ecran
// repetă până atingem 100 de generații
//		evoluăm (calculăm generația viitoare)
// 		afisam lumea pe ecran
// GATA

void show() {
	cout << ".----------." << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "|" << WORLD[i] <<  "|" << endl;
	}
	cout << "`----------'" << endl;
}

int is_alive(int x, int y) {
	x = (x + SIZE) % SIZE;
	y = (y + SIZE) % SIZE;

	if (WORLD[y][x] == ' ') {
		return 0;
	}
	return 1; 
}

int count_neighbours(int x, int y) {
	return
		is_alive(x-1, y-1) +
		is_alive(x  , y-1) +
		is_alive(x+1, y-1) +
		is_alive(x-1, y  ) +
		is_alive(x+1, y  ) +
		is_alive(x-1, y+1) +
		is_alive(x  , y+1) +
		is_alive(x+1, y+1);
}

void kill(int x, int y) {
	NEW_WORLD[y][x] = ' ';
}

void leave_in_place(int x, int y) {
	NEW_WORLD[y][x] = WORLD[y][x];
}

void populate(int x, int y) {
	NEW_WORLD[y][x] = '*';
}

void evolve() {
	for (int y = 0; y < SIZE; y++) {
		for (int x = 0; x < SIZE; x++) {
			int n = count_neighbours(x, y);
			if (n < 2) { //0, 1
				// kill it starvation
				kill(x, y);
			}
			if (n==2) {
				leave_in_place(x, y);
			}
			if (n == 3) { // 3
				// populate if not empty
				populate(x, y);
			}
			if (n >= 4) { // 4, 5, .., 8
				// kill overpopulation
				kill(x, y);
			}
		}
	}
	save_world();
}

int main() {
  unsigned generation = 0;
  
  while (generation < 100) {
	cout << "\033c";
  	cout << "Generation: " << generation << endl;
  	show();
  	evolve();
	generation++;
	this_thread::sleep_for(chrono::milliseconds(100));
  }
} 
